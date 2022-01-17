#include <stdio.h>

int main(){

    

    printf("The decsion making in C \n");
int age;
    printf("Enter your age:-");

     scanf("%d", &age);

    
/*
    if(age<18){
       printf("You not allowed to  drive a car as per the rule by RTO \n");
    }
    else {
        printf("Congurlation ! You are allowed to drive the car");
    }  */

    if(age<18){
        printf("You can drive");
    }

    else if(age>=18 && age<=24){
        printf("You are restricted to drive ");
    }else{
        printf("Its temperorly");
    }

    return 0;
}