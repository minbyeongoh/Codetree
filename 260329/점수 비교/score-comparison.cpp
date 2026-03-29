#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int aMath,aEnglish,bMath,bEnglish;
    cin >> aMath >> aEnglish;
    cin >> bMath >> bEnglish;
    if(aMath>bMath&&aEnglish>bEnglish) cout << 1<<endl;
    else cout <<0<<endl;
    return 0;
}