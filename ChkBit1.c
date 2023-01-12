//Write a Program which Check Whether is 15 bit is On or Off.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0X00004000;
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
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    printf("Please Enter the Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==TRUE)
    {
        printf("15th bits are On");
    }
    else
    {
        printf("15th bits are Off");
    }
    return 0;
}
