#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three angles of a triangle:";
	cin>>a>>b>>c;
	cout<<endl;
	if(a+b+c==180)
	cout<<"It is a triangle";
	else
	cout<<"It is not a triangle";
	return 0;
}
