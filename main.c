#include <stdio.h>

void Inser_sort(int A[], int len){
    int temp;
    for (int i = 0; i < len; ++i) {
        int j = i;
        while (j >0 && A[j-1] > A[j]){
            temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            j = j-1;
        }
    }

}

#define MAX 5
int main() {
    int arr[MAX];

    for (int i = 0; i < MAX; ++i) {
        scanf("%d", &arr[i]);
    }
    Inser_sort(arr, MAX);
    for (int i = 0; i < MAX; ++i) {
        printf("%d ", arr[i]);
    }

   /* int temp;
    for (int i = 1; i < MAX; ++i) {
        scanf("%d", &arr[i]);
        int j = i;
        while (j >0 && arr[j-1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j = j-1;
        }
    }

    for (int i = 0; i < MAX; ++i) {
        printf("%d ", arr[i]);
    }
    */
}
