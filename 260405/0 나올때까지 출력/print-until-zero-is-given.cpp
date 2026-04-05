#include <iostream>
#include <vector>
using namespace std;

class findZero{
protected:
    int num;
    vector<int> v;
public:
    findZero();
};

findZero::findZero() {
    while(num!=0) {
        cin>>num;
        v.push_back(num);
    }
    for(int i=0; i<v.size()-1;i++) {
        cout<<v[i]<<endl;
    }
}

int main() {
    // Please write your code here.
    findZero a;
    return 0;
}