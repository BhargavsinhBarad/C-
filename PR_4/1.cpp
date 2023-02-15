#include<iostream>
using namespace std;

class employe{
	private :
		int id;
		string name,role,salary,experience,address, email,contact;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter role : ";
			cin >> role;
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter experience : ";
			cin >> experience;
			cout << "Enter address : ";
			cin >> address;
			cout << "Enter email : ";
			cin >> email;
			cout << "Enter contact :";
			cin << contact; 
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "name : " << name << endl;
			cout << "role : " << role << endl;
			cout << "salary : " << salary << endl;
			cout << "experience : " << experience << endl;
			cout << "address : " << address << endl;
			cout << "email : " << email << endl;
			cout << "contact : " << contact << endl;
		}		
	
};

int main()
{
	employe e[5];
	
	for(int i=0;i<5;i++) e[i].setdata();
	for(int i=0;i<5;i++) e[i].getdata();
}
