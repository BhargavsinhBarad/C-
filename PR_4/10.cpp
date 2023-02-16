#include<iostream>
using namespace std;

class example {
	private :
		int n1,n2;
	public :
		example ()
		{
			cout << "Welcome.." << endl ;
		}
		example (int n1,int n2)
		{
			this->n1=n1;
			this->n2=n2;
		}
		void getdata()
		{
			cout << "N1 : " << n1 << endl;
			cout << "N2 : " << n2 << endl;
			
		}
};
int main()
{
	example e;
	example e1(10,20);
	example e2=e1;
	e1.getdata();
	e2.getdata();
}
