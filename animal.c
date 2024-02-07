#include<stdio.h>

void area_peri(float,float*,float*);


void main()
{
float radius,area,perimeter;


printf("enter radius of circle\n");
scanf("%f",&radius);


area_peri(radius,&area,&perimeter);


printf("\nArea of circle=%0.2f\n",area);
printf("Perimeter of circle=%0.2f\n",perimeter);


return;
}

void area_peri(float r,float*a,float*p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;

}
