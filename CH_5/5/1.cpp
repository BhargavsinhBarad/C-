#include<iostream>
using namespace std;

class detail
{
	private :
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds; 
		string comp_ceo;
	public : 
		detail(int id,string name,int quantity,int revenue,int import,int exprt,string ceo){
			this->comp_id=id;
			this->comp_name=name;
			this->comp_staff_quantity=quantity;
			this->comp_revenue=revenue;
			this->comp_import_raw_diamonds=import;
			this->comp_export_diamonds=exprt;
			this->comp_ceo=ceo;
		}
		~detail()
		{
			cout <<	"id : " << comp_id << endl;
			cout <<	"name : "<< comp_name << endl;
			cout <<	"staff_quantity : "<< comp_staff_quantity << endl;
			cout <<	"revenue : "<< comp_revenue << endl;
			cout <<	"import_raw_diamonds : "<< comp_import_raw_diamonds << endl;
			cout <<	"export_diamonds : "<< comp_export_diamonds << endl;
			cout <<	"ceo name : "<< comp_ceo << endl;
			
		}
		
};
int main()
{
	int n,i;
	cout << "Enter n : ";
	cin >> n;
	
	int id;
	string name;
	int staff_quantity;
	int revenue;
	int import_raw_diamonds;
	int export_diamonds; 
	string ceo;
	
		
	for(i=0;i<n;i++)
	{
		cout <<	"Enter id : ";
		cin >> id;
		cout <<	"Enter name : ";
		cin >> name;
		cout <<	"Enter staff_quantity : ";
		cin >> staff_quantity;
		cout <<	"Enter revenue : ";
		cin >> revenue;
		cout <<	"Enter import_raw_diamonds : ";
		cin >> import_raw_diamonds;
		cout <<	"Enter export_diamonds : ";
		cin >> export_diamonds;
		cout <<	"Enter ceo name : ";
		cin >> ceo;
		detail d(id,name,staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo);
			
	}
	
}
