#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int target, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Number Of Elements: ";
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    cout << "Element to search: ";
    int target;
    cin >> target;
    int ans = binarySearch(array,target,n);
    if(ans==-1)cout<<"Not Found"<<endl;
    else cout<<"Position: "<<ans+1<<endl;
}