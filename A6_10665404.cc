#include <iostream>
#include <conio.h>


using namespace std;

int main()
{

    int i, j, arr[50], search, first, last, middle;
    cout <<"Enter total number of elements: ";
    cin >> i;
    cout << "Enter " << i << " numbers: ";

    for(j = 0; j < i; j++)
    {
    cin >> arr[j];
    }
    cout << "Enter number to find: ";
    cin >> search;
    first = 0;
    last = i - 1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle] < search)
        {
        first = middle + 1;
        }
        else if(arr[middle] == search)
        {
        cout << search << " found at location " << middle + 1 << "\n";
        break;
        }
        else
        {
         last = middle - 1;
        }
        middle = (first + last)/2;

    }
    if(first > last)
    {
    cout << "Not found! " << search << " is not present in the list.";
    }


    return 0;
}