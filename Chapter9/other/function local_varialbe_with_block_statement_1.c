#include<stdio.h>
//a.kium.khan@gmail.com//
int main()
{
    int n = 10;
    printf("In Scope Levle 1 : n = %d(term 1)\n", n);
    {
        n++;
        printf("In Scope Levle 2 : n (n++) = %d((term 2)(increment))\n\n", n);
        {
            int n = 1;
            printf("In Scope Levle 3 : n = %d (term 3) \n", n);
            n++;
            printf("In Scope Levle 3 : n (n++) = %d ((term 3)(increment)) \n\n", n);
        }
        printf("In Scope Levle 2 : n = %d ((term 2)(increment runing ))\n", n);
    }
    printf("In Scope Levle 1 : n = %d\n", n);//this tetm not clearly...............//
    return 0 ;
}
