#include<iostream>
using namespace std;
class Rectangle{
	int length,breadth;
	public:
		void get();
		void area();
};

void Rectangle::get(){
	cout<<"enter length and breadth";
	cin>>length>>breadth;
}

void Rectangle::area(){
	cout<<"area"<<length * breadth;
}

int main(){
	Rectangle r;
	r.get();
	r.area();
	return 0;
}
