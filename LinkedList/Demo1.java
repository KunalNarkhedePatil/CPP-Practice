import java.util.Scanner;

class Practice
{
   public int OddAddition(int iNo)
   {
       int sum=0;
       for(int i=1;i<=iNo;i=i+2)
       {
         sum=sum+i;
       }
       return sum;
   }
   public int EvenAddition(int iNo)
   {
     int sum=0;
      for(int i=2;i<=iNo;i=i+2)
      {
         sum=sum+i;
      }
      return sum;

   }
   public boolean checkPrime(int iNo)
   {
      int flag=0;

      for(int i=2;i<=iNo;i++)
      {
          if(iNo%i==0)
          {
             flag=1;
             break;
          }
      }
      if(flag==0)
      {
         return false;
      }
      else
      {
         return true;
      }
   }
   public int PrimeAddition(int iNo)
   {
     int sum=2;
     for(int i=3;i<=iNo;i=i+2)
     {
        if(checkPrime(i))
        {
            sum=sum+i;
        }
     }
     return sum;
   }
}
class Demo1
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number");;
        int iNo=sobj.nextInt();

        Practice pobj=new Practice();
        System.out.println("Odd->"+pobj.OddAddition((iNo)));
        System.out.println("Even->"+pobj.EvenAddition((iNo)));
        System.out.println("Prime->"+pobj.PrimeAddition((iNo)));
    }
}