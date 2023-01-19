//Write a Program which Checks Whether is  7th and 15th & 21st,28th bit is On or Off.
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0X08104040;
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
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;

    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==TRUE)
    {
        printf("Bits is On");
    }
    else
    {
        printf("Bits is Off");
    }
    return 0;
}
