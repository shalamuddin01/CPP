#include<iostream>//UNARY OPERATOR OVERLOADING
using namespace std;
class demo
{
	private:int a,b;
	public:
	 void printResult(int x,int y)
	 {
			a=x;b=y;
		}
		void showdata()
		{ ///use double instead of float
			cout<<"value of incremented: a="<<a<<ends<<"b="<<b<<endl;
		//	cout<<"value of new b"<<b<<endl<<endl;		
		}
		void showdata1()
		{
			cout<<"value of stored: a="<<a<<ends<<"b="<<b<<endl;		
		}
		
		demo operator++()    //FUNCTION NAME SHOULD BE CLASS NAME // FOR PREINCREMENT NO NEED TO WRITE ARGUMENTS
		//demo add(demo obb)   } same1
		{
		demo temp;
		temp.a=++a;
		temp.b=++b;
		return (temp);
		}
		demo operator++(int)   //FUNCTION NAME SHOULD BE CLASS NAME// FOR POSTINCREMENT COMPOLLSURY TO WRITE ARGUMENT IN FUICTION
		//demo add(demo obb)   } same1
		{
		demo temp;
		temp.a=a++;
		temp.b=b++;
		return (temp);
		}
}; 
int main(){
	demo t1,t2,t3,t4;
	t1.printResult(2,3);
	t2=++t1;  
	t1.showdata();          //first increment and the store in t2;
	t2.showdata1();
	t3.printResult(5,10);
	t4=t3++;        //post increment first copy in t4 the increment  
	t3.showdata();
	t4.showdata1();
	//obj.printResult(10.8);
}
