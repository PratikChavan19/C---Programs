// Program to display 5 times Hello on screen

#include<stdio.h>

// Demonstration of  ITERATION

void Display(int iNo)              // Definition
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //       1              2           3
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("Hello\n");          // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);                  // Function call

    return 0;
}