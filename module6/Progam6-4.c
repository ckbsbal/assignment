#include<stdio.h>
int main()
{
int n,fact=1,i,n1=2,flag=1;
double sum=1.0;
printf("enter a number=");
scanf("%d",&n);


while(n+1!=n1)
{
	 for(i=1;i<=n1+1;i++)   
      fact=fact*i;
 if(flag%2==0)
	  sum=sum+(double)n1/fact;
	  else
	  sum=sum-(double)n1/fact;  
    n1++;
	 flag++;
	fact=1;

}
printf("\nsum=%lf",sum);
return 0;
}
