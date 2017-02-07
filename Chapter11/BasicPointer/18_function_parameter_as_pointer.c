#include<stdio.h>
int max(int a, int b){
        return ((a>b)? a:b);
}
int min(int a, int b){
    return ((a<b)? a:b);

}
int result(int a, int b, int (*p)(int , int)){
    return (*p)(a,b) ;
}
int main(){
printf("\n max of 19 and 28 is %d", result(19,28, max));
printf("\n min of 28 and 10 is %d", result(20,10, min));


}
