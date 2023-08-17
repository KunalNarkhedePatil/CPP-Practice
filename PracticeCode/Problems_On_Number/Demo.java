import java.util.*;
class Test
{
    //for loop
    public void Display(int iNo)
    {
       for(int i=1;i<=iNo;i++)
       {
          System.out.println(i);
       }
    }
    public void Display1(int iNo)
    {
       int i=1;
       while(i<=iNo)
       {
          System.out.println(i);
          i++;
       }
    }
    
}
class Demo
{
    public static void main(String[] args) 
    {
        int iNo=0;

        Scanner sc=new Scanner(System.in);
        Test tobj=new Test();

        System.out.println("Enter the number");
        iNo=sc.nextInt();

        
        //tobj.Display(iNo);
        tobj.Display1(iNo);

    }
}