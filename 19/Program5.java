class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;

        for(int iCnt = 1; iCnt <= exp; iCnt++)
        {
            result = result * base;
        }

        System.out.println(result);
    }
}

class Program5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}