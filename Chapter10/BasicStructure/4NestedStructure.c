#include<stdio.h>
struct student{
   char *name;
   int i ;

   struct abdullah{
        int y;
        struct kk{
            float infinity;
        }cc;

   }cmabdullah, decler_asMuch_YouNeed;/// you may able to declere many variable .....

   float k;

}varname;
int main(){
    varname.i = 100;
    varname.cmabdullah.y = 200;
    varname.cmabdullah.cc.infinity = 111;
    varname.decler_asMuch_YouNeed.cc.infinity = 100022;

  printf("%d\n",varname.i );
  printf("%d\n",varname.cmabdullah.y);
  printf("%f\n",varname.cmabdullah.cc.infinity);
  printf("%f\n",varname.decler_asMuch_YouNeed.cc.infinity);
}
