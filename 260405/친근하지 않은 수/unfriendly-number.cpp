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
        for(int i=1; i<=n; i++){
            if(i%2==0||i%3==0||i%5==0) continue;
            else count++;
            }
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