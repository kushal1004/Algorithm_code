#include<stdio.h>
#include<math.h>
float f (float x)
{
	return (x*x*x-3*x-5);
}
float derivative(float x) {
  // write the derivative of your equation
  return (3*x*x-3);
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
/*for (i = 1; i <= n; i++) 
  {
    if (derivative(x) == 0) {
      // f'(x) should not be 0
      printf("Division by Zero is not allowed.");
      exit(0);
    }*/
do{
	float k= (a+b)/2;
	c=k-f(k)/derivative(k);
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
