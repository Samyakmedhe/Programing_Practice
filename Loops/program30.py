
def factorial(iNo):

    iFact = 1

    for i in range(1,iNo+1):
        iFact = iFact * i

    return iFact


def main():

    print("Enter number : ")
    iValue = int(input())

    iRet = factorial(iValue)
    print("factorial is : ",iRet)
if __name__ =="__main__":
    main()