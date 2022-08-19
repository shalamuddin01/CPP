#include<iostream>//FRIEND FUNCTION CAN BECOME FRIEND MORE THAN ONE CLASSS
using namespace std;
class B;
class C;
class A{
	private:int a,c,b;
	public:
	void getData(int x)
	{
		a=x;
	}
     friend void fun(A,B,C);	
};
class B{
int b;
public:
void getData(int y)
	{
		b=y;
	}
     friend void fun(A,B,C);	
 };
 class C
 {
 	int d;
 	public:
 	void getData(){
 		cout<<"enter the value of d"<<endl;
 		cin>>d;
		 	 }
		 	 friend void fun (A,B,C);
 };
 void fun(A ob1,B ob2,C ob3){
 	int c;
 	c=ob1.a+ob2.b+ob3.d;
 //	cout<<"by accessing friend function"<<endl;
 	cout<<"sum is:"<<"a"<<"+"<<"b"<<"+"<<"d"<<"="<<c;
 }
 int main(){
 	A obj1;B obj2;C obj3;
	 obj1.getData(100);
	 obj2.getData(20);
	 obj3.getData();
	 fun(obj1,obj2,obj3);
 }
