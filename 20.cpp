#include<iostream>
using namespace std;
int main(){
	int ch;
	cout<<"Enter a digits from 0 to 9:";
	cin>>ch;
	cout<<endl;
	switch(ch){
		case 0: cout<<"zero";
		break;
		case 1: cout<<"one";
		break;
		case 2: cout<<"two";
		break;
		case 3: cout<<"three";
		break;
		case 4: cout<<"four";
		break;
		case 5: cout<<"five";
		break;
		case 6: cout<<"six";
		break;
		case 7: cout<<"siven";
		break;
		case 8: cout<<"eight";
		break;
		case 9: cout<<"nine";
		break;
		default: cout<<"Enter the correct input";
		break;
	}
}
