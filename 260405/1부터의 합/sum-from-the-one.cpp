#include <iostream>
using namespace std;

class calculater{
protected: 
    int n;
public:
    void numIn() {cin>>n;}
    virtual void numF() {}
    void Run() {
        numIn();
        numF();
    }
};

class numFind : public calculater {
    int sum=0;
public:
    void numF() {
        for(int i=1; i<=100; i++) {
            sum+=i;
            if(sum>=n) {
                cout<<i;
                break;
            }
            else continue;
        }
    }
};

int main() {
    // Please write your code here.
    calculater *cp = new numFind;
    cp->Run();
    return 0;
}