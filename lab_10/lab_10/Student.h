
#include <string>

using std::string;

class Student
{
public:
	Student(void);
	Student(int, string, string, int, int, int, string, int, string, string);
	~Student();

	void setId(int);
	void setSurname(string);
	void setName(string);
	void setdate(int,int,int);
	void setAdress(string);
	void setPhoneNumber(int);
	void setGroup(string);
	void setFacul(string);

	int getId();
	string getSurname();
	string getName();
	int getDay();
	int getMonth();
	int getYear();
	string getAdress();
	int getPhone();
	string getGroup();
	string getFacul();

private:
	int id;
	string surname;
	string name;
	int day;
	int month;
	int year;
	string adress;
	int  phone_num;
	string group;
	string facul;
};

