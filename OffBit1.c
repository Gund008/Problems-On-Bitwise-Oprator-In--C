/*
Write a Program which accept one number from user and off 7th bit off that number if its on.Return modified Number.

Input:79
Output:15
*/
#include<stdio.h>

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
   UINT iMask=0XFFFFFFBF;
   UINT iAns=0;

   iAns=iNo & iMask;
   return iAns;
   
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    iRet=OffBit(iValue);
    printf("Modified Number:%d\n",iRet);

    return 0;
}


