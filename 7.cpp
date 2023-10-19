#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character in lowercase: ";
	cin>>ch;
	cout<<endl;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<"Character is Vowel";
	else
	cout<<"Character is consonent";
	return 0;
}
