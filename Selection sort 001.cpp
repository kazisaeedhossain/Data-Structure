//-----------Selection Sort------------
#include<iostream>
using namespace std;

int main ()
{
    int a[] = {9,13,15,11,10};
    int i,j,min_index,temp;

    for(i=0;i<5;i++)
    {
        min_index = i;

        for(j=i+1;j<5;j++)//Inner loop
        {
            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }
        if( min_index != 5)
        {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
        cout<<" "<<a[i];
    }



    return 0;
}
