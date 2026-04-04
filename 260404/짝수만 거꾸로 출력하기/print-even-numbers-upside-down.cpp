#include <iostream>
#include <vector>
using namespace std;

class numIn{
protected:
    int n, num;
    vector<int> v;
public:
    void numCin() {
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>num;
            v.push_back(num);
        }
    }
};

class numOut : public numIn {
public:
    void numPrt() {
        for(int i = v.size() - 1; i >= 0; i--) {
            if(v[i]%2==0) cout << v[i]<< ' ';
        }
    }
    void Run() {
        numCin();
        numPrt();
    }
};

int main() {
    // Please write your code here.
    numOut a;
    a.Run();
    return 0;
}