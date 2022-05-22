// Accept  number from user and display its factors

// Input :          10
// Output :         1   2   5

// Input :          9
// Output :         1   3

// Input :          17
// Output :         1

// Input :          20
// Output :         1   2   4   5   10

// Input :          -20
// Output :         1   2   4   5   10

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}