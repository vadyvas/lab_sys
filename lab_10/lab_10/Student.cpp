
#include "pch.h"
#include "Student.h"
#include <string>

using std::string;

Student::Student(void) { id = 0; }
Student::Student(int Id, string Surnam, string Name, int Day, int Month, int Year, string Adress,int Phone_number,string Group, string Facul )
{
	id = Id;
	surname = Surnam;
	name = Name;

	day = Day;
	month = Month;
	year = Year;
	
	adress = Adress;
	phone_num = Phone_number;
	group = Group;
	facul = Facul;
}

void Student::setId(int Id) { id = Id;}
void Student::setSurname(string Surname) { surname = Surname; }
void Student::setName(string Name) { name = Name; }
void Student::setdate(int Day, int Month, int Year) { day = Day; month = Month; year = Year; }
void Student::setAdress(string Adress) { adress = Adress; }
void Student::setPhoneNumber(int PhoneNumber) { phone_num = PhoneNumber; }
void Student::setGroup(string Group) { group = Group; }
void Student::setFacul(string Facul) { facul = Facul; }

int Student::getId() { return id; }
string Student::getSurname() { return surname; }
string Student::getName() { return name; }
int Student::getDay() { return day; }
int Student::getMonth() { return month; }
int Student::getYear() { return year; }
string Student::getAdress() { return adress; }
int Student::getPhone() { return phone_num; }
string Student::getGroup() { return group; }
string Student::getFacul() { return facul; }

Student::~Student()
{
}
