#include<iostream>
using namespace std;

class car
{
	private :
		int id;
		string company,color,model,release;
	public :
		void setdata()
		{
			cout << "Enter ID : ";
			cin >> id;
			cout << "Enter Car Company Name : ";
			cin >> company;
			cout << "Enter Car Color : ";
			cin >> color;
			cout << "Enter Car Model : ";
			cin >> model;
			cout << "Enter Car Release Year : ";
			cin >> release;
			
		}
		void getdatad()
		{
			cout << id << "\t" << company << "\t" << color << "\t" << model 
				 << "\t" << release << endl;
		}
	
};

int main()
{
	car c1,c2,c3,c4;
	
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	
	cout << "id\tcname\tcolor\tmodel\trele" << endl;
	cout << "======= ======= ======= ======= ======= " << endl;
	
	c1.getdatad();
	c2.getdatad();
	c3.getdatad();
	c4.getdatad();
}


