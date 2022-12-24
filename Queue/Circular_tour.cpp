#include<iostream>
using namespace std;
 
// A petrol pump has petrol and distance to next petrol pump
class petrolPump
{
    public:
    int petrol;
    int distance;
};
 
// The function returns starting point if there is a possible solution,
// otherwise returns -1
void printTour(petrolPump arr[], int n)
{
    // Consider first petrol pump as a starting point
    int Front = 0;
    int Rare = 0;
    int Start=0;
    int curr_petrol=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        curr_petrol=curr_petrol+ arr[i].petrol - arr[i].distance;
       
        if(curr_petrol>=0)
        {
           Rare=Rare+1%n;
        }
        else
        {
            Front=Rare+1;
            Start=Front;
            Rare=Front;
        }
        if(Front==Rare)
        {
            cout<<Start<<endl;
            break;
        }
    }
    
 
}
 
// Driver code
int main()
{
    //petrolPump arr[] = {{4,6},{6,5},{7,3},{4,5}};
   // petrolPump arr[] = {{6,5},{7,6},{4,7},{10,8},{6,6},{5,4}};
    petrolPump arr[] = {{6,4},{3,6},{7,3}};

 
    int n = sizeof(arr)/sizeof(arr[0]);
    printTour(arr, n);
 
   
 
    return 0;
}
 
 