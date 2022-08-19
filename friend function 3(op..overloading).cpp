#include<iostream>//operator overloadung as friend function 
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
friend abc operator+(abc,abc);	
};
 abc operator+(abc ob1,abc ob2){
 	int c;
 	abc temp;
	 temp.a=ob1.a+ob2.a;
	 temp.b=ob1.b+ob2.b;
	 return(temp);
 }
 int main(){
 	abc c1,c2,c3;
	 c1.getData(10,20);
	 c2.getData(14,15);
	c3=c1+c2;
	 c3.showData();
	 }
