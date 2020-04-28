#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n = 100; // кількість записів

    QFile file("file.bin");
    if(file.open(QIODevice::WriteOnly))
    {
        QDataStream stream(&file);
        stream. setVersion(QDataStream::Qt_4_2);
        for (int i  =0 ; i < n; i++)
        {
            stream << "name" + QString::number(i) << QString::number(rand()%5 + 1) <<
                      QString::number(rand() % 5 + 1) << QString::number(rand() % 5 + 1);
        }
        //        stream << QPointF(30, 30) << QImage("image.png");
        if(stream.status() != QDataStream::Ok)
        {
            qDebug() << "Ошибка записи";
        }
    }
    file.close();

    QString name;
    QString math, phys, inf;
    if(file.open(QIODevice::ReadOnly))
    {
        QDataStream stream(&file);
        stream.setVersion (QDataStream::Qt_4_2) ;
        for (int i = 0; i < n; i++)
        {
            stream >> name >> math >> phys >> inf;
            if (math.toInt() == 5)
            qDebug() << name << math;
        }
        if(stream.status() != QDataStream::Ok)
        {
            qDebug() << "Ошибка чтения файла";
        }
        file.close();
    }

    return a.exec();
}
