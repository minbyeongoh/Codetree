#include <iostream>
#include <string>
using namespace std;

class Compare{
    string a,b;
public:
    void compare() {
    cin>>a>>b;
    if(a.size()==b.size()) cout<<"same";
    else if(a.size()>b.size()) cout<<a<<' '<<a.size();
    else cout<<b<<' '<<b.size();
    }
};

int main() {
    // Please write your code here.
    Compare cp;
    cp.compare();
    return 0;
}