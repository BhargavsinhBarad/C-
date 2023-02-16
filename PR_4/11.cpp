#include<iostream>
using namespace std;

class constant {
	public :
		const int id =10;
	void getdata()
	{
		cout << "ID : " << id;
	}
};
int main()
{
	constant c;
	c.getdata();
}
