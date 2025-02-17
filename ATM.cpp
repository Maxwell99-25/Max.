#include<iostream>
#include<iomanip>
using namespace std;
void DisplayOption(){
cout<<"1.Check balance."<<endl;
cout<<"2.Deposit."<<endl;
cout<<"3. Withdraw."<<endl;
cout<<"4.Exit"<<endl;
}
int main(){
int option;
double balance=2000.00;
double amount;
int pin;

cout<<"Welcome!"<<endl;

cout<<"Enter pin:";
cin>>pin;
if (pin==1999)
{
DisplayOption();
cout<<"Enter option:";
cin>>option;
switch (option)
{
case 1://Balance checking.
    cout<<"Your balance:R"
        <<fixed<<setprecision(2)<<balance<<endl;
    break;
case 2://Depositing.
    cout<<"Enter amount to deposit:";
    cin>>amount;
if (amount>0)
{
    balance+=amount;
    cout<<"Depositted successfully.New balance is:R"
        <<fixed<<setprecision(2)<<balance<<endl;
}else{
    cout<<"Invalid.please enter positive value"<<endl;
}
break;

case 3://withdrawal option.
     cout<<"Enter amount to withdraw:";
     cin>>amount;

 if (amount>0 && amount<=balance)
 {
    balance-=amount;
    cout<<"withdrawn successful.New balance is:R"
        <<fixed<<setprecision(2)<<balance<<endl;
 } else if(amount>balance){
cout<<"Declined! insufficient funds.your available balance is:R"
    <<fixed<<setprecision(2)<<balance<<endl;
 } else{
cout<<"invalid amount.please enter positive value"<<endl;
 }
 break;
 case 4://exitiing option.
cout<<"Thank you for using this system.Have a good day"<<endl;
break;  

default:
cout<<"Invalid option.please try again"<<endl;
break;
}  
}else{
 cout<<"Incorrect pin.Please try again!"<<endl;   
}
return 0;
}
    