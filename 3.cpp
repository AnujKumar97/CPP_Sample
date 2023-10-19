#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	cout<<endl;
	cout<<a<<" "<<b;
}
int main(){
	int a=10,b=20;
	cout<<"The value of a and b before swapping is  :"<<endl;
	cout<<a<<" "<<b;
	
	swap(a,b);
	cout<<endl;
	cout<<"The value of a and b after swapping :"<<a<<" "<<b;
	return 0;
}
