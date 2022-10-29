#include "stdio.h"
int main()
{
    int a,b,c,so1,so2,so3;
    printf("Nhap so a: ");
    scanf("%d",&a);
    printf("Nhap so b: ");
    scanf("%d",&b);
    printf("Nhap so c: ");
    scanf("%d",&c) ;
    {
        (a<b) ? (so1 = a,so2 = b) : (so1 = b,so2 = a);
        (so2<c) ? (so3 = c) : (so3 = so2,so2 = c);
    }
    printf("Ba so theo thu tu tang dan la %d %d %d\n",so1,so2,so3);
    printf("Ba so theo thu tu giam dan la %d %d %d",so3,so2,so1); 
}