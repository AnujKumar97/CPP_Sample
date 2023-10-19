#include<iostream>
using namespace std;
int main(){
	int ch=1;
	int regular=100,medium=200,large=300,sum=0, coco=70, up=60, pepproni=20, chilli=20;
	while(ch!=0){
			cout<<"\nPress 1 for the size of pizza \nPress 2 for the Drink you required\nPress 3 for pepproni\nPress 4 for Chilli flake\nPress 5 for Bill\nPress 6 for Exit\n";
			cout<<"\nEnter correct options: ";
			cin>>ch;
	switch(ch){
	
		
		
		case 1:
			int i;
			
			cout<<"\nPress 1 for regular\nPress 2 for medium\nPress 3 for large";
			cout<<"\nEnter correct options :";
			cin>>i;
			switch(i){
				case 1:sum+=regular;
				cout<<"Added";
				break;
				case 2:sum+=medium;
				cout<<"Added";
				break;
				case 3: sum+=large;
				cout<<"Added";
			}
			break;
		case 2:cout<<"\nPress 1 for Coco cola\nPress 2 for 7up";
			
			int j;
			cout<<"\nEnter correct options:";
			cin>>j;
			switch(j){
				case 1: sum+=coco;
				cout<<"Added";
				break;
				case 2: sum+=up;
				cout<<"Added";
				break;
			}
			break;
		case 3: sum+=pepproni;
		cout<<"Added";
		break;
		case 4:sum+=chilli;
		cout<<"Added";
		break;
		case 5:
			cout<<"\nYour total amount is "<<sum;
			break;
			
		case 6:
			exit(0);
		}
	}

	
}
