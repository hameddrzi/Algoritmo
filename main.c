#include <stdio.h>


void divisione(int a, int b, int *q, int *r) {
    if(a< b){
         *q = 0;
        *r = a;
    }else{
        int q1 ,r1;
        divisione(a-b, b, &q1, &r1);
        *q = q1 + 1;
        *r = r1;
    }
}


int main() {
    int a=0, b=0;
    int *q, *r;

    printf("insert a:");
    scanf("%d", &a);
    printf("insert b:");
    scanf("%d", &b);
    divisione(a, b, &q, &r);
    printf("%d , %d",q, r );
}
