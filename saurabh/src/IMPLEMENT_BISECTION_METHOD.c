/*
 ============================================================================
 Name        : saurabh.c
 Author      : Saurabh
 Version     :
 Copyright   : Your copyright notice
 Description : PROGRAM TO IMPLEMENT BISECTION METHOD
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define EPS 0.00000005
#define F(x) (((x)*(x)*(x))-4*(x))-9//define function....

//...Function Prototype Declaration
void Bisect();
//...Global Variable Declaration field
int count=1,n;
float root=1;
//... Main Function Implementation
int main()
{
printf("\n Solution by BISECTION method \n");
printf("\n Equation is ");
printf("\n\t\t\t x*log(x) Ð 1.2 = 0\n\n");
printf("Enter the number of iterations:");
scanf("%d",&n);
Bisect();
}
//... Function Declaration
void Bisect()
{
float x0,x1,x2;
float f0,f1,f2;
/*Finding an Approximate ROOT of Given Equation, Having
+ve Value*/
for(x2=1;;x2++)
 {
	f2=F(x2); if (f2>0)
	{
		break;
	}
}

/*Finding an Approximate ROOT of Given Equation, Having -ve Value*/
for(x1=x2-1;;x2--) {
	f1=F(x1);
	if(f1<0)
	{
		break;
	}
}

//...Printing Result
printf("\t\t-----------------------------------------");
printf("\n\t\t ITERATIONS\t\t ROOTS\n");
printf("\t\t-----------------------------------------");
for(;count<=n;count++)
     {
    	 x0=(x1+x2)/2.0;
    	 f0=F(x0);
    	 if(f0==0)
    	 {
    		 root=x0;
    	 }
    	 if(f0*f1<0){
    		 x2=x0;
    	 }
    	 else
    	 {
    		 x1=x0;
    		 f1=f0;
    	 }
    	 printf("\n\t\t ITERATION %d", count);
    	 printf("\t :\t %f",x0);
    	 if(fabs((x1-x2)/x1) < EPS)
    	 {
    		 printf("\n\t\t---------------------------------");
    		 printf("\n\t\t Root = %f",x0);
    		 printf("\n\t\t Iterations = %d\n", count);
    		 printf("\t\t------------------------------------");
    		 exit(0);

    	 }
     }
     printf("\n\t\t----------------------------------------");
     printf("\n\t\t\t Root = %7.6f",x0);
     printf("\n\t\t\t Iterations = %d\n", count-1);
     printf("\t\t------------------------------------------");
}
