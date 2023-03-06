#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	try{
		if(b==0)
		{
			throw b;	
		}
		else {
			cout << "ANS : " << a/b << endl;
		}
	}
	catch(int c)
	{
		cout << "can not divied " << c << endl;
	}
	catch(char d)
	{
		cout << "can not divied " << d << endl;
	}
	catch(...)
	{
		cout << "Special character " << endl;
	}
}
