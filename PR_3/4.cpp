#include<iostream>
using namespace std;

class detail {
	public :
	int no,l,b,h;
	
	void getdata()
	{
		cout << "Enter no :";
		cin >> no;
		cout << "Enter l :";
		cin >> l;
		cout << "Enter b :";
		cin >> b;
		cout << "Enter h :";
		cin >> h;
	}
	void dis()
	{
		cout << no << endl << l << endl << b << endl << h; 
	}
};
int main()
{
	detail d;
	d.getdata();
	d.dis();
}
