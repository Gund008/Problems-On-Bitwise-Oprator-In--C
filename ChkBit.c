/*
Write a Program whcich accept one Numbers from user and Check whether 9th or 12th bit is on or off.

Input:257
Output:TRUE

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask=257;  //0X00000052;
    UINT iResult=0;
   
    iResult=iNo & iMask;

    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    bool bRet=false;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    
    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return  0;

}