#include <stdio.h>
/************
c m abdullah khan
when
key<mid_index
then end = mid_index-1

when
key > mid_index
then start = mid_index+1

start   end     mid     key
0       15      7       11 key<mid_index
0       6       3       11 key > mid_index
4       6       5       11 MATCH WITH INDEX 5
**/
 int main()
 {
     int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33 , 83, 87, 97, 99, 100} , start  , end  , mid_indx , key;
     start = 0 ;
     end = 15;
     printf("Enter any number :");
     scanf("%d",&key);
     while (start <= end) {
         mid_indx = (start + end) / 2;
         if (key == ara[mid_indx]) {
             break;
         }
         if (key < ara[mid_indx]) {
             end = (mid_indx - 1 );
         }
         else {
             start = mid_indx + 1;
         }
     }
     if (start > end) {
         printf("%d is not in the array\n", key);
     }
     else {
         printf("%d is found in the array. \nIt is the %d th element of the array.\n", ara[mid_indx], mid_indx);
     }
     return 0;
 }
