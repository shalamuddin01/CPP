#include<iostream>
using namespace std;
void name();
void preorder();
void postorder();
void inorder();
void creatnode();
void show();
int main(){
	int ch;
	struct node* p;
		while(1){ 
	cout<<"1.name"<<endl;
	cout<<"2.preorder"<<endl;
	cout<<"3.postorder"<<endl;
	cout<<"4.inorder"<<endl;
	cout<<"5.creatNode"<<endl;
	cout<<"6.show"<<endl;
	cout<<"7.exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:name();
			break;
			case 2: preorder();
			break;
		    case 3:postorder();
			break;
			case 4:inorder();
			break;
			case 5:
			creatnode();
			break;
			case 6:show();
			break;
			case 7:exit(1);
			break;
			default:
			cout<<"no such special case.."<<endl;
		}
	}
}
void name(){
	cout<<"THIS IS NAME FUNCTION";
}
void preorder()
{
	cout<<"THIS IS PREORDER FUNCTION";
}
void postorder()
{
	cout<<"THIS IS POSTORDER FUNCTION";
}
void inorder(){
	cout<<"THIS IS INOREDR FUNCTION";
}
void creatnode()
{
	cout<<"THIS IS CREATNODE FUNCTION";
}

void show(){
	cout<<"THIS IS SHOWW FUNCTION";
}
