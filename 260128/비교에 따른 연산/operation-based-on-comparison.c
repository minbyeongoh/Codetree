#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b, result;
    scanf("%d %d", &a, &b);
    if(a>b) result= a*b;
    else result= b/a;
    printf("%d", result);
    return 0;
}