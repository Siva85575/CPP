#include<iostream>
using namespace std;
class A{
	public:
		void showA(){
			cout<<"ShowA() of the class A"<<endl;
		}
};

class B:virtual public A{
	public:
		void showB(){
			cout<<"ShowB() of the class B"<<endl;
		}
};

class C:virtual public A{
	public:
		void showC(){
			cout<<"ShowC() of the class C"<<endl;
		}
};

class D:public B,public C{
	public:
		void showD(){
			cout<<"ShowD() of the class D"<<endl;
		}
};

int main(){
	D d;
	d.showA();
}


