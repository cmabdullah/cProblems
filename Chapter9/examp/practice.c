
/*******
#include<stdio.h>
void abdullah(int , int);
//function call
int main(){
    int x , y ;
    abdullah(10 ,20);
}
void abdullah(int p , int q){
    int r;
    r =   p+q;
    printf("%d",r);
}
**********/
/*****
#include<stdio.h>
//dont communicate them
void abdullah(void);
void pk50t(void);
int main(){
    abdullah();
    pk50t();
}
void abdullah(void){
        int a=20 ,b=30,  c;

        c = a*b;
        printf("%d", c);
}
void pk50t(void){
    int x = 2000;
    printf("\n%d",x);
}
********/
//#include<stdio.h>
//void printline(char c);
////argument in the function call
//int main(){
//
//    printline('d');
//
//}
//void printline(char k){
//    int i;
//    for ( i = 0; i<20; i++){
//        printf("%c", k);
//    }
//
//}

void matho(int x, int y, int *s, int *d);
main(){
    int x =20, y = 11,s,d;
    matho(x,y,&s,&d);

    printf("s = %d\nd = %d\n", s,d);

}
void matho(int a, int b, int *sum, int *diff){
    *sum  = a+b;
    *diff = a-b;

}
