#include <iostream>
using namespace std;

class sumEven{
    int a, b, sum=0;
public:
    sumEven() {
        cin>>a>>b;
        for(int i=a; i<=b; i++) {
            if(i%2==0) sum+=i;
        }
    }

    ~sumEven() {
        cout<<sum<<endl;
    }

};

int main() {
    // Please write your code here.
    sumEven a;
    return 0;
}