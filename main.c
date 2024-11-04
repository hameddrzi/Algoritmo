#include <stdio.h>
#include <stdbool.h>
void BinSearch_Ric(int x, int A[], int i, int j ){
    if(i> j){
        printf("non c'e");
    }
    else{
        int m = (i + j) / 2;
        if(x == A[m])
            printf("Find in positione %d", m);
        else
            if(x<A[m])
                return BinSearch_Ric(x, A, i, m-1);
            else
                return BinSearch_Ric(x, A, m+1, j);
    }
}

int main() {
    int arr[]={1, 3 ,5 ,7 ,9 ,11 ,13 ,15 ,17 ,19};
    int n = 13;
    BinSearch_Ric(n, arr, 0, 9);
    //printf("%d", );
}
