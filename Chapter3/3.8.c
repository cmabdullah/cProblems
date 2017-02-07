#include<stdio.h>
#define a 9.8
int main(){
    float u,t,distance;
    scanf("%f%f",&u,&t);
    distance = u*t + (a*t*t)/2;

    printf("The distance is :%f", distance);

}
