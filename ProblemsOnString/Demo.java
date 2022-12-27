//import java.util.Scanner;

class natural{

   
        //int sum1 =0,sum2=0,n=15;
        // System.out.println("enter the number");
         public static void main (String args[]){
            int sum1 =0,sum2=0,num=15;
            //System.out.println("enter the number");
            //Scanner sc =  new Scanner(System.in);
            //int n = sc.nextInt();

            
          for(int i=1;i<=15;i++)
         {
            if(i%2==0)
            {
               sum1=sum1+i;
               System.out.println("sum of even " +sum1);
            }
            else
            {
               sum2=sum2+i;  
               System.out.println("sum of  odd:" +sum2);
        
            }
         
                      // System.out.println("sum of even " +sum1);
           // System.out.println("sum of  odd:" +sum2);
        }
    }
}