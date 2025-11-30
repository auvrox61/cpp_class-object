#include<bits/stdc++.h>
using namespace std;

class Dog{
    public:
        void bark();
};

void Dog::bark(){
    cout<<"Woof!"<<endl;
}

int main(){
    Dog Dogbarking;
    Dogbarking.bark();
    return 0;
}