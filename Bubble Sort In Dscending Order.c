#include <stdio.h>

int main(){
    int i, n=10;
    int A[10] = {81,69,75,41,91,38,29,67,55,85};
    printf("Unsorted Array\n");
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    printf("Bubble Sort In Ascending Order\n");
    bubbleSortAsc(A,n);
    return 0;
}
void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
void bubbleSortAsc(int A[], int n)
{
    int i, j,temp;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (A[j] < A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    display(A,n);
}
