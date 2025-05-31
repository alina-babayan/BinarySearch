#include <iostream>

int MyBinarySearch(int arr[],int target, int l, int r)
{
    if(l > r) return -1;
    int mid = l + (r-l)/2;
    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid]  < target)
    {
        return MyBinarySearch(arr,target,mid + 1,r);
    }
    else
    {
        return MyBinarySearch(arr,target,l,mid - 1);

    }
}

int main()
{
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int t = 4;
    int it = MyBinarySearch(arr,t,0,n-1);
   if(it != -1 )
   {
    std::cout<< t <<std::endl;
   }
   
    return 0;
}
