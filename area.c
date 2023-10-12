#include "logic.c"

int main(){

	double radius, a, c;
	printf("Enter the radius of the circle: ");
    	scanf("%lf", &radius);
    	
    	a=area(radius);
    	c=circum(radius);
    	
    	printf("Area of the circle: %.2lf\n", a);
    	printf("Circumference of the circle: %.2lf\n", c);
    	



}
