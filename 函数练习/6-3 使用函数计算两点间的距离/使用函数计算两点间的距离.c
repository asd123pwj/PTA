#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 ){
	double x= x1-x2, y= y1-y2;
	
	return sqrt(x*x+y*y);
	
	
}
