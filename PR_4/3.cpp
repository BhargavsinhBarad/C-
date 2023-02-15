#include<iostream>
using namespace std;

class hotel
{
	private :
		int id;
		string name;
		string type;
		int staff_size;
		int room_size;
		string establish_year; 
		string address;
		string website;
		string rating_type;
	public : 
		hotel(int id,string name,string type,int staff,int room,string establish,string add,string web,string rating){
			this->id=id;
			this->name=name;
			this->type=type;
			this->staff_size=staff;
			this->room_size=room;
			this->establish_year=establish;
			this->address=add;
			this->website=web;
			this->rating_type=rating;
		}
		~hotel()
		{
			cout <<	"id : " << id << endl;
			cout <<	"name : "<< name << endl;
			cout <<	"type : "<< type << endl;
			cout <<	"staff_size : "<< staff_size << endl;
			cout <<	"room_size : "<< room_size << endl;
			cout <<	"establish_year : "<< establish_year << endl;
			cout <<	"address : "<< address << endl;
			cout <<	"website : "<< website << endl;
			cout <<	"address : "<< address << endl;
			
		}
		
};
int main()
{
	
	int id;
	string name;
	string type;
	int staff_size;
	int room_size;
	string establish_year; 
	string address;
	string website;
	string rating_type;
	
		cout <<	"Enter id : ";
		cin >> id;
		cout <<	"Enter name : ";
		cin >> name;
		cout <<	"Enter type : ";
		cin >> type;
		cout <<	"Enter staff_size : ";
		cin >> staff_size;
		cout <<	"Enter room_size : ";
		cin >> room_size;
		cout <<	"Enter establish_year : ";
		cin >> establish_year;
		cout <<	"Enter address : ";
		cin >> address;
		cout <<	"Enter rating_type : ";
		cin >> rating_type;
		cout <<	"Enter website : ";
		cin >> website;
		
		hotel d(id,name,type,staff_size,room_size,establish_year,address,rating_type,website);
			
	
}
