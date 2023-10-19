#include<iostream>
using namespace std;
int main(){
	int n, num;
	cout<<"Enter a number: ";
	cin>>num;
	n=num;
	int sum=0;
	int r;
	//bool flag=true;
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
	}
	if(n==sum){
		cout<<"Palindrome no. ";
	}
	else{
		cout<<"Not palindrome no.";
	}
	return 0;
}
