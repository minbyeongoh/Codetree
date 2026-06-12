#include <iostream>
using namespace std;

class MinusInt{
    int a = 97;
    int b = 13;
public:
    void OutResult() {
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    }
};

int main() {
    // Please write your code here.
    MinusInt *start = new MinusInt();
    start->OutResult();
    delete start;
    return 0;
}