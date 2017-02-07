/***
Develop a top down modular program  that will perform the following  tasks
 (a)Read two integer arrays with unsorted  element
 (b)Sort them in accending order
 (c)Merge the sorted arrays
 (d)Print the sorted list
Use function  for carrying out each of  the above tasks. The main  function should have only function calls.
***/
//see datastructureRepo on G-Lab
#include<stdio.h>
int main(){
    int  a[5]={0,25,37 , 96 , 100} ;
    int  b[5]  = {1 ,3 , 5 , 40 , 57}, res[10];
    int i = 0, j = 0 , k  = 0;
    while(i <= 4  &&  j<=4){
            if(a[i]<b[i]){
                res[k] = a[i];
            i++;
            k++;
            }
            else{
                res[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<5){
        res[k] = a[i];
        i++;
        k++;
    }
    while(j<5){
        res[k] = b[j];
        j++;
        k++;
    }
    for (k = 0; k<=9 ; k++){
        printf("%d  ",res[k]);
    }
}


