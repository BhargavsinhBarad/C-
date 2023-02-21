#include<iostream>
using namespace std;

class mother {
	public :
		void diplay()
		{
			cout << "MOTHER." << endl;	
		}
		
};
class daugther:public mother {
	public :
		void diplay()
		{
			cout << "DAUGTHER." << endl;	
		}
		
};

int main()
{
	daugther d;
	d.daugther::diplay();
	d.mother::diplay();
}
