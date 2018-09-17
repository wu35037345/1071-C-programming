#include<stdio.h>

int main(){
	float C,F;
	printf("Enter temperature in C");
	scanf("%f",&C);
    F = C*9/5+32;	
	printf("%.1f C = %.1f F",C,F);
}
/*
Enter temperature in C: 25
25 C = 77 F
*/

