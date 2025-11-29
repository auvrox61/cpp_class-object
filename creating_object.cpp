#include<bits/stdc++.h>
using namespace std;

class classTest{
    public:
        int marks;
        string name;
};

int main(){
    classTest testObj;
    testObj.marks=21;
    testObj.name="Saif Hassan";
    cout<<testObj.marks<<" "<<":"<<" "<<testObj.name<<endl;
    return 0;
}