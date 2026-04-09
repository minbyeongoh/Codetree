#include <iostream>
using namespace std;

class Find25{
    int num;
public:
    Find25() {
        while(num!=25) {
            cin>>num;
            if(num<25) cout<<"Higher"<<endl;
            else if(num>25) cout<<"Lower"<<endl;
            else if(num==25) cout<<"Good"<<endl;
        }
    }
};

int main() {
    // Please write your code here.
    Find25 go;
    return 0;
}