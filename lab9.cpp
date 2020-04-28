#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct stud
{
	string name,
		last;
	int math,
		phis,
		inf;
};

int main()
{
	stud s;
	string str;
	ifstream fin;
	int count = 0;
	fin.open("E:/data.txt");
	if (!fin.is_open())
		cout << "err";
	else {
		while (!fin.eof())
		{
			fin >> s.name >> s.last >> s.math >> s.phis >> s.inf;
			if (s.math == 5) {
				count++;
				cout << s.name << endl;
			}
		}
		fin.close();
		cout << count << endl;
	}

}