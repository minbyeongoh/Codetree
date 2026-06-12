#include <iostream>
using namespace std;

class IoPrint{
    int a = 3;
    char b = 'C';
    void PrintOut() {
        cout<<a<<endl<<b<<endl;
    }
public:
    void Run() {
        PrintOut();
    }
};

int main() {
    // Please write your code here.
    IoPrint *start = new IoPrint();
    start -> Run();
    delete start;
    return 0;
}