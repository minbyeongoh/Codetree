#include <iostream>
using namespace std;

class starOut{
    int a, b;
public:
    starOut() {
        cin>>a>>b;
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) cout<<"* ";
            cout<<endl;
        }
    }
};

int main() {
    // Please write your code here.
    starOut go;
    return 0;
}