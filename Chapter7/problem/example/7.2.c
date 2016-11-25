#include<stdio.h>
int main(){
    float val[12];
    int i , low , high;

    int group[11] = { 0,0,0,0,0,0,0,0,0,0,0};

    for (i = 0; i<12; i++){
        scanf("%f",&val[i]);
        ++group[(int)(val[i])/10];
    }
    printf("\n");
    printf("Group range frequency\n");
    for(i=0; i<11; i++){
        low = i *10;
        if (i ==10)
            high = 100;
        else
            high = low +9;

        printf("%2d %3d to %3d %d\n" ,i+1,low , high, group[i]);
//    printf("%d ",group[i]);
    }
}
