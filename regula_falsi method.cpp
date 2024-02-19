#include<stdio.h>
#include<math.h>
float f (float x)
{
	return (x*x*x-3*x-5);
}
int main()
{
	float a,b,c,e;
	int i=0;
do{
	printf("Enter the no of a & b:\n");
	scanf("%f %f", &a,&b);
}while(f(a)*f(b)>0);
printf("Enter the value of error: ");
scanf("%f",&e);
printf("ITN\t\ta\t\t\tb\t\t\tc\t\t\tf(c)\n\n");
do{
    float k= a*f(b);
    float u= b*f(a);
    float s= f(b)-f(a);
	c=(k-u)/s;
	printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\n",i,a,b,c,f(c));
	if(f(a)*f(c)<0)
	{
		b=c;
	}
	else
		a=c;
		i++;
}while(fabs(f(c))>e);
printf("Root=%0.3f\n",c);
return 0;
}
