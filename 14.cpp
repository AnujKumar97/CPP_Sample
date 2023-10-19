#include<iostream>
using namespace std;
int main(){
	int n,i;
	int sum_even=0;
	int sum_odd=0;
	cout<<"Enter a positive number :"<<endl;
	cin>>n;
	for(i=1;i<=n;++i){
		if(i%2==0){
			sum_even+= i;
		}
		else{
			sum_odd+= i;
		}
	}
	cout<<"Sum of even numbers from 1 to "<<n<<" is "<<sum_even<<endl;
	cout<<"Sum of odd numbers from 1 to "<<n<<" is "<<sum_odd<<endl;
	
	
 return 0;	
}
