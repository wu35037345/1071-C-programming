#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    double X1,X2;
    printf("ax^2+bx+c\n");
    printf("Enter a b c");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c>=0){
	X1=(-b+sqrt(b*b-4*a*c))/(2*a);
	X2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("For equation:%dx^2%dx+%d=0 two roots are: X1 = %.1f X2 = %.1f",a,b,c,X1,X2);
}else{
	printf("no real roots");
}}

