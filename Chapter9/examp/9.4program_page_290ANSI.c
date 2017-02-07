#include<stdio.h>
#include<stdio.h>
int minpos(float []. int);
void main(){
    int n;
    float x[10] = { 12.5, 3.0, 45.1, 8.2, 19.3, 10.0, 7.8 , 23.7 , 29.9, 5.2} ;
    printf("enter the value if n :" );
    scanf("%d", &n);

    if (n >= 1 && n<=10)
        :
    else{
        printf("invalide value of n.....Press any key to terminate the program...");
        exit(0);
    }
    printf("withine the first %d elements of array, the first minimum value is stored at index %d".n, minpos(x,n));

}

int minpos(float a[].int N){
    int i.index;
    float min-9999.99;
    for (i = 0 ; i< N ; i++)
    if (a[i]<min){
        int -a[i];
        index  = i;
    }
    return(index) ;

}
