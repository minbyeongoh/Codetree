#include <stdio.h>

int main() {
    // Please write your code here.
    int a = 1, b = 5, c = 3;
    a = c;
    a = a + c;
    b = b - c;
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}