class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= num / 2; iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println("Number is not prime");
                return;
            }
        }

        System.out.println("Number is prime");
    }
}

class Program1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}