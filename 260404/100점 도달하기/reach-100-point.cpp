#include <iostream>
using namespace std;

class scoreIn{
protected:
    int score;
public:
    scoreIn(int score) {this->score = score;}
};

class scoreOut : public scoreIn{
public:
    void scoreprint() {
    for(int i = score; score<=100; score++) {
        if(score>=90) cout << "A ";
        else if(score>=80) cout << "B ";
        else if(score>=70) cout << "C ";
        else if(score>=60) cout << "D ";
        else cout << "F ";
    }
    }
};

int main() {
    // Please write your code here.
    int score;
    cin>>score;
    scoreOut a(score);
    a.scoreprint();
    return 0;
}