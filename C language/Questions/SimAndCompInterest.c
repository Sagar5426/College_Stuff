// Q2. Find simple Interest or Compound Interest as per user want

#include <stdio.h>
#include <math.h>

double simpleInterest(double principle, double rate, double time){
    double total = (principle*rate*time)/100;
    return total;
}

double compoundInterest(double principle, double rate, double time){
    double amount = principle * pow(1+rate/100 , time);
    double compoundInterest = amount - principle;
    return compoundInterest;
}

void main(){
    double principle, rate, time;
    char choice;
    
    printf("Choose simpleInterest Or compoundInterest: s or c: ");
    scanf("%c",&choice);

    printf("Enter priciple: ");
    scanf("%lf",&principle);

    printf("Enter rate: ");
    scanf("%lf",&rate);

    printf("Enter time: ");
    scanf("%lf",&time);

    if(choice =='s'){
        printf("Simple Interest: %lf",simpleInterest(principle,rate,time));
    }else if(choice=='c'){
        printf("Compound Interest: %lf", compoundInterest(principle,rate,time));
    }else{
        printf("Invalid Input");
    }
}