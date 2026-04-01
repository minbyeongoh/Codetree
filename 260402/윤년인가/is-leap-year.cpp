#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year;
    cin>>year;
    if(year%4==0) {
        if(year%100==0&&year%400!=0) {
            cout<<"false"<<endl;
            return 0;
        }
    cout<<"true"<<endl;
    }
    else cout<<"false"<<endl;
    return 0;
}