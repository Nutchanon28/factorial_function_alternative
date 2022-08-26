// จงเขียนฟังก์ชั่น factorial (Level 3)

#include <stdio.h>

int factorial(int number){
    if (number == 0)
    {
        return 1;
    }
    
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    return result;  
}

int main()
{
    return 0;
}