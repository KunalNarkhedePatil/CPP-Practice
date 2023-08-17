
import java.util.Scanner;

public class Demo1 {
    public static void main(String[] args) {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo=sobj.nextInt();

        System.out.println("Number is "+iNo);

        //12345 ->5
        //5678435->7

        //iNo=12345
            //iNo=1234
            //iNo=123
            //iNo=12
            //iNo=1
            //iNo=0
            int iDigit=0;
        while(iNo!=0)
        {
           iDigit=iNo%10;
           if(iDigit%2==0)
           {
               System.out.println(iDigit);
           }
           iNo=iNo/10;   //12345/10=1234
                         //1234/10=123
                         //123/10=12
                         //12/10=1
                         //1/10=0
        }

    }
}
 printEvenDigit {
    
}
