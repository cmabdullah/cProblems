#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *user , *instructor;
    int x ,y;

    user = fopen("output.txt","r");
    instructor = fopen("uoutput.txt","r");

        while(fscanf(user,"%d",&x) != EOF){

        fscanf(instructor,"%d",&y);
        if (x!=y){
            printf("Wrong\n");
        }

    }
    printf("accept");

    fclose(user);
    fclose(instructor);


}
