#include<stdio.h>
#include<math.h>
int main(){
    float demand_rate, setup_cost, holding_cost_per_unit_time, eoq,tbo;
    printf("put the value of demand_rate, setup_cost, holding_cost_per_unit_time respectively");
    scanf("%f%f%f",&demand_rate, &setup_cost, &holding_cost_per_unit_time);
    eoq =sqrt((2*demand_rate*setup_cost)/holding_cost_per_unit_time);
    printf("EOQ %f\n\a",eoq);
    tbo = sqrt((2*setup_cost)/(demand_rate*holding_cost_per_unit_time));
    printf("TBO %f",tbo);
}
