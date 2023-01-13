/*
Write a Program which accept one Number from user and toggle contents of first and last nibble of the number.return modified number(Nibble is Group of 4 bits)

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0X00000F;  //Static Mask Formation

    iResult=iNo ^ iMask;
    return iResult;
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    iRet=ToggleBit(iValue);
    printf("Modified Number:%d\n",iRet);
    return  0;

}