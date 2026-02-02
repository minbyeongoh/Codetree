#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int result = n;
    for(int i =0; i<5; i++) {
        printf("%d ", result);
        result +=n;
    }
    return 0;
}