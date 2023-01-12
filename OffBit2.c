/*
Write a Program which accept one number from user and off 7th and 10th bit off that number .Return modified Number.

Input:577
Output:1
*/

#include<stdio.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
   UINT iMask=0XFFFFFDBF;
   UINT iAns=0;

   iAns=iNo & iMask;
   return iAns;
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    iRet=OffBit(iValue);
    printf("Modified Number is:%d\n",iRet);
    
    return 0;
}


