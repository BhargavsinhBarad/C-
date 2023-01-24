#include<iostream>
using namespace std;

input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout << "a["<< i << "] :";
		cin >> a[i];
	}	
}

int main()
{
	int n,i,j,fact;
	cout << "Enter N : ";
	cin >> n;
	
	int a[n];
	
	input(a,n);
	
	for(i=0;i<n;i++)
	{
		fact = a[i];
		for(j=a[i]-1;j>0;j--)
		{
			fact *= j;
		}
		a[i]=fact;
	}
	for(i=0;i<n;i++)
	{
		cout << a[i] << endl;
	}
	
	
}
