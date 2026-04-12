#include <iostream>
using namespace std;

class arrMul {
    int arr1[3][3], arr2[3][3];
public:
    void Input() {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>arr1[i][j];
            }
        }

        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin>>arr2[i][j];
            }
        }
    }
    void _arrMul() {
        Input();
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout<<arr1[i][j] * arr2[i][j]<<' ';
            }
            cout<<endl;
        }
    }
};

int main() {
    // Please write your code here.
    arrMul *a = new arrMul();
    a->_arrMul();
    return 0;
}