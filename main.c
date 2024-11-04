#include <stdio.h>


int tre_n(int n){
    if(n == 1){
        return 1;
    }else if(n % 2 ==0){
        printf("%d ", n);
        tre_n(n / 2);

    }else {
        printf("%d ", n);
        tre_n(3* n + 1);

    }

}


int main() {
   int n = 15;
   printf("%d", tre_n(n));
}

