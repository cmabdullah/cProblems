#include<stdio.h>>
int main(){
    ///pointer expression
    int arr[5] = {2,4,66,8,10};
    int cm[5] = {20,40,96,80,10};
    int c, z,y, i = 100, j = 200;
    int *p,*q;
    p = &i;

    q = &j;
    p = arr ;
    q =cm;
    y = *p  *   *q ;///allow

    printf("%d\n", y);
    z = 5 *  -*p/   *q ;///allow , Note blank space betyeen / and * above
  printf("%d\n", z);
    z = (5 *  (-(*p)))/   (*q) ;///same job
    printf("%d\n", z);


//    add sub allow
//    -------------
    printf("memory address not changed %x\n", p);

    printf("changed memory address     %x\n\n", p+1);///    p+1 or p-1;///allow



    for (c = 0; c<5; c++){
        if (c == 0)
        printf("base memory address    = : %x value = : %d \n",p, *p );
    else
        printf("changed memory address = : %x value = : %d \n",p, *p );
        p++;
    }


//    p1+p2///allow
//    p1-p2///allow
//    p1>p2///allow
//    p1==p2///allow
//    p1!=p2///allow /// Note comparesion can be meaningfully in handalling arrays and strings.
//
//
//    ///we may not use poointer in division or multiplication
//    p1 * p2///not allow
//    p1 / p2 ///not allow, more detail page 367 ANSI 6e


}
