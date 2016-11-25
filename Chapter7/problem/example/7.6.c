#include<stdio.h>
int main(){
   int i , j , car ;
   int frequency[5][5]= {{0},{0},{0},{0},{0}} ;
   char city;
   printf("For each person , enter the city code\n");
   printf("followed by the care code\n");
   printf("Enter the latter x to indicate end.\n");

   for(i = 1; i <100 ; i++){
    scanf("%c",&city);
    if (city == 'x')

        break ;

    scanf("%d",&car);
        switch(city){
            case 'b' : frequency[1][car]++;
            break;

            case 'c' : frequency[2][car]++;
            break;

            case 'd' : frequency[3][car]++;
            break;

            case 'm' : frequency[4][car]++;
            break;

        }
   }

   printf("\n\n");
   printf("popularity table\n\n");
   printf("_______________________________________\n");

   printf("city ambassador fiat dolphin maruti\n");
   printf("_______________________________________\n") ;

   for(i = 1 ; i <= 4 ; i++){
        switch(i){
                case 1 : printf("bombay  ");
                break ;
                case 2 : printf("calcutta");
                break ;
                case 3 : printf("delhi   ");
                break ;
                case 4 : printf("madras  ");
                break ;

        }

        for (j = 1 ; j<=4 ; j++)
            printf("%7d", frequency[i][j]);

        printf("\n");
   }

   printf("______________________________________\n");
}
/***********
m 1 c 2 b 1 d 3 m 2 b 4
c 1 d 3 m 4 b 2 d 1 c 3
d 4 d 4 m 1 m 1 b 3 b 3
c 1 c 1 c 2 m 4 m 4 c 2
d 1 c 2 b 3 m 1 b 1 c 2
d 3 m 4 c 1 d 2 m 3 b 4



**/
