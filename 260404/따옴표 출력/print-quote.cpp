#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    vector<string> v;
    v.emplace_back("He says \"It\'s a really simple sentence\".");
    for(const string&s : v) {
        cout<<s;
    }
    return 0;
}