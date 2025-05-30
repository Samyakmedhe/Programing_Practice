


# include<stdio.h>
# define ERR_INVAILD_AGE -1 

int  CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        return ERR_INVAILD_AGE;
    }
    else if((iAge >= 0) && (iAge <= 5 ))
    {
        iPrice = 0;

    }
    else if((iAge > 5) && (iAge <= 18 ))
    {
        iPrice = 700;
    }
    else if((iAge > 18) && (iAge <= 50 ))
    {
        iPrice = 999;
    }
    else if (iAge >50) 
    {
        iPrice = 500;
    }
    return iPrice;
}

int main()
{
    int iAge = 0 ;
    int iAns = 0 ;

    printf("Enter your Age : \n");
    scanf("%d",&iAge);
    iAns = CalculateTicket(iAge);

    if (iAns == ERR_INVAILD_AGE)
    {
        print("Unable to Calculate the ticket prize as age in invaild...\n");
    }
    printf("Your Ticket prize : %d\n",iAns);
   

    return 0;

}