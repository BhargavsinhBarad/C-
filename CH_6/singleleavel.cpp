#include<iostream>
using namespace std;

class x{
	protected :
		int a,b,c;
};

class y : public x{
	public :
		void setdata()
		{
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			cout << "Enter c : ";
			cin >> c;
		}
		void getdata()
		{
			cout << "A : " << a*a*a << endl
				 << "B : " << b*b*b << endl
				 << "C : " << c*c*c << endl;
		}
};

int main()
{
	y z;
	
	z.setdata();
	z.getdata();
}
