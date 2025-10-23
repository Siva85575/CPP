#include<iostream>
using namespace std;
namespace one{
	void display(){
		int a = 78;
		cout<<a<<endl;
	}
}

namespace two{
	void display(){
		string a = "CSE";
		cout<<a;
	}
}

int main(){
	one::display();
	two::display();
}
