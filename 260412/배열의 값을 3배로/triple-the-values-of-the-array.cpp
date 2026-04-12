#include <iostream>
using namespace std;

class _Arr {
    int arr[3][3];
public:
    void Input() {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>arr[i][j];
            }
        }
    }

    void prt() {
        Input();
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout<<arr[i][j] * 3<<' ';
            }
            cout<<endl;
        }
    }
};

int main() {
    // Please write your code here.
    _Arr *a = new _Arr();
    a->prt();
    delete a;
    return 0;
}