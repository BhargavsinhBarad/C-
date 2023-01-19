#include<iostream>
using namespace std;

int main()
{
	int a[252];
	
	int i,j=0;
	
	for(i=2020;i<=3030;i++)
	{
		if(i%4==0)
		{
			a[j]=i;
			cout << "a["<< j <<"] :"<< a[j] <<"\n";
			j++;
				
		}
						
		
	}
	
	

}
