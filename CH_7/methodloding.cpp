#include<iostream>
using namespace std;

class calculate{
	public :
		void sum(int a,int b)
		{
			cout << "Division : " << a/b << endl;
		}
		void sum(int a,int b,int c)
		{
			cout << "Subtraction : " << a-b-c << endl;
		}
		void sum(int a,int b,int c,int d)
		{
			cout << "Multiplication : " << a*b*c*d << endl;
		}
		void sum(int a,int b,int c,int d,int e)
		{
			cout << "Addition : " << a+b+c+d+e << endl;
		}
};


int main()
{
	calculate c;
	c.sum(10,20);
	c.sum(60,20,30);
	c.sum(1,2,3,4);
	c.sum(10,20,30,40,50);
}
