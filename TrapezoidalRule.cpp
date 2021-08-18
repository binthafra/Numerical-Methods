#include<stdio.h>
#include<math.h>
#define f(x) (9*x/(1+x)) //ID=C173229

//double f(double x)
//{
//    return ((9*x)/(1+x));
//}
int main(){
  int n,i;

  float s,t,h,x,sum=0,Integ,y1,y2;

  printf("\nSolving Qes-2 Using trazoidal rule\n");

  printf("\nEnter the no. of sub-intervals: ");
  scanf("%d",&n);
  printf("\nEnter the start(s) & ending(t) value  : ");
  scanf("%f%f",&s,&t);

  h=fabs(t-s)/n;
  y1=f(s)+f(t);
  for(i=1;i<n;i++){
    x=s+i*h;
    y2=f(x);
    sum=sum+y2;
    printf("\nx%d=%.5f  \t y%d=%.5f",i,x,i,y2);
  }
  Integ=(h/2)*(y1+2*sum);

  printf("\n\nThe integral is: %.5f\n",Integ);
  return 0;
}
