class Logic
{
    void checkPalindrome(int num)
    {
        int iOrg = num;
        int iRev = 0;
        int iDigit = 0;

        while(num > 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }

        if(iOrg == iRev)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not a Palindrome Number");
        }
    }
}

class Program2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}