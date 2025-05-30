


# include<stdio.h>
# define ERR_INVAILD_AGE -1 

int  CalculateTicket(int iAge)
{
    if(iAge < 0)
    {
        return ERR_INVAILD_AGE;
    }
    else if((iAge >= 0) && (iAge <= 5 ))
    {
        return 0;
    }
    else if((iAge > 5) && (iAge <= 18 ))
    {
        return 700;
    }
    else if((iAge > 18) && (iAge <= 50 ))
    {
        return 999;
    }
    else if (iAge >50) 
    {
        return 500;
    }
  
}

int main()
{
    int iAge = 0 ;
    int iAns = 0 ;

    printf("Enter your Age : \n");
    scanf("%d",&iAge);
    iAns = CalculateTicket(iAge);
    printf("Your Ticket prize : %d\n",iAns);


    return 0;

}