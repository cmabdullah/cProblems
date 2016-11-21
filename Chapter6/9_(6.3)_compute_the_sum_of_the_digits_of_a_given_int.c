 #include<stdio.h>//header file
 ///(6.3) compute the sum of the digits of a given int// practice carefully
 int main(){
        int n,s=0;
        scanf("%d",&n);
        while(n!=0){
            s=s+n%10;
            n = n/10;
    }
    printf("%d",s) ;

 }
