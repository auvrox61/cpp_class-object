#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    public:
        int accountNum;
        string holderName;
        int balance;
        void deposit(int amount);
        void withdraw(int amount);
        void showDetails();
};

void BankAccount::deposit(int amount){
    balance+=amount;
}

void BankAccount::withdraw(int amount){
    if(amount>balance){
        cout<<"Insufficient Balance!"<<endl;
    } else{
        balance-=amount;
    }
}

void BankAccount::showDetails(){
    cout<<"Account : "<<accountNum<<endl;
    cout<<"Holder : "<<holderName<<endl;
    cout<<"Balance : "<<balance<<endl;
}

int main(){
    BankAccount user;
    cout<<"Enter your bank account no : ";
    cin>>user.accountNum;
    cout<<endl;
    cin.ignore();
    cout<<"Account holder name : ";
    getline(cin,user.holderName);
    cout<<endl;
    cout<<"Your bank account is opened with a complementary balance of 1000 taka!";
    cout<<endl;
    user.balance=1000;
    user.showDetails();
    user.deposit(25000);
    user.showDetails();
    user.deposit(38000);
    user.showDetails();
    user.withdraw(40000);
    user.showDetails();
    return 0;
}