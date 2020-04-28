#include "pch.h"
#include <iostream>
#include "Student.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	Student stud[3] = {
	 Student(1, "vas", "vad", 2, 1, 2000, "kurb", 3 + 10000, "Ki-406", "itmt"),
	 Student(2, "aaa", "zzz", 15, 6, 2001, "kurb", 3 + 10000, "Ki-406", "itmt"),
	 Student(3, "bbb", "xxx", 27, 12, 2002, "kurb", 3 + 10000, "Ki-406", "itmt") };

	//Завдання 1
	cout << "Факультет:\t";
	string facultet;
	cin >> facultet;

	for (int i(0); i < 3; i++)
	{
		if (facultet._Equal(stud[i].getFacul()))
			cout << facultet << endl;
	}

	//Завдання 2
	cout << "Рiк народження:\t";
	int year;
	cin >> year;

	for (int i(0); i < 3; i++)
	{
		if (year < stud[i].getYear())
			cout << stud[i].getName() << endl;
	}

	//Завдання 3
	cout << "Група:\t";
	string group;
	cin >> group;
	cout << "\n   " + group << endl;
	for (int i(0); i < 3; i++)
	{
		if (group._Equal(stud[i].getGroup()))
			cout << stud[i].getName() << ' ' << stud[i].getSurname() << endl;
	}
	
	return 0;
}
 