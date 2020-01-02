#include <stdio.h>
int recursiveLinearSearch(int A[],int i, int n, int x);
void display(int A[], int n);
void printResult(int flag);

int main(){
    int n=10;
    int A[10] = {31,23,42,62,86,94,75,82,93,71};
    int x,flag;
    display(A,n);
    printf("Search for an item with recursive function: ");
    scanf("%d",&x);
    flag = recursiveLinearSearch(A,0,n,x);
    printResult(flag);
    return 0;
}
int recursiveLinearSearch(int A[], int i, int n, int x)
{
    if(i>=n)
        return -1;

    if(A[i] == x){
        return i;
    }
    recursiveLinearSearch(A,i+1,n,x);
}
void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void printResult(int flag){
    if(flag != -1)
        printf("Item found at index of %d\n",flag);
    else
        printf("Item not found\n");
}

