/*
Write a Program which accept One Number and Position from user and toggle that bit.Return modified number.
Input:10  3
Output:14

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos)
{
    UINT iMask=0X00000001;
    UINT iResult=0;
    
    if((iPos<1)||(iPos>32))
    {
        printf("Invalid Position:\n");
        return -1;
    }
    iMask=iMask<<(iPos-1); //Dynamic Mask Formation
    iResult=iNo ^ iMask;
    return iResult;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue=0;
    UINT iPos=0;
    UINT iRet=0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    printf("Please Enter the Position:\n");
    scanf("%d",&iPos);
    
    iRet=ToggleBit(iValue,iPos);
    printf("Modified Number:%d\n",iRet);

    return  0;

}