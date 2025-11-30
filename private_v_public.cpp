#include<bits/stdc++.h>
using namespace std;

class myNum{
    private:
        int x;
    public:
        int y;
};

int main(){
    myNum n;
    n.y=3;
    cout<<n.y<<endl;
    n.x=2;
    cout<<n.x<<endl;//should show an error
    return 0;
}