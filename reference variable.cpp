#include<iostream>
using namespace std;
int c=33;
int main(){
	int a=5,b=10;
	//cout<<"enter the number one and two;"<<endl; 
	//cin>>a>>b;
	swap(a,b);// thias is swap default function in c++
	cout<<"a:"<<a<<ends<<"b:"<<b<<endl<<endl;
	int c=a+b;
	cout<<"the actual  local of c: "<<c<<endl;
	cout<<"the actual  global of c: "<<::c<<endl<<endl;
	cout<<"thIs part is code of DATA TYPE.."<<endl;
	float f=10.5;
	double d=10.5;
	cout<<"sizeof10,5is :"<<sizeof(10.5)<<endl;
	cout<<"sizeof10,5is :"<<sizeof(10.5f)<<endl;
	cout<<"sizeof10,5is :"<<sizeof(10.5d)<<endl<<endl;
		
	cout<<"ths part is code of REFERENCE VARIABLE..."<<endl;
	
	int x=100;
	int &y=x;
	 y=30;
	cout<<"value of x isd :"<<x<<endl;       //reference variable
	cout<<"value of y is :"<<y<<endl<<endl;
	cout<<"thIs part is code of TYPECAST..."<<endl;
	int i=97;
	float ff=20.334;
	double dd=90.8;
    char cc='a';
	cout<<"the int value of f is"<<int(ff)<<endl;
	cout<<"the int value of f is"<<int(dd)<<endl;
	
	cout<<"the int value of a is"<<float(i)<<endl;
	cout<<"the int value of a is"<<int(cc)<<endl;
	cout<<"the char value of c is"<<char(i)<<endl;
	
	}
	
