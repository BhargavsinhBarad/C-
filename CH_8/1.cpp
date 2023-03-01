#include<iostream>
using namespace std;

class Admin{
	private :
		string can_terminate="Tomanager,Toemployee";
		int total_annual_revenue=100000;
	protected :
		int manager_salary=150;
		int employee_salary=25;
		int total_staff=35;
		string company_name="ABCcom";
	public :
		void myaccess(){ 
			cout << "Total revenue : " << total_annual_revenue << endl; 
			cout << "Can_terminate : " << can_terminate << endl ; 
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl; 
			cout << "Employee_salary : " << employee_salary << endl; 
			cout << "Total_staff : " << total_staff << endl; 
		}		
		
};
class Manager : public Admin{
	public :
		void myaccess(){   
			cout << "Company_name : " << company_name << endl; 
			cout << "Manager_salary : " << manager_salary << endl; 
			cout << "Employee_salary : " << employee_salary << endl; 
			cout << "Total_staff : " << total_staff << endl; 
		}
};
class Emp : public Manager{
	public :
		void myaccess(){  
			cout << "Company_name : " << company_name << endl;  
			cout << "Employee_salary : " << employee_salary << endl;  
		}
};

int main()
{
	Emp e;
	e.myaccess();
	cout << endl;
	e.Manager::myaccess();
	cout << endl;
	e.Admin::myaccess();
}
