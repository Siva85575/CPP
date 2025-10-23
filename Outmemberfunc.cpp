#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
		void get();
		void volume();		
};

void Box :: get(){
	cout<<"Enter the values for the length and breadth an height ";
	cin>>length>>breadth>>height;
}

void Box :: volume(){
	cout<<"Volume "<<length*breadth*height;
}

int main(){
	Box r;
	r.get();
	r.volume();
	
	return 0;
}
