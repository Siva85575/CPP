#include<iostream>
using namespace std;
class sample{
	public:
		void show(int i){
			cout<<"the value of int:"<<i<<endl;
		}
		
		void show(int j,int h){
			cout<<"the value of sum of given numbers:"<<j+h<<endl;
		}
		
		void show(float k){
			cout<<"the value of float:"<<k<<endl;
		}
		
		void show(char j){
			cout<<"the value of char:"<<j<<endl;
		}
		
		void show(bool h){
			cout<<"the value bool:"<<h<<endl;
		}
};

int main(){
	sample t;
	t.show(3);
	t.show(3,9);
	t.show('%');
	t.show(true);
	return 0;
}
