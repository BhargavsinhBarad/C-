#include<iostream>
using namespace std;

class dis {
	private :
	int feet ,inch;
	public :
	void getdata()
	{
		cout << "Feet : ";
		cin >> feet;
		cout << "inch : ";
		cin >> inch;
	}
	void display()
	{
		
		cout << "Feet : " << feet << endl << "Inch : " << inch;
	}
};
int main()
{
	dis d1;
	d1.getdata();
	d1.display();
	
}
