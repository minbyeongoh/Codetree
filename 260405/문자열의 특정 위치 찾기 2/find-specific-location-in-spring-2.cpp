#include <iostream>
#include <string>

using namespace std;

class strIn {
protected:
    char c;
    string ch[5] = {"apple","banana","grape","blueberry","orange"};
public:
    strIn() {
        cin>>c;
    }
    virtual void strfind() {}
};

class strOut : public strIn {
    int count = 0;
public:
    void strfind() {
        for(int i = 0; i < 5; i++) {
            if(ch[i][2]==c||ch[i][3]==c) {
                cout<<ch[i]<<endl;
                count++;
            }
        }
        cout<<count<<endl;
    }
};

int main() {
    // Please write your code here.
    strIn *str =new strOut;
    str->strfind();
    delete str;
    return 0;
}