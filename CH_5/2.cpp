#include<iostream>
using namespace std;

class Customers
{
	private :
		int id,age,simcard;
		string name,mn,telecom,city;
	public :
		void getdata()
		{
			cout << "Enter id\t: ";
			cin >> id;
			cout << "Enter name\t: ";
			cin >> name;
			cout << "Enter age\t: ";
			cin >> age;
			cout << "Enter M No\t: ";
			cin >> mn;
			cout << "Enter brand\t: ";
			cin >> telecom;
			cout << "Enter city\t: ";
			cin >> city;
			cout << "Enter card\t: ";
			cin >> simcard;
		}
		void setdata()
		{
			cout << "Id\t: " << id << endl
	   			 << "Name\t: " << name << endl
	   			 << "Age\t: " << age << endl
	   			 << "M no\t: " << mn << endl
	   			 << "brand\t: " << telecom << endl
	   			 << "City\t: " << city << endl
	   			 << "card\t: " << simcard << endl;
		}
	
};

int main()
{
	Customers s1,s2,s3,s4,s5;
	
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
