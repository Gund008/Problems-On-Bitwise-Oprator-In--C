/*
Write a Program which accept one number from user and toggle 7th  bit off that number.Return modified Number.

Input:137
Output:201
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0X00000040;
    UINT iAns=0;

    iAns= iNo ^ iMask;
    return iAns;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=ToggleBit(iValue);

    printf("Modified Number:%d\n",iRet);

    return 0;
}

