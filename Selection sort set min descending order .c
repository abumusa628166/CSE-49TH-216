#include<stdio.h>
int main()
{
    int A[100]={56,22,42,13,55,88,14,96,47,11};
    printf("Unsorted Array\n");
    int i,j,min,temp;
    for(i=0;i<10;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        min=i;
        for(j=i+1;j<10;j++){
            if(A[j]>A[min])
                min=j;
        }
        if(i!=min){
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
    printf("\nSorted Array\n");
    for(i=0;i<10;i++){
        printf("%d\t",A[i]);
    }
    return 0;
}

