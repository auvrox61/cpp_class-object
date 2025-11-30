#include<bits/stdc++.h>
using namespace std;

class car{
    public:
        int speed(int maxSpeed);
};

int car::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    car carSpeed;
    cout<<carSpeed.speed(20)<<endl;
    return 0;
}