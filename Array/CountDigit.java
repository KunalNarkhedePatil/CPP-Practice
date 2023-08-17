

import java.util.Scanner;

public class CountDigit {
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
       int iCnt=0;
        while(iNo!=0)
        {
            iCnt++;    //iCnt=0,1,2,3,4,5
           iNo=iNo/10;   //12345/10=1234
                         //1234/10=123
                         //123/10=12
                         //12/10=1
                         //1/10=0
        }
        System.out.println("Number of digit in the given number is "+iCnt);

    }
}
