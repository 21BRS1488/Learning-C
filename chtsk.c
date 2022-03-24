//Type conversion
//User-defined functions
#include <stdio.h>
void conversion_implicit();
void conversion_int_float();
void conversion_float_int();
void main()
{
        int option;
        printf("Choose option number\n1.Implicit conversion\n2.Explicit conversion from int to float\n3.Explicit conversion from float to int\n");
        scanf("%d",&option);
        switch(option)
    {
        case 1:
            conversion_implicit();
            break;

        case 2:
                conversion_int_float();
                break;
        case 3:
                conversion_float_int();
                break;
        }
}
void conversion_implicit()
{
    int x = 25;    
    char y = 'a';  
    // y implicitly converted to int. ASCII
    x = x + y;
   
    // x is implicitly converted to float
    float z = x + 5.0;
    printf("x = %d, z = %f", x, z);
}

void conversion_int_float()
{
    int x = 5;
    //x explicity converted from int to float - Promotion
    float sum = (float)x + 1;
    printf("sum = %f", sum);
}
void conversion_float_int()
{
    float x = 3.2;
    //x explicitly converted from float to int - Demotion
    float sum = (int)x + 1;
    printf("sum = %f", sum);
}


// Perform arithmetic operations for char, int and float datatypes in implicit and explicit modes
// Check whether the given number is a perfect modulo for the mentioned n value
// using user defined function and implicit or explicit type conversion options
// mod 26 :
// ex1 : 52 mod 26 = 0 ==> 52 is a perfect modulo of 26.
// ex2 : 53 mod 26 = 1 ==> 53 is not a perfect modulo of 26. 