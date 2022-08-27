#include<stdio.h>
#define PI 3.142
int main()
{
    float r,area,cir;

    //cir=2*PI*r;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("The area of the circle:%f\n",area);
    cir=2*PI*r;
    printf("The circumference of the circle:%f\n",cir);

}
