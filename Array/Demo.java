import java.util.*;
class Practice
{
   public int SumOfEven(int iNo)
   {
      int iSum=0; //iNo=10
      for(int i=1;i<=iNo;i++)  //i=1,2,3,4,5,6,7,8,9,10
      {
          if(i%2==0)
          {
             iSum=iSum+i;  //iSum=0+2+4+6+8+10
          }
      }
      return iSum;
   }

}
class Demo
{
    public static void main(String[] args) {

        int iRet=0;

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo=sobj.nextInt();

        Practice pobj=new Practice();

        iRet=pobj.SumOfEven(iNo);

        System.out.println("Sum of even is "+iRet);







    }
}