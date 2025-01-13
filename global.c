#include<stdio.h>
int a=10;
void test()
{
    int a;
    a = a+2;
    printf("%d",a);
}
void main() {
    test();
    a=5;
    printf("%d",a);
}