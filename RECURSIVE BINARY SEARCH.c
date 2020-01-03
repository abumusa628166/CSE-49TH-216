#include <stdio.h>
int recursiveBinarySearch(int A[],int first,int last,int x);
void printResult(int flag);
void display(int A[],int n);
int main(){
    int A[10] = {19,98,65,47,5,89,32,23,55,12};
    int first,last,n=10,x,flag;
    first = 0;
    last = n-1;
    int i,j,B[n];

    display(A,n);

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]>A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    printf("Ascending Order\n");
    display(B,n);

    printf("Search with recursion: ");
    scanf("%d",&x);
    flag = recursiveBinarySearch(B,first,last,x);
    printResult(flag);

    return 0;
}
int recursiveBinarySearch(int A[],int first,int last,int x){
    if(first>=last)
        return -1;

    int mid = (first+last)/2;
    if(A[mid] == x)
        return mid;

    if(x>A[mid])
        first = mid+1;
    else
        last=mid-1;
    recursiveBinarySearch(A,first,last,x);
}

void printResult(int flag){
    if(flag != -1)
        printf("Found at index of %d\n",flag);
    else
        printf("Not found\n");
}

void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

