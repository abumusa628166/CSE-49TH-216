#include <stdio.h>
void printArray(int B[],int i, int len);
void printArrayRev(int B[],int i, int len);
int main(){
    int A[100]={61,23,57,84,62,12,11,75,88,76};
    int length=10;
    int i,X,Y,Z;
    int flag=-1;

    printf("\n(A) PRINTING ARRAY USING LOOP\n");
    for(i=0;i<length;i++){
        printf("%d\t",A[i]);
    }

    printf("\n(B) INSERTING ANY VALUE AT 10th INDEX\n");
    A[10]=37;
    for(i=0;i<length+1;i++){
        printf("%d\t",A[i]);
    }

    printf("\n(C) UPDATING 5th INDEX WITH ANOTHER VALUE \n");
    A[5] = 44;
    for(i=0;i<length+1;i++){
        printf("%d\t",A[i]);
    }

    printf("\n(D) SEARCH FOR ANY VALUE IN THE ARRAY \n");
    printf("Enter Your Value: ");
    scanf("%d",&X);
    for(i=0;i<length;i++){
        if(A[i]==X){
            flag=i;
            break;
        }
    }
    if(flag != -1){
        printf("Found index is %d\n",flag);
    }
    else
        printf("Not Found\n");

    printf("\n(E) INSERTING ANY VALUE AT 3rd INDEX AND SHIFTING ALL OTHER VALUE TO RIGHTT \n");
    printf("Insert a value at 3rd index: ");
    scanf("%d",&Y);
    for(i=length-1;i>2;i--){
        A[i+1] = A[i];
    }
    A[3] = Y;
    length++;
    for(i=0;i<length;i++){
        printf("%d\t",A[i]);
    }

    printf("\n(F) DELETING ANY VALUE FROM Zth INDEX AND SHIFTING ALL OTHER VALUE TO LEFT \n");
    printf("Delete value from index of: ");
    scanf("%d",&Z);
    for(i=Z;i<length;i++){
        A[i] = A[i+1];
    }
    length--;
    for(i=0;i<length;i++){
        printf("%d\t",A[i]);
    }

    printf("\n(G) PRINTING ARRAY WITH RECURSION \n");
    printf("\nPrint array with recursion\n");
    printArray(A,0,length);

    printf("\n(H) PRINTING ARRAY WITH RECURSION IN REVERSE ORDER \n");
    printf("\nPrint array with recursion in reverse order\n");
    printArrayRev(A,0,length);
    return 0;
}


void printArray(int B[],int i, int len)
{
    if(i>=len)
        return;
    printf("%d\t", B[i]);
    printArray(B,i+1,len);
}
void printArrayRev(int B[],int i, int len)
{
    if(i>=len)
        return;
    printArrayRev(B,i+1,len);
    printf("%d\t", B[i]);
}
