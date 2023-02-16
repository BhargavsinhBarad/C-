#include<iostream>
using namespace std;

class Array
{
	public :
		int n;
		int a[10];
		int po,v,i;
	public :
		Array(){
			n=5;
			for(i=0;i<n;i++)
			{
				cout << "a[" << i  <<"] : ";
				cin >> a[i]; 
			}
		}
		
		void display ()
		{
			
			for(i=0;i<n;i++)
			{
				cout << a[i] << " ";
			}
		}
		void insert()
		{
			cout << "Enter position : ";
			cin >> po;
			cout << "Enter value : ";
			cin >> v;
			
			for(i=n-1;i>=po;i--)
			{
				a[i]=a[i+1];
			}
			a[po]=v;
			n++;
			for(i=0;i<n;i++)
			{
				cout << a[i] << " ";
			}
		}
		void update()
		{
			cout << "Enter position : ";
			cin >> po;
			cout << "Enter value : ";
			cin >> v;
			
			a[po]=v;
			
			for(i=0;i<n;i++)
			{
				cout << a[i] << " ";
			}
			
		}
		void delet()
		{
			cout << "Enter position : ";
			cin >> po;
			cout << "Enter value : ";
			cin >> v;
			
			for(i=po;i<n;i++)
			{
				a[i+1]=a[i];
			}
			a[po]=v;
			n--;
			
			for(i=0;i<n;i++)
			{
				cout << a[i] << " ";
			}
		}
};

int main()
{
	Array a1;
	int ch;
	
	do
	{
		
		cout << "\nEnter 1 for display." << endl
			 << "Enter 2 for insert." << endl
		 	 << "Enter 3 for update." << endl
		   	 << "Enter 4 for delete." << endl
			 << "Enter 5 for exit." << endl;
			 
		cout << "Enter your choice : ";
		cin >> ch;
		
		switch(ch)
		{
			case 1: a1.display(); break;
			case 2: a1.insert(); break;
			case 3: a1.update(); break;
			case 4: a1.delet(); break; 
			case 5: cout << "EXIT.."; break;
			default : cout << "Try Again..";
		}
	} while(ch!=5);
}
