#include <iostream>
#include <vector>
using namespace std;

class doubleCount{
protected:
    int num;
    vector<int> v;
public:
    doubleCount() {
        for(int i = 0; i < 10; i++) {
            cin >> num;
            v.push_back(num);
        }
    }
    virtual void multiply(int m) {}
};

class multiplyCount : public doubleCount {
    int count;
public:
    virtual void multiply(int m) {
        count=0;
        for(int i = 0; i < 10; i++) {
            if(v[i]%m==0) count++;
        }
        cout<<count<<' ';
    }
};

int main() {
    // Please write your code here.
    doubleCount *p = new multiplyCount;
    p->multiply(3);
    p->multiply(5);
    delete p;
    return 0;
}