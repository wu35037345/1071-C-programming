#include<stdio.h>

int main(){
	float F,C;
	printf("Enter temperature in F");
	scanf("%f",&F);
    C =(F-32)*5/9;	
	printf("%.1f F = %.1f C",F,C);
}
/*
Enter temperature in F: 77
77 F = 25 C
*/

