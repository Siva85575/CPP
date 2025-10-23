#include<iostream>
using namespace std;
void sum(int x=45,int y = 60){
	cout<<"sum:"<<x+y<<endl;
}

int main(){
	sum(34,56);
	sum();
	return 0;
}
