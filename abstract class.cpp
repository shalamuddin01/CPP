#include<iostream>//ABSTRACT CLASS....AOSLO A FUNCTION OVERRIDE..
using namespace std;
class a
{
	public:
		virtual void show()=0;   // pure virtual function
		void display(){
			cout<<"tis is abtract class"<<endl;
		}
};
class b:public a{
	public:void show(){         /*must override purevirtual function("same name").....otherwise it also become abstract class*/
	cout<<"this is the derivede class"<<endl;
	}
};
/*int  main(){
	b ob;
	ob.show();
	ob.display();
}*/
int main(){ 
	a *p;
    b ob;
	p=&ob;
	p-> display();
	p->show();
}
