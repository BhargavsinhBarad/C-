#include<iostream>
using namespace std;

class Train{
	private :
		int num;
		string name,Source,Destination,time;
	public :
		void setdata()
		{
			cout << "Enter Train Number : ";
			cin >> num;
			cout << "Enter Train Name : ";
			cin >> name;
			cout << "Enter Source : ";
			cin >> Source;
			cout << "Enter Destination : ";
			cin >> Destination;
			cout << "Enter Train time : ";
			cin >> time;
		}
		void getdata()
		{
			cout << "Train Number : " << num << endl;
			cout << "Train Name : " << name << endl;
			cout << "Source : " << Source << endl;
			cout << "Destination : " << Destination << endl;
			cout << "Train time : " << time << endl;
		}	
		friend void display(Train []);	
};
void display(Train t[])
{
	int n;
	cout << "Eneter Number : ";
	cin >> n;
	for(int i=0;i<3;i++)
	{
		if(t[i].num==n)
		{
			t[i].getdata();
		}
	}
}

int main()
{
	Train t[3];
	
	for(int i=0;i<3;i++) t[i].setdata();
	
	for(int i=0;i<3;i++) t[i].getdata();
	
	display(t);
}
