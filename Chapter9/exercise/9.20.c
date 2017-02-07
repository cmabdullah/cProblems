/***
Write a function that receives a floating point value x and returns it as a value rounded to two nearest decimal place.
For example ,the value 123.4567 will be rounded  to 123.46(Hint:Seek help of one of the math functions available in math library).
****/
#include<stdio.h>
#include<math.h>
int dec_num(float a);
void main(){
    float a;
    printf("enter  real  number  to get  nearest  integer number ");
    scanf("%f",&a);
    printf("%d",dec_num(a)) ;
}
int dec_num(float x){
    float p;
     if(x>=0)
        p=x+0.5;
    else
        p=x-0.5;
        return p;
  //  return x < 0 ? x - 0.5 : x + 0.5;//same things using conditional operator....
}
