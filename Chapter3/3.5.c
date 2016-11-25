#include<stdio.h>
int main(){
    int x , y , z;
    int f,s,t,fo,fi,si,l;

    printf("Enter 7 digit Int value :");
    scanf("%d",&x);


    f  =  x%10000000;
    s  =  x%1000000;
    t  =  x%100000;
    fo =  x%10000;
    fi = x%1000;
    si = x%100;
    l  = x%10;

    if (x>1000000 && x<=10000000){
        printf("First line :\t %d\n",f);
        printf("second line :\t %d\n",s);
        printf("third line :\t %d\n",t);
        printf("fourth line :\t %d\n",fo);
        printf("Fifth line :\t %d\n",fi);
        printf("sixth line :\t %d\n",si);
        printf("last line :\t %d\n",l);
    }
    else

        printf("Dose not match ");




}
