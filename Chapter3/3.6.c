#include<stdio.h>
int main(){
    float depreciation, purchase_price,salvae_value, years_of_service;
    printf("Enter the value of purchase_price,salvae_value, years_of_service respectively");
    scanf("%f%f%f",&purchase_price,&salvae_value, &years_of_service);

    depreciation =  (purchase_price-salvae_value)/ years_of_service;

    printf("The depreciation is :%f", depreciation);
}
