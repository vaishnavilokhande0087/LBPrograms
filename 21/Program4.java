class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println("Total Factors = " + iCount);
    }
}

class Program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}