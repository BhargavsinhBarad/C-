#include<iostream>
using namespace std;

int main()
{
	int i,n;
	
	cout << "Enter n : ";
	cin >> n;
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		cout << "a["<<i<<"] :" ;
		cin >> a[i];
		b[i]=a[i]*a[i]*a[i];
	}
	for(i=0;i<n;i++)
	{
		cout <<"b["<<i<<"] : " << b[i] << "\n";
	}
	 
}
