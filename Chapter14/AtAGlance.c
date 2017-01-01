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
=>//printf("%d\n",sum(2,2));/// int decleration

///macro define undefine redefine
///constant directive
'#' -operator => stringizing operator also unary operator ///it convert argument to string
'##'-operator => token passing operator also binary operator///it marge two token
Note: You mast write macro in ccapital letter....

#include<stdio.h>
#define pi 3.1416
#undef pi
#define pi 4.34 /// redefine with new value


///built in macros
#include<stdio.h>
///https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html
int main(){
    printf("%s%s","DATE__ = ",__DATE__);
    printf("\n");
    printf("%s%s","TIME__ = ",__TIME__);
    printf("\n");
    printf("%s%s","FILE__ = ",__FILE__);
    printf("\n");
    printf("%s%d","LINE__ =",__LINE__);
//    printf("%s%s","__STDC__ = \n",__STDC__);/// not working
}


///compiler control directive
/****************** understandd carefully
#if
#ifdef TEST      => #if defined TEST page458 ANSI
#ifndef      => #if !defined
#elif
#else
#endif
more detaile see chapter14/6_compiler_control_directive.c
page 432 ANSI
/*****************/
int main(){
    #ifdef __STDC__
    printf("ANSI mode");
    #else
    printf("ANSI mode");
    #endif // __STDC__
}


///token passing
#include<stdio.h>
#define type i##nt
#define sum(xy) printf(#xy " = %d\n",xy)
/// ##  means marge two token
//http://www.cprogramming.com/reference/preprocessor/token-pasting-operator.html
int main(){
    int b = 19;
    type a; /// same as int a; since i##nt pastes together to "int"
    a = 20;
    printf("%d\n",a);
    sum(a+b);
}
#paragma directive
///not clear concept -_-
