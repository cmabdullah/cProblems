#include<stdio.h>
///90% complete
int main(){
    int a[3][3], b[3][3], i , j ,k ,count = 0;
printf("enter Mat A :\n");
    for (i = 0; i<3 ;i++){
        for(j = 0; j<3 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter Mat B :\n");

    for (i = 0; i<3 ;i++){
        for(j = 0; j<3 ; j++){
            scanf("%d",&b[i][j]);
        }
    }


    for (i = 0; i<3 ;i++){
        for(j = 0; j<3 ; j++){
            if(a[i][j] == b[i][j]){
//                count++;
                printf("Mat A = Mat B ");
            break;
            }
        }
    }

//    if (count== 0)
//        printf("\ndoes not match");


}
/*******

80 87 90
55 66 77
44 33 23

******/
