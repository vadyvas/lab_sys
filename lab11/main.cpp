#include <QCoreApplication>
#include <QList>
#include <QStack>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // завдання 1
    QList <int> l1, l2;

    for(int i = 0; i< 10; i++)
    {
        l1.push_back(i);
        l2.push_back(10 + i);
    }

    for (int i = 0 ; i< l2.size(); i++)
        l1.append(l2.at(i));

    for (int i = 0; i< l1.size(); i++)
        qDebug () << l1.at(i) ;


    // завдання 2
    qDebug () << "\n\n\n";
    QStack <int> st;
    for (int i = 0 ; i< 10; i++)
        st.push(i);

    int count= 0 ,
            neib = 5 ; // число сусідів елементу якого потрібно знайти
    int l = st.size();

    for (int i = 0 ; i< l; i++)
    {
        int aa = st.pop();
        if ((aa + 1) == neib || (aa - 1) == neib )
            count++;
    }
    qDebug () << "Neib:" << count;
    return a.exec();
}
