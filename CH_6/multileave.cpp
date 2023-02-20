#include<iostream>
using namespace std;

class p {
	protected :
		float c;
	public :
		void set()
		{
			cout << "Enter Temperature Celsius : ";
			cin >> c;
		}
};

class q : public p{
	public :
		void Fahrenheit()
		{
			cout << "Fahrenheit : " << (c*9/5)+32 << endl;
		}
};

class r : public q{
	public :
		void kelvin()
		{
			cout << "kelvin : " << (c+459.67)*5/9 << endl;
 		}
}; 

int main()
{
	r r1;
	r1.set();
	r1.Fahrenheit();
	r1.kelvin();
}
