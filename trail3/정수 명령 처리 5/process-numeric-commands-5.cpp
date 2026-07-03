#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    vector<int> v;
    int N, pValue, gValue;
    string command;
    cin>>N;
    for(int i = 0; i < N; i++) {
        cin>>command;
        if (command == "push_back") {
            cin>>pValue;
            v.push_back(pValue);
        }
        if (command == "get") {
            cin>>gValue;
            cout<<v[gValue-1]<<endl;
        }
        if (command == "size") cout<<v.size()<<endl;
        if (command == "pop_back") {
            v.pop_back();
        }
    }
    return 0;
}