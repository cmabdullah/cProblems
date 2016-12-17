void matho(int x, int y, int *s, int *d);
main(){
    int x =20, y = 11,s,d;
    matho(x,y,&s,&d);

    printf("s = %d\nd = %d\n", s,d);

}
void matho(int a, int b, int *sum, int *diff){
    *sum  = a+b;
    *diff = a-b;

}
