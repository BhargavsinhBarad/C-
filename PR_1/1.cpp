#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[20];
	int i,c=0;
	
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			c++;
		}
	}
	if(c!=0)
	{
		cout << "Numeric";
	}
	else
	{
		cout << " Not Numeric";
	}
}
