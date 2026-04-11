#include <iostream>
using namespace std;

class Star {
    int n;
public:
    void starOut(int n);
    Star();
    void Run() {
        starOut(n);
    }
};

Star::Star() {
    cin>>n;
}
void Star::starOut(int n) {
    for(int i=0; i<n; i++) {
        for(int j=n; j>i; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    // Please write your code here.
    Star go;
    go.Run();
    return 0;
}