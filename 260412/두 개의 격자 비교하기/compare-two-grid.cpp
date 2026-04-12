#include <iostream>
using namespace std;

class arrCmp {
    int n, m;
public:
    arrCmp(int n, int m) {
        int arr1[n][m], arr2[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>arr1[i][j];
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>arr2[i][j];
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(arr1[i][j]==arr2[i][j])
                    cout<<"0 ";
                else
                    cout<<"1 ";
            }
            cout<<endl;
        }
    }
};

int main() {
    // Please write your code here.
    int n, m;
    cin>>n>>m;
    arrCmp *a = new arrCmp(n, m);
    delete a;
    return 0;
}