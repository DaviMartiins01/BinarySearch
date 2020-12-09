#include <stdio.h>

void InputNumber(void);
void PrintStepsSearch(void);
bool Search(void);
bool StopSearch(void);

const int N = 20;

int listNumbers[N] = {8, 9, 11, 15, 23, 42, 53, 54, 64, 66, 67, 68, 69, 70, 82, 83, 84, 90, 91, 100};
int beginList = 0;
int finalList = N;
int middle;

int ExitNumber = 0;

char typedNumber;


int main()
{
    InputNumber();
    do
    {
        PrintStepsSearch();

    }while(Search());

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
        printf("Found");
        return false;
    }
    else
    {
        if(StopSearch())
        {
            printf("Not Found");
            return false;
        }
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

void PrintStepsSearch(void)
{
    for(int i = beginList; i < finalList; i++)
    {
        printf("%d ", listNumbers[i]);
    }

    printf("\n");
}

bool StopSearch(void)
{
    if(ExitNumber == middle)
    {
        return true;
    }
    else
    {
        ExitNumber = middle;
        return false;
    }
}
