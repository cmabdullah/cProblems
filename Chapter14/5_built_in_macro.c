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
