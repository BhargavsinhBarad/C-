#include<iostream>
using namespace std;

class first{
	private :
		int id;
		string name;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin >> name; 
		}
		void getdata()
		{
			cout << "ID : " << id << endl;
			cout << "Name : " << name << endl;
		}
};
class second{
	private :
		first s[5];
	public :
		void read()
		{
			for(int i=0;i<5;i++)
			{
				s[i].setdata();
			}
		}
		void print()
		{
			for(int i=0;i<5;i++)
			{
				s[i].getdata();
			}
		}
};

int main()
{
	second s;
	s.read();
	s.print();
}








