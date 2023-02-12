#include<iostream>
using namespace std;

class employe
{
	private :
		int id,salary,age;
		string name,role,exp,city,cname;
	public :
		void setdata()
		{
			cout << "Enter ID : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Role : ";
			cin >> role;
			cout << "Enter Salary : ";
			cin >> salary;
			cout << "Enter Experience : ";
			cin >> exp;
			cout << "Enetr city : ";
			cin >> city;
			cout << "Emter Company name : ";
			cin >> cname;
		}
		void getdatad()
		{
			cout << id << "\t" << name << "\t" << age << "\t" << role 
				 << "\t" << salary << "\t" << exp << "\t" << city << "\t" << cname << endl;
		}
	
};

int main()
{
	employe e1,e2,e3,e4,e5;
	
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();
	
	cout << "id\tname\tage\trole\tsalary\texp\tcity\tcname" << endl;
	cout << "======= ======= ======= ======= ======= ======= ======= ======= " << endl;
	
	e1.getdatad();
	e2.getdatad();
	e3.getdatad();
	e4.getdatad();
	e5.getdatad();
	
}

