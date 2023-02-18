#include <iostream>
using namespace std;

class B;

class A {
    private:
        int a;
    public:
        void setData() {
           	cout << "Enter a : ";
        	cin >> a;
        }
        friend int add(A,B);
};


class B {
    public:
        int b;
    public:
        void setData() {
            cout << "Enter B : ";
            cin >> b;
        }
        friend int add(A,B);
};


int add(A a, B b){
	int sum;
	sum = A.a + B.b;
    cout << "SUM : " << sum  ;
}

int main() {
    A a;
    B b;
    
    a.setData();
    b.setData();
    
    add(a,b); 
}

