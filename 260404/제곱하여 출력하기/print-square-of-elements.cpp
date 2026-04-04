#include <iostream>
using namespace std;

class Count{
    int n;
    int *arrayN;
public:
    Count() {
        cin>>n;
        arrayN = new int[n];
    }
    ~Count() {
        delete [] arrayN;
    }
    void countin() {
        for(int i=0; i<n; i++) {
            cin>>arrayN[i];
        }
    }
    void countout() {
        for (int i=0;i<n;i++) {
            cout<<arrayN[i]*arrayN[i]<<' ';
        }
    }
};



int main() {
    // Please write your code here.
    Count a;
    a.countin();
    a.countout();
    return 0;
}