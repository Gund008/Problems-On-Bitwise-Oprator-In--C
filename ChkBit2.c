//Write a Program which Checks Whether is  5th and 18th bit is On or Off.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0X00020010;
    UINT iResult=0;

    iResult=iNo & iMask;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    
    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    
    if(bRet==TRUE)
    {
        printf("7th and 18th bits are On:");
    }
    else
    {
        printf("7th and 18th bits are Off");
    }
    return 0;
}

