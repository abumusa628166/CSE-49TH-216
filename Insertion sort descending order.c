#include<stdio.h>
int insertionSortDsc(int A[],int n);
void display(int A[],int n);
int main(){
    int a[]={69,35,84,72,68,51,22,34,71,55};
    int i,n=10;
    printf("Unsorted Array\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Insertion Sort In Descending Order\n");
    insertionSortDsc(a,n);
    return 0;
}

int insertionSortDsc(int A[],int n){
    int i,j,B[n];

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]<A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
}

void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
