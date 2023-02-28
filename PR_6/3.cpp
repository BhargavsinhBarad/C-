#include<iostream>
using namespace std;

class exa{
	public : 
		void getdata()
		{
			cout << "welcome." << endl ;
		}
};
class exa1 : public exa{
	public :
		void getdata()
		 {
		 	cout << "Hello." << endl;
		 }
};

int main()
{
	exa1 e;
	e.getdata();
}
