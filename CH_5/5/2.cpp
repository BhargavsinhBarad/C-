#include<iostream>
using namespace std;

class food
{
	private :
		int id,squantity;
		string name,type,rating,location,eyear;
	public : 
		food()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter type : ";
			cin >> type;
			cout << "Enter rating : ";
			cin >> rating;
			cout << "Enter location : ";
			cin >> location;
			cout << "Enter establish year : ";
			cin >> eyear;
			cout << "Enter staff quantity : ";
			cin >> squantity;
		}
		~food()
		{
			cout << "id : " << id << endl;
			cout << "name : " << name << endl;
			cout << "type : " << type << endl;
			cout << "rating : " << rating << endl;
			cout << "location : " << location << endl;
			cout << "establish year : " << eyear << endl;
			cout << "staff quantity : " << squantity << endl;
			
		}
};
int main()
{
		int n;
		cout << "Enter N : ";
		cin >> n;
		food f[n];	
}
