//Write a Program which Checks Whether is  7th and 8th and 9th bit is On or Off.

typedef int BOOL
typedef unsigned int UINT

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask=0X000001C0;
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
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);
    if(bRet==TRUE)
    {
        printf("");
    }
    else
    {
        printf("");
    }
    return 0;
}

