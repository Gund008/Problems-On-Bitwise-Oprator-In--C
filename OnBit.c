/*
Write a Program which accept one number from user and on its first 4 bits.Return modified number.

Input:73
Output:79
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask=0X0000000F;
    UINT iAns=0;

    iAns=iNo | iMask;
    return iAns;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    iRet=OnBit(iValue);
    printf("Modified Number:%d\n",iRet);
    return 0;
}


