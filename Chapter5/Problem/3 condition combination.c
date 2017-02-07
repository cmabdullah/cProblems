#include<stdio.h>
int main(){
    int age , salary;
    scanf("%d%d",&age,&salary);
    if (age > 18 && salary > 1000){
        printf("perfect");
    }

    if (age>= 17){
        if (salary>1000){
            printf("Well");
        }
        else{
            printf("Not bad");
        }
    }
    else{
        printf("imperfect");
    }

}

