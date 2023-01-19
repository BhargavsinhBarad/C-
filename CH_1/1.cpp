#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cout << "Enter value  n : ";
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout <<"Array a["<<i<<"] : ";
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << "Even = "<< a[i] <<"\n";
		}
	}
	
}
