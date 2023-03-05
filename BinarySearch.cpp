//------------------- Binary Search ------------------
#include<iostream>
using namespace std;

int main()
{
       // Location:  1   2   3   4   5   6  7   8  9 10 11 12 13 14 15 16 17 18
    int data[20] = {10, 15, 18, 25, 30, 33, 40,45,50,55,60,64,66,68,69,70,75,78};
    int item, first, last, mid, lb = 0, ub = 18;

    first = lb, last = ub;
    mid = (first + last) / 2;

    cout<<"Enter the Item Value = ";
    cin>>item;

    while((data[mid] != item) && (first <= last))
    {
        if(item < data[mid])
            last = mid - 1;

        else
            first = mid + 1;

        mid = (first + last) / 2;
    }

    if(data[mid] == item)
        cout<<"Item Found and Location is = "<<mid+1;

    else
        cout<<"Item not Found\n";

    return 0;
}
