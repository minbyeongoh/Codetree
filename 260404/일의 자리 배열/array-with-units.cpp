#include <iostream>
using namespace std;

class onepoint {
    int a, b, tmp;
public:
    onepoint(int a, int b) {
        this->a=a;
        this->b=b;
        cout <<a<<' ';
    }
    void printp() {
    for(int i=0; i<9; i++) {
        cout<<b<<' ';
        tmp=(a+b)%10;
        a=b;
        b=tmp;
        }
    }
};

int main() {
    // Please write your code here.
    int a, b;
    cin>>a>>b;
    onepoint opt(a,b);
    opt.printp();
    return 0;
}