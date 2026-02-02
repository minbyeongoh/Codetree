#include <stdio.h>

int main() {
    // Please write your code here.
    int a,n,sum;
    scanf("%d %d", &a, &n);
    sum = a;
    for(int i =0; i<n; i++) {
        sum+=n;
        printf("%d\n",sum);
    }
    return 0;
}