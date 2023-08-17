import java.util.*;
class Demo
{
    public int size;
    public int Arr[];
    public int Brr[];
    public Demo(int iSize)
    {
       this.size=iSize;
       Arr=new int[this.size];
       Brr=new int[this.size];
    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the element in the array");
        System.out.println("Plase enter only 0,1 and 2 element in the array");
        for(int i=0;i<size;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        
    }
    public void SortZeroOneTwo()
    {
        int ZeroCnt=0;
        int OneCnt=0;
        int TwoCnt=0;

        for(int i=0;i<size;i++)
        {
            if(Arr[i]==0)
            {
                ZeroCnt=ZeroCnt+1;
            }
            else if(Arr[i]==1)
            {
                OneCnt=OneCnt+1;
            }
            else
            {
                TwoCnt=TwoCnt+1;
            }
        }

        int i=0;
        int j=ZeroCnt;
        int k=ZeroCnt+OneCnt;

        for(int p=0;p<size;p++)
        {
            if(Arr[p]==0)
            {
                Brr[i]=Arr[p];
                i++;
            }
            else if(Arr[p]==1)
            {
                Brr[j]=Arr[p];
                j++;
            }
            else
            {
                
                Brr[k]=Arr[p];
                k++;
            }
        }
        for(i=0;i<size;i++)
        {
            Arr[i]=Brr[i];
            System.out.print(Arr[i]+" ");
        }
    }
}
class Program2
{
    public static void main(String[] args) {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number of element in the array");
        int iSize=sobj.nextInt();
        
        Demo dobj=new Demo(iSize);
        dobj.Accept();
        System.out.println("After Sorting elements are");
        dobj.SortZeroOneTwo();
        
    }
}