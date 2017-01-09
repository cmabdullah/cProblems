#include<stdio.h>
struct votar{
   int i ;
   int j;
};
void data(int x, int y);
int main(){
    struct votar info, cm;
  cm.i = 10330;
  scanf("%d",&cm.j);
  //= 100;
  data(cm.i,cm.j);
}
void data(int x, int y){
printf("%d %d", x,y);
}
