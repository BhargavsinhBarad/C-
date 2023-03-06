#include<iostream>
using namespace std;

class A{
	public :
 		void virtual getA()
 		{
 			cout << "class A." << endl;	
		}
};

class B : virtual public A{
	public :
 		void getB()
 		{
 			cout << "class B." << endl;	
		}
};

class C : virtual public A{
	public :
 		void getC()
 		{
 			cout << "class C." << endl;	
		}
};

class D : public B, public C{
	public :
 		void getD()
 		{
 			cout << "class D." << endl;	
		}
};

int main()
{
	D a;
	a.getA();
}
