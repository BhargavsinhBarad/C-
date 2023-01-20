#include<iostream>
using namespace std;

int main()
{
	char a;
	
	cout << "Enter a :";
	cin >> a;
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		cout << "Vowell";
	} 
	else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout << "Vowell";
	}
	else
	{
		cout << "consonant";
	}
}
