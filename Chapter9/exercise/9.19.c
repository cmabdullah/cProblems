/**********
In preparing  the calander for a year we need to know whether the particular year is leap year or not .
Design a function leap () that receives the year as a parameter and returns an appropriate messege.
What modifications are required if we want to use the function in preparing the actual calender?
***/
#include<stdio.h>
#include<conio.h>
int  leap(int  y);
void  main(){
    int y;
    printf("input a  year");
    scanf("%d",&y);
    leap (y);


}
int leap(int  y){
    if(((y%4)==0)&&((y%100)!=0)  || ((y%400)==0))
                printf(" This is a leap year");
        else
                printf(" This is not a leap year");
    return(y);
}

