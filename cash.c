#include<stdio.h>
#include<math.h>
#include<cs50.h>
//math.h for round

//pre Declaring the function to avoid implicit error
float get_positive_number(string prompt);

int main(void)
{
    //Declaring Variable
    float change;
    //This will be our counter of number of coins used
    int coins = 0;
    //Getting input in dollars
    change = get_positive_number("Change owed: ");
    //Converting them to cents
    int cents = round(change * 100);
    
    //while is compulsory , if not used it will always give output 1
    while (cents != 0)
    {
        
        //Applying if else if
        if (cents >= 25)
        {
            cents = cents - 25;
            coins++;
            
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents = cents - 5;
            coins++;
        
        }
        else if (cents >= 1)
        {
            cents = cents - 1;
            coins++;
        
        }
    }
    //printing the output
    printf("%i\n", coins);
}

//making function for positive integer only!
float get_positive_number(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    while (n <= 0);
    return n;
}

