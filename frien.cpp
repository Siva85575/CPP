#include<iostream>
using namespace std;
class Demo{
	private:
		int x;
		void get(){
				x=80;
		friend void sum(Demo &d);
			}
};
 void sum(Demo &d){
 	int y=45;
 	Demo d;
 	d.get();
 	cout<<d.x+y;
 }
 
 int main(){
 	sum();
 }
