class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int iEven = 0;
        int iOdd = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }

        System.out.println("Even Count = " + iEven);
        System.out.println("Odd Count = " + iOdd);
    }
}

class Program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}