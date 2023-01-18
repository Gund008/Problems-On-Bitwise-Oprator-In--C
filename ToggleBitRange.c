/*
Write a Program which accept one number from user and range of Position from user.toggle all bit from that Range.

Input:897  9  13
Toggle all bits from position 9 to 13 of Input number is 879

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,UINT iStart,UINT iEnd)
{
    UINT iMask1=0XFFFFFFFF,iMask2=0XFFFFFFFF,iMask=0,iResult=0;

    iMask1=iMask1<<(iStart-1); 
    iMask2=iMask2>>(32-iEnd);

    iMask=iMask1 & iMask2;

    iResult=iNo ^ iMask;
    return iResult;
}
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT i=0,j=0;
    UINT iRet=0;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    printf("Enter the Starting Bit of Position:\n");
    scanf("%d",&i);

    printf("Enter the Ending Bit of Position:\n");
    scanf("%d",&j);

    iRet=ToggleBitRange(iValue,i,j);
    printf("Modified Number:%d\n",iRet);

    return  0;

}