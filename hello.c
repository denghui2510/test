#include <stdio.h>
#include <windows.h>
int main() {

int f=12345;
int a=f/10000;
int b=(f%10000)/1000;
int c=(f%1000)/100;
int d=(f%100)/10;
int e=f%10;
    printf("a=%d\n b=%d\n c=%d\n d=%d\n e=%d\n",a,b,c,d,e);
    system("pause");
    return 0;
}
