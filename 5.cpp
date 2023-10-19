#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number  : ";
	cin>>n;
	if(n%5==0 && n%7==0){
		cout<<"The number is divisible by both 5 and 7";
	}
	else{
		cout<<"It is not divisible by both 5 and 7";
	}
	return 0;
}
