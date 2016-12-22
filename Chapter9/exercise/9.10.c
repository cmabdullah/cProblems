/*****************
Develop a modular interactive program using functions that resds the values of three sides of triangle and
displays either its area or its perimeter as per the request of the user. Given the three sides,a,b,c.
                   Perimeter=a+b+c
                   Area=sqrt(s-a)(s-b)(s-c)    Wher s=(a+b+c)/2
****/
//abdullah khan
#include<stdio.h>
void area(int a,int b,int c);
void  perimeter(int x,int y,int z);
void  main(){
    int a,b,c, key;
   printf("input  a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("Press 1 for area Or Press 2 for perimeter");
    scanf("%d",&key);

    if (key == 1){
     area(a, b, c);
    }
    else if (key == 2){
        perimeter(a,b,c);
    }
    else
        printf("Not match");
}
void  perimeter(int x,int y,int z){
  int  s;
  s = (x+y+z)/2;
printf("%d",s);
}
void  area(int  x,int y,int z){
   float  ar;
   int s;
   s = (x+y+z)/2 ;
   ar=sqrt((s-x)*(s-y)*(s-z));
  printf("%f\n",ar);
}
