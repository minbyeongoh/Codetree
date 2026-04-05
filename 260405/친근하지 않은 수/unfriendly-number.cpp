#include <iostream>
using namespace std;

class numIn{
protected:
    int n;
public:
    void numCin() {
        cin>>n;
    }
};

class numFind : public numIn{
    int count = 0;
public:
    void numF() {
        if(n%2==0) count++;
        if(n%3==0) count++;
        if(n%5==0) count++;
        cout<<count;
       }
    void Run() {
        numCin();
        numF();
    }
};

int main() {
    // Please write your code here.
    numFind a;
    a.Run();
    return 0;
}