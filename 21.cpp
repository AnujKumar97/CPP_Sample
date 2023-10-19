#include<iostream>
using namespace std;
int main(){
	char ch;
	int a,b;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<endl;
	cout<<"Enter + for addition - for subtraction * for multiplication / for division:";
	cin>>ch;
	cout<<endl;
	switch(ch){
		case '+': cout<<"addtion of two number is "<<a+b;
		break;
		case '-': cout<<"subtraction of two number is "<<a-b;
		break;
		case '*': cout<<"Multiplication of two number is "<<a*b;
		break;
		case '/': cout<<"Division of two number is "<<(float)a/b;
		break;
		default: cout<<"wrong input";
		break;
	}
}
