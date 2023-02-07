#include<iostream>
using namespace std;

class hotel
{
	 private :
	 	static int id;
	 	int hotel_id;
	 	string hotel_name;
	 	string hotel_type;
	 	string hotel_rating;
	 	static string hotel_location;
	 	int hotel_establish_year;
	    int  hotel_staff_quantity;
	 	int hotel_room_quantity;
	public :
		void setdata()
		{
			hotel_id = ++id;
			cout << "Hotel_type : ";
			cin >> hotel_type;
			
			cout << "Hotel_name : ";
			cin >> hotel_name;
			
			cout << "Hotel_rating : ";
			cin >> hotel_rating;
			
			cout << "Hotel_establish_year : ";
			cin >> hotel_establish_year;
			
			cout << "Hotel_staff_quantity : ";
			cin >> hotel_staff_quantity;
			
			cout << "Hotel_room_quantity : ";
			cin >> hotel_room_quantity;
		}
		static void header()
		{
			cout << "Id\tName\tType\tRating\tLoc\tYear\tStaff\tRoom" << endl;
			cout << "======= ======= ======= ======= ======= ======= ======= =======" << endl;
		}
		void table()
		{
			cout << hotel_id << "\t" << hotel_name << "\t" << hotel_type << "\t" << hotel_rating << "\t" << hotel_location << "\t" << hotel_establish_year << "\t" << hotel_staff_quantity << "\t" << hotel_room_quantity << endl; 
		}
		
};
int hotel::id=0;
string hotel::hotel_location = "Surat";

int main()
{
	int n,i;
	cout << "Enter Number : ";
	cin >> n;
	
	hotel h[n];
	
	for(int i=0;i<n;i++) h[i].setdata();
	hotel::header();
	for(int i=0;i<n;i++) h[i].table();
}
