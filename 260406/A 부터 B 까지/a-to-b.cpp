#include <iostream>
using namespace std;

class numFind{
    int a, b;
public:
    numFind(int a, int b) {this->a=a; this->b=b;}
    void numIf() {
        while(a<=b) {
            cout<<a<<' ';
            if(a%2==0) a+=3;
            else if(a%2==1) a*=2;
        }
    }
};

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    numFind start(a, b);
    start.numIf();
    return 0;
}