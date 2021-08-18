#include<stdio.h>
#include<math.h>
float f(float x)
{
  return(x*2-4*x-10); /* xex = cos x */
}

int main()
{
  float x1,x2,x=0,eps=0.0001,tmp;
  int iteration=0;
  printf("\nEnter two guesses:");
  scanf("%f %f",&x1,&x2);
  do
  {
    tmp=x;
    x=(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));
    printf("\nRoot=%.5f \t Iteration=%d",x,iteration);
    iteration++;
    x1=x2;
    x2=x;
  }while(fabs(tmp-x)>eps);
  printf("\nRoot=%.5f \t Iteration=%d",x,iteration);
  return 0;
}


