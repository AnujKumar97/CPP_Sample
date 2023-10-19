#include<iostream>
using namespace std;
int main(){
	int n;
	bool flag=false;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<endl;
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag=true;
			break;
		}
		else{
			flag=false;
		}
	}
	cout<<endl;
	if(flag==false){
		cout<<"It is prime no. ";
	}
	else{
		cout<<"It is not a prime no. ";
	}
	
	
	
	return 0;
}
