// https://www.acmicpc.net/problem/18301

#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d", (n1+1)*(n2+1)/(n3+1)-1);
    return 0;
}
