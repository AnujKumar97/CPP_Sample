#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :";
	cin>>n;
	int m;
	cout<<"Enter exponent value: ";
	cin>>m;
	cout<<endl;
	int i=1;
	int temp=1;
	//int c=pow(n,m);
	while(i<=m){
		temp=temp*n;
		i++;
	}
	cout<<"The value of "<<n<<" to the power of "<<m<<" is "<<temp;
	//cout<<endl<<c;
}
