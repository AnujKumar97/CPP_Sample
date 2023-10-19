#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	cout<<endl;
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"The factorial of number "<<n<<" is "<<fact;
}
