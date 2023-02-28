#include<iostream>
using namespace std;

class Message{
	private :
		string meg;
	public :
		Message()
		{
			cout << "Enter meg: ";
			cin >> meg;
		}
		void print()
		{
			cout << meg << endl;
		}
		void print(string n)
		{
			cout << meg  << " " << n << endl;
		}
};

int main()
{
	Message m;
	m.print();
	m.print("by..");
}
