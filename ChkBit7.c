/*
Write a Program whcich accept one Numbers from user and Check whether 9th or 12th bit is on or off.

Input:257
Output:TRUE
1 0 0 1 1 0 0 0 0 0 0 0
^
1 0 0 1 0 0 0 0 0 0 0 0

0 0 0 0 1 0 0 0 0 0 0 0



*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;  //0X00000052;
    UINT iMask2 = 0X00000800;  
    UINT iResult1 = 0;
    UINT iResult2 = 0;
   
    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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