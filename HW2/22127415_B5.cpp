#include <stdio.h>
int main()
{
    int distance;
    double fuel,average_consumption;
    printf("Input total distance in km: ");
    scanf("%d",&distance);
    printf("Input total fuel spent in liters (2 decimal point): ");
    scanf("%lf",&fuel);
    average_consumption = distance / fuel;
    printf("Average consumption (km/lt): %.2lf",average_consumption);
}