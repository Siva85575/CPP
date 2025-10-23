#include<iostream>
using namespace std;
class Rectangle{
	int length,breadth;
	public:
		Rectangle(){
			length = 4.5;
			breadth = 6.8;
		}
		
		Rectangle(float l,float b){
			length = l;
			breadth = b;
		}
		
		Rectangle(float x){
			length = x;
			breadth = x;
		}
		
		void area(){
			cout<<"area:"<<length * breadth<<'\n';
		}
};

int main(){
	Rectangle r1;
	Rectangle r2(3.9,4.7);
	Rectangle r3(8.7);
	r1.area();
	r2.area();
	r3.area();
	return 0;
}
