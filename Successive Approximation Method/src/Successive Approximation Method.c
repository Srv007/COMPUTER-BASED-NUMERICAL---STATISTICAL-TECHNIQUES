/*
 ============================================================================
 Name        : Successive Approximation Method.c
 Author      : Saurabh Verma
 Version     : V1.1
 Copyright   : Your copyright notice
 Description : Successive Approximation Method in C
 Date		 : 29/jan/2014
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS .0000005
#define F(x) (x*x*x+1)/2
#define f(x) x*x*x-2*x+1

void ITER();

int main(void) {
	printf("\n\tSol by Itr. Mathod\n");
	printf("\n\tEquation is :");
	printf("\n\t\t\t\t X*X*X - 2*X + 1 = 0\n\n");
	ITER();

}
void ITER(void){
	float x1,x2,x0,f0,f1,f2,error;
	int i= 0,n;
	for(x1=1;;x1++){
	f1=F(x1); if (f1>0)
	break;
	}
	for(x0=x1-1;;x0--) {
	f0=f(x0);
	if(f0<0)
	break;
	}
	x2=(x0+x1)/2;
	printf("Enter the number of iterations:");
	scanf("%d",&n);
	printf("\n\n\t\t The 1 approximation to the root is: %f",x2);
	for(;i<n-1;i++)
	{
	f2=F(x2);
	printf("\n\n\t\t The %d approximation to the root is: %f",i+2,f2);
	x2=F(x2);
	error=fabs(f2-f1);
	if(error<EPS)
		break;
	    f1=f2;
	}
	     if(error>EPS)
	printf("\n\n\t NOTE:- The number of iterations are not sufficient.");
	printf("\n\n\n\t\t\t------------------------------");
	printf("\n\t\t\t The root is %.4f",f2);
	printf("\n\t\t\t-----------------------------");
}
