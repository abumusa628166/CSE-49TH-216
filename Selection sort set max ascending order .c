#include<stdio.h>
int main()
{
    int A[100]={65,22,42,13,55,88,14,96,47,11};
    printf("Unsorted Array\n");
    int i,j,max,temp;
    for(i=0;i<10;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        max=i;
        for(j=i+1;j<10;j++){
            if(A[j]<A[max])
                max=j;
        }
        if(i!=max){
            temp=A[i];
            A[i]=A[max];
            A[max]=temp;
        }
    }
    printf("\nSorted Array\n");
    for(i=0;i<10;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
    return 0;
}
