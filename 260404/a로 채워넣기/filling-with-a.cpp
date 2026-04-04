#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Change{
    string tmp;
public:
    void Strin() {
        cin>>tmp;
        tmp[1]='a';
        tmp[tmp.size()-2]='a';
        cout<<tmp;
    }
};

int main() {
    // Please write your code here.
    Change a;
    a.Strin();
    return 0;
}