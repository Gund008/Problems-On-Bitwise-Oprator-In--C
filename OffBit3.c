/*
Write a Program which accept one Number and Position from user and Off that bit.Return Modified Number.

Input:10  2
Output: 8

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,int iPos)
{
    UINT iMask=0X00000001;
    UINT iResult=0;

    if((iPos<1)||(iPos>32))
    {
        printf("Invalid Postion of Bits:\n");
        return -1;
    }

    iMask =iMask<<(iPos-1);
    iMask=~iMask;
    iResult=iNo & iMask;
    return iResult; 
}
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iPos=0;
    UINT iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Please Enter the Position:\n");
    scanf("%d",&iPos);

    iRet=OffBit(iValue,iPos);

    printf("Modified Number is:%d\n",iRet);

    return  0;

}