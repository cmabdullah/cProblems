/*******
#include<stdio.h>

static char s[10][100];
static unsigned r[10];

static unsigned c, n, max, i;

int main(){

    scanf("%u", &n);

    while(n--){
        scanf("%s%u", &s[0], &r[0]);
        max = r[0];

        for(i = 1; i < 10; ++i){
            scanf("%s%u", &s[i], &r[i]);
            if(r[i] > max)
                max = r[i];
        }

        printf("Case #%u:\n", ++c);
        for(i = 0; i < 10; ++i){
            if(r[i] == max)
                printf("%s\n", s[i]);
        }
    }
    return 0;
}
*****/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char a[1000],b[1000];
    int n,k[1000],max,p,t=1;

            scanf("%s%d",a,&k[0]);
            scanf("%s%d",b,&k[1]);

            printf("%s\n",a );
          //  puts(a);
            puts(b);

    return 0;
}