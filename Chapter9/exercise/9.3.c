/**********
Use recursive function calls to evaluate
F(x)=x-x3/3!+x5/5!-x7/7!+………

***/
#include<stdio.h>
#include<math.h>
double fact(int power){
         double f;
         f=1;
        if(power==1)
        return 1;
      else
        f=power*fact(power-1);
        return f;
}

void main(){
  int i=1;
  double x,term,deno,lob,sin,power;
  power=3;
  scanf("%lf",&x);
  term=x;
  sin=x;
  while(term>=0.0001){
    lob=pow(x,power);
    deno=fact(power);
    term=lob/deno;
    power+=2;
    if(i%2==1)
      sin=sin-term;
    else
      sin=sin+term;
    i++;
}
  printf("%lf",sin);
}

