#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	cout<<"Enter a number :";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
	sum=sum+i;
	}
	cout<<"Sum of given number from 1 to "<<n<<" is "<<sum;
	return 0;
}
