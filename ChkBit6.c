/*
Write a Program which accept one number and Position from user and check whether bit at that position is on or off.if bit is one Return TRUE otherwise return FALSE.

Input-10 2
Output- TRUE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

bool CheckBit(UINT iNo,int iPos)
{
    UINT  iMask=0X00000001;
    UINT iResult=0;

    if((iPos<1)||(iPos>32))
    {
        printf("Invalid Position od Bits:\n");
        return FALSE;
    }

    //Dynamic Mask formation
    iMask=iMask<<(iPos-1);
    
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
    UINT iPos=0;
    bool bret=FALSE;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    printf("Please Enter the Position of Bits:\n");
    scanf("%d",&iPos);

    bret=CheckBit(iValue,iPos);
    
    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return  0;

}