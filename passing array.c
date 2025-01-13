//passing array to a function
#include<stdio.h>
void display (int A[],int n);
void main() {
    int A[10], n, i;
    printf("Enter the number of element= ");
    scanf("%d",&n);
    printf("Enter the elements= ");
    for(i=0; i<n; i++)
    scanf("%d", &A[i]);
    display(A,n);
}

void display(int A[10], int n)
{
    int i;
    for (i=0; i<n; i++)
    printf("%d", A[i]);
}