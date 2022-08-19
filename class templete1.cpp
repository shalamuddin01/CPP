#include<iostream>
using namespace std;
template <class T>
class show{
	public:
  T a;T b;
	  show(T p,T q){
		a=p;
		b=q;
	}
	void display(){
		cout<<"the vakue of a="<<a<<endl<<"the value of b is="<<b<<endl;
}
};
int main(){
	show<int> ob(2,25);
	show<float>ob2(2.2,2.5);
	show<char>ob3('s','p');
	ob.display();
	ob2.display();
	ob3.display();
}
