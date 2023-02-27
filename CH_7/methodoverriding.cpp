#include<iostream>
using namespace std;

class cricket{
	private :
		int over;
	public :
		void getover()
		{
			cout << "Enter over : ";
			cin >> over; 
		}
};

class t20 : public cricket{
	public :
		void getover()
		{
			cout << "20 over." << endl;
		}
};

class test : public cricket{
	public :
		void getover()
		{
			cout << "90 over per day." << endl;
		}
};

int main()
{
	t20 t;
	test t1;
	t.getover();
	t1.getover();
	t.cricket::getover();
}
