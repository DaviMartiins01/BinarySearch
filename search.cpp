#include <stdio.h>

void InputNumber(void);
bool Search(void);

const int N = 20;

int listNumbers[N] = {8, 9, 11, 15, 23, 42, 53, 54, 64, 66, 67, 68, 69, 70, 82, 83, 84, 90, 91, 100};
int beginList = 0;
int finalList = N;
int middle;

bool loop = true;

char typedNumber;


int main()
{

    InputNumber();
    do
    {
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
    middle = (beginList + finalList)/2;

    if(typedNumber == listNumbers[middle])
    {
        printf("found");
        return false;
    }
    else
    {
        if(typedNumber > listNumbers[middle])
        {
            beginList = middle;
            return true;
        }
        else
        {
            finalList = middle;
            return true;
        }
    }


}
