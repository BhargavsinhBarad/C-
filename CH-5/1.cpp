#include<iostream>
using namespace std;

class student
{
	private :
		int id,age;
		string name,course,email,city,college;
	public :
		void getdata()
		{
			cout << "Enter id\t: ";
			cin >> id;
			cout << "Enter name\t: ";
			cin >> name;
			cout << "Enter age\t: ";
			cin >> age;
			cout << "Enter course\t: ";
			cin >> course;
			cout << "Enter emial\t: ";
			cin >> email;
			cout << "Enter city\t: ";
			cin >> city;
			cout << "Enter college: ";
			cin >> college;
		}
		void setdata()
		{
			cout << "Id\t: " << id << endl
	   			 << "Name\t: " << name << endl
	   			 << "Age\t: " << age << endl
	   			 << "Course\t: " << course << endl
	   			 << "Email\t: " << email << endl
	   			 << "City\t: " << city << endl
	   			 << "Colleg\t: " << college << endl;
		}
	
};

int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.getdata();
	s1.setdata();
	
	s2.getdata();
	s2.setdata();
	
	s3.getdata();
	s3.setdata();
	
	s4.getdata();
	s4.setdata();
	
	s5.getdata();
	s5.setdata();
}
