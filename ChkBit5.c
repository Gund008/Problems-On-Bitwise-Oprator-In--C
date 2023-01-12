/*
Write a Program which checks whether first and last bit and is On or OFF.first bit means bit number 1 and last bit means bit number 32.
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0X80000001;
    UINT iResult=0;

    iResult= iNo & iMask;

    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;

    printf("Please enter Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==TRUE)
    {
        printf("First and Last bits are ON");
    }
    else
    {
        printf("First and last bits are Off");
    }
    return 0;

}

