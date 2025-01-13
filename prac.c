#include<stdio.h>

/*void main() {
int a = 12, b = 7, c;
c = a > b ? a : b;
printf("value of c = %d ", c);
} */
/*int temp;
int a, b;
printf("Enter two number");
scanf("%d %d", &a, &b);
temp = a;
a=b;
b=temp;
printf("%d%d", a, b); 
}*/
int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("adult \n");
        printf("They can vote \n");
        printf("They can drive");
    }
    else {
        printf("not adult \n");
    }
    return 0;
}