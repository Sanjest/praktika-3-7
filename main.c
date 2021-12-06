#include <stdio.h>
#define LEFT_x -0.5
#define RIGHT_x 0.5
#define STEP_x 0.1
int main(){
	double x;
	double y;
	for (x=LEFT_x;x<=RIGHT_x;x+=STEP_x){
	y=x*x;
	printf("%6.2lf,%6.2lf\n", x,y);
	}
}
