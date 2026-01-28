#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    if(n<0) printf("ice\n");
    else if(n>=100) printf("vapor\n");
    else printf("water");
    return 0;
}