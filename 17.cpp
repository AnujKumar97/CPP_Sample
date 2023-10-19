#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int num=n;
	int r;
	int sum=0;
	int digit=n;
	int count=0;
	while(digit>0){
		count++;
		digit=digit/10;
			
		
	}
	//cout<<count;
	while(n>0){
		r=n%10;
		sum+=pow(r,count);
		n=n/10;
	}
	if(num==sum)
	cout<<"Its armstrong no. ";
	else{
		cout<<"it is not armstrong no.";
	}
}
