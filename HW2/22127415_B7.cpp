#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,hieu_x,hieu_y,distance;
    printf("Input x1: ");
    scanf("%f",&x1);
    printf("Input y1: ");
    scanf("%f",&y1);
    printf("Input x2: ");
    scanf("%f",&x2);
    printf("Input y2: ");
    scanf("%f",&y2);
    hieu_x = x1-x2;
    hieu_y = y1-y2;
    distance = pow(hieu_x,2)+pow(hieu_y,2);
    distance = sqrt(distance);
    printf("Distance between the two given points: %.4f",distance);

}