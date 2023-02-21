#include<iostream>
using namespace std;

class shape{
	protected :
		int  width,height;
	public :
		shape()
		{
			cout << "Enter width:";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};
class triangle : public shape {
	public :
		void trianglearea()
		{
			cout << "Triangle area : " << (width * height) / 2 << endl;
		}
				
	
};
class Rectangle : public shape {
	public :
		void Rectanglearea()
		{
			cout << "Rectangle area : " << width * height << endl;
		}	
};

int main()
{
	Rectangle r;
	r.Rectanglearea();
	triangle t;
	t.trianglearea();
}
