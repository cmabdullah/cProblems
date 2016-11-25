#include<stdio.h>
int main(){
    float length , width , area, perimeter;
    scanf("%f%f",&length,&width);
    area =length*width;

    perimeter = 2*(length+width);

    printf("\n\t%f\n\t%f", area, perimeter);
}
