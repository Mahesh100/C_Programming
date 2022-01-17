//Data Types in c 

//int float char

#include<stdio.h>

int main(){

    int a= 7; // 2 to 4 byte depending on artichature
    float b=8.0;  //4 byte
    char c ='t'; //char is  1 byte

unsigned short  integer =8;

    printf("%d",a );  //%d is used to print int datatypes

    printf("This is float", "%f",b);  //%f is used to print float datatypes

   
    printf("hello %c\n",c); //%c is used to print char datatypes

    printf("The size taken by int is %d\n", sizeof(int));


    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));

    printf("The size taken by float is %d\n", sizeof(float));

    printf("The size taken by double is %d\n", sizeof(double));

    printf("The size taken by long double is %d\n", sizeof(long double));

    printf("The size taken by char is %d\n", sizeof(char));

    printf("The size taken by unsigned char is %d\n", sizeof(unsigned char));

   
    printf("The size taken by short int is %d\n", sizeof(short int));

    
}
