class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while(num > 0)
        {
            iDigit = num % 10;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits : " + iEvenSum);
        System.out.println("Sum of Odd Digits  : " + iOddSum);
    }
}

class Program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}