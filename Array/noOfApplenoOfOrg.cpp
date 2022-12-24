#include <iostream>
using namespace std;
int CalNoOfApple(int HouseStartInd, int HouseEndInd, int PosOfAppTree, int NoOfApple)
{
    int Count = 0;
    int iNum = 0;
    int X = 0;
    cout << "Enter the value for Apple\n";
    while (NoOfApple--)
    {
        cin >> iNum;
        int X = PosOfAppTree + iNum;
        if (X >= HouseStartInd && X <= HouseEndInd)
        {
            Count++;
        }
    }
    return Count;
}
int CalNoOfOrange(int HouseStartInd, int HouseEndInd, int PosOfOrangeTree, int NoOfOrange)
{

    int Count = 0;
    int iNum = 0;
    int X = 0;
    cout << "Enter the value for Orange\n";
    while (NoOfOrange--)
    {

        cin >> iNum;
        int X = PosOfOrangeTree - iNum;
        if (X >= HouseStartInd && X <= HouseEndInd)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int HouseStartInd = 0;
    int HouseEndInd = 0;
    int PosOfAppTree = 0;
    int PosOfOrangeTree = 0;
    int NoOfApple = 0;
    int NoOfOrange = 0;

    cout << "Enter the Starting and Ending Index of House\n";
    cin >> HouseStartInd >> HouseEndInd;

    cout << "Enter the Position of Apple and Orange Tree\n";
    cin >> PosOfAppTree >> PosOfOrangeTree;

    cout << "Enter the number of apple and orange\n";
    cin >> NoOfApple >> NoOfOrange;

    cout << "Number of Apple inside house " << CalNoOfApple(HouseStartInd, HouseEndInd, PosOfAppTree, NoOfApple);
    cout << endl;
    cout << "Number of Apple inside house " << CalNoOfOrange(HouseStartInd, HouseEndInd, PosOfOrangeTree, NoOfOrange);

    return 0;
}