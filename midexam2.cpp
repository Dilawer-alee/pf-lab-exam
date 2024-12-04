#include <iostream>
using namespace std;

int main(){
	int balance=1000,deposit,withdraw,sel;
	do{
		cout<<"chosse menu"<<endl<<"check balance1"<<endl<<"deposit money2"<<endl<<"withdraw money3";
		cin>>sel;
		
		switch(sel){
			case 1:
			cout<<"current balance is "<<balance<<endl;
			
			break;
			case 2:
				cout<<"deposit money";
				cin>>deposit;
				balance +=deposit;
				cout<<balance<<endl;
				break;
				
		 case 3:
		 	cout<<"withdraw money";
		 	cin>>withdraw;
			 if(withdraw<balance){
			 	balance -=withdraw;
			 	cout<<balance;
			 	break;
			 }
			 else{
			   cout<<"error msg"<<endl;
			 }
			 break;
			case 4:
				cout<<"exit the program"<<endl;
				
			default:
				cout<<"sahi option daly";
		}
	}while(sel !=4);
}
