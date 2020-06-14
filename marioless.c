#include<stdio.h>
#include<cs50.h>

int get_valid_height(string prompt);

int main(void)
{
    //Declaring variables
    int i;
    int j;
    int k;
    
//Getting the height from user
    int h = get_valid_height("Height: ");
    //This loop is to iterate through the rows
    for (i = 1; i <= h; i++)
    {
        //This loop is to print the spacing so that we can shift our # and make it a left triangle
        //we use the counter as h-i-1 because C counts from 0 so with h-i it was still printing 8 dots
        //for a height of 8 when it should be printing 7 because it counts form 0
        for (k = h - i - 1; k >= 0; k = k - 1)
        {
            printf(" ");
            
        }
        
        //This loop is to print the # in the corresponding rows
        for (j = 1; j <= i; j++)
        {

            printf("#");
            
        }
        printf("\n");
    }
    
    
}


//Prompt user till he enters Valid height
int get_valid_height(string prompt)
{
    int ht;
    do
    {
        ht = get_int("%s", prompt);
    }
    while (ht < 1 || ht > 8);
    return ht;
    

}
