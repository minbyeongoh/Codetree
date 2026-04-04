#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int findmiddle(int a, int b, int c) {
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        return v[1];
    }

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<findmiddle(a,b,c)<<endl;
    return 0;
}