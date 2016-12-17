#include<stdio.h>
void local_variable(void)
{
    int aaa , bbb , ccc;
    aaa = 15;
    bbb = 12;
    ccc = 11;
    printf("aaa = %d , bbb = %d , ccc = %d", aaa , bbb , ccc);
}
int main()
{
    local_variable();
    printf("aaa = %d , bbb = %d , ccc = %d", aaa , bbb , ccc);// aaa , bbb , ccc, VARIABLE NOT DECLEATED....
    return 0;
}
