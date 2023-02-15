#include<iostream>
using namespace std;

class example{
	private : 
	 	int id;
	 	string name;
	public :
		void setdata()
		{
			cout << "Id\t: ";
			cin >> id;
			cout << "Name\t: "; 
			cin >> name;
		}
		~example()
			{
				cout << "Id\t: " << id << endl;
				cout << "Nmae\t: " << name << endl; 
			}
};
int main()
{
	example e;
	e.setdata();
}
