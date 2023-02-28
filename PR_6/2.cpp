#include<iostream>
using namespace std;

class A{
	public :
		void print()
		{
			cout << "Welcome." << endl;
		}
		void print(int a)
		{
			cout << a << endl;
		}
		void print(int a,int b)
		{
			cout << a  << "\t" << b << endl;
		}
		void print(int a, int b, int c)
		{
			cout << a << "\t" << b << "\t" << c << endl;
		}
		
};
int main()
{
	A a1;
	a1.print();
	a1.print(10);
	a1.print(20,30);
	a1.print(40,50,60);
}
