//Write a program to read the age of 10 persons and count the numbers of
//persons in teh group 50 to 60 /
// Date: 11/11/2016
#include<conio.h>
void main(){
    int i,age,c=0;
        for(i=1;i<=10;i++){
            printf("Enter the age of the person%d:",i);
            scanf("%d",&age);
            if (age>=50 && age<=60)
            c=c+1;
        }
    printf("The number of persons in the age group 50 to 60 are : %d",c);
}

