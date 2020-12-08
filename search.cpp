#include <stdio.h>

void InputNumber(void);
bool Search(void);

const int N = 20;
int listNumbers[N] = {8, 9, 11, 15, 23, 42, 53, 54, 64, 66, 67, 68, 69, 70, 82, 83, 84, 90, 91, 100};

bool loop = true;

char typedNumber;


int main()
{
    do
    {
        InputNumber();
        loop = Search();

    }while(loop);

    return 0;
}

void InputNumber(void)
{
    printf("\nType a number between 1 and 100 \n>>> ");
    scanf("%d", &typedNumber);
}

bool Search(void)
{
    printf("Typed Number: %d\n", typedNumber);
    if(typedNumber == listNumbers[N/2])
    {
        printf("You won!");
        return false;
    }
    else
    {
        if(typedNumber > listNumbers[N/2])
        {
            printf(">type a lowest Number\n");
            return true;
        }
        else
        {
            printf(">type a highest number\n");
            return true;
        }
    }


}
