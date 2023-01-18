/*
Write a Program which accept two numbers from user and display Position of common ON bits from that two numbers.
Input:10  15  (1010  1111)
Output:2   4
*/

#include<stdio.h>

typedef unsigned int UINT;

void CommonBit(UINT iNo1,UINT iNo2)
{
    UINT iDigit1=0;
    UINT iDigit2=0;
    UINT iCnt1=0,iCnt2=0;
    
      while(iNo1!=0)
        {
            iDigit1=iNo1 % 2;
            iDigit2=iNo2 % 2;
            if(iDigit1==1)
            {
               iCnt1++;
            }
           iNo1=iNo1 / 2;
        }
       while(iNo2!=0)
       {
           iDigit2=iNo2 % 2;
           if(iDigit2==1)
           {
              iCnt2++;
           }
          iNo2=iNo2 / 2;
       }
       printf("%d",iCnt1);
       printf("%d",iCnt2);
}
    
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    UINT iValue1=0,iValue2=0;
    UINT iRet=0;

    printf("Please Enter the First Number:\n");
    scanf("%d",&iValue1);
    
    printf("Please Enter the Second Number:\n");
    scanf("%d",&iValue2);

    CommonBit(iValue1,iValue2);
  
    return  0;

}