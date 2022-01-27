/*
Task
Given the meal price (base cost of a meal),
 tip percent -  (the percentage of the meal price being added as tip), 
 and tax percent - (the percentage of the meal price being added as tax) for a meal, 
 find and print the meal's total cost. Round the result to the nearest integer.
*/
// A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. 
// Print the value 123 and return from the function.


#include<stdio.h>
#include<math.h>
void solve(float meal_cost, float tax_percent, float tip_percent){
    double tip = (meal_cost*tip_percent/100);        //int/int can never give float!!!

    double tax = (meal_cost*tax_percent/100);          // ONLY float / int CAN give flaot!!

    // printf("%f\n", tip);
    // printf("%f\n", tax);
    // printf("%f\n", meal_cost);
    
    float finalprize = (meal_cost + tip + tax);
    printf("%f", finalprize);

}
int main()
{
    float meal_cost;
    float tip_percent;
    float tax_percent;
    scanf("%f", &meal_cost);
    scanf("%f", &tip_percent);
    scanf("%f", &tax_percent);
    solve(meal_cost, tax_percent, tip_percent);
    return 0;
}