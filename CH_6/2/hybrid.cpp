#include <iostream>
using namespace std;

class A {
	protected:
    	int x;
	public:
    	A(int a) 
		{
        	x = a;
    	}
};

class B : public A {
	protected:
    	int y;
	public:
    	B(int a, int b) : A(a) 
		{
        	y = b;
    	}	
};

class C : public A {
	protected:
    	int z;
	public:
    	C(int a, int c) : A(a) 
		{
        	z = c;
 	    }
};

class D : public B, public C {
	public:
    	D(int a, int b, int c, int d) : B(a, b), C(a, c) 
		{
        	cout << "The sum of " << a << ", " << b << ", " << c << ", and " << d << " is " << C::x+y+z+d << endl;
    	}
};

int main() {
 
	
	int a,b,c,d;
	
	cout << "Enter a : ";
	cin >>a;
	cout << "Enter b : ";
	cin >>b;
	cout << "Enter c : ";
	cin >>c;
	cout << "Enter d : ";
	cin >>d;
	
	D d1(a,b,c,d);
}

