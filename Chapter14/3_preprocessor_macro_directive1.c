///macro directive
#include<stdio.h>
#define condition if(x<y)
#define error printf("not match");
#define sum(a,b)((a)+(b))
#define sub(a,b)((a)-(b))
#define div(a,b,c)((a)/((b)-(c)))
#define mul(a,b,c) ((a)*((b)+(c)))
//      ---- no space between here
#define sq(x)((x)*(x))
#define cube(x)(sq(x)*(x))
int main(){
    printf("%d\n",sum(2,2));/// int decleration
    printf("%f\n",sub(66.2,2.3));///float decleration
    printf("%d\n", div(100,4,2));
    printf("%d\n", mul(100,4,2));
    printf("%d\n", div(100,4,2));

    printf("\n\n\nprint square value : %d\n", sq(3));
    printf("print cube value   : %d\n", cube(3));
}

