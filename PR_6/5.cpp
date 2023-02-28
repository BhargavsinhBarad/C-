#include<iostream>
using namespace std;

class A {
	private : 
	 	int a;
	public :
		A(int a)
		{
			this->a=a;
		}
		A()
		{
		}
		
		A operator+(A o)
		{
			A tem;
			tem.a= a+o.a;
			return tem;
		}
		void get()
		{
			cout << a << endl;
		}
};
int main()
{
	A a(10),b(20),c;
	
	c=a+b;
	
	c.get();
	
}
