#include<iostream>
using namespace std;

class student{
	private :
		int id;
		string name,email,contact;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter email : ";
			cin >> email;
			cout << "Enter contact :";
			cin >> contact; 
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "name : " << name << endl;
			cout << "email : " << email << endl;
			cout << "contact : " << contact << endl;
		}		
	
};

int main()
{
	int n;
	cout << "Enter N : ";
	cin >> n;
	
	student s[n];
	
	for(int i=0;i<n;i++) s[i].setdata();
	for(int i=0;i<n;i++) s[i].getdata();
}
