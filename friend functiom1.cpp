#include<iostream>
using namespace std;
class abc{
	private:int a,c,b;
	public:
	void getData(int x,int y){
		a=x;b=y;
	}
	void showData(){
		cout<<"a="<<a<<ends<<"b="<<b<<endl;
	}
    friend void fun(abc);	
};
 void fun(abc ob){
 	int c;
 	c=ob.a+ob.b;
 	cout<<"by accessing friend function"<<endl;
 	cout<<"a"<<"+"<<"b"<<"="<<c;
 }
 int main(){
 	abc c1,c2,c3;
	 c1.getData(10,20);
	 c1.showData();
	 fun(c1);
	 
	 
 	
 }
