#include<iostream>
using namespace std;
int main(){
	int n, num;
	cout<<"Enter a number: ";
	cin>>num;
	n=num;
	int sum=0;
	int r;
	
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
	}
	cout<<"The reverse of number "<< n<< " is "<<sum;
}
