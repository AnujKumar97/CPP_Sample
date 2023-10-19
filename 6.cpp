#include<iostream>
using namespace std;
int main(){
	int n;
	float tax;
	cout<<"Enter basic salary:";
	cin>>n;
	cout<<endl;
	if(n<150000)
	tax=0;
	else if(n>=150000 && n<=300000)
	tax=20*n/100;
	else
	tax=30*n/100;
	cout<<"tax= "<<tax;
	
}
