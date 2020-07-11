#include <iostream>
using namespace std;

int binarySearch(int nums[], int low, int high, int num)
{
    // recursive implementation: base case
    if (low > high)
        return -1;
    // get middle index
    int middle = low + (high - low) / 2;
    //if middle item is the number we are looking for then
    if (nums[middle] == num)
        return middle;
    //check left sub-array recursively
    if (num < nums[middle])
    {
        return binarySearch(nums, low, middle - 1, num);
        // check right sub-array recursively
    }
    else
    {
        return binarySearch(nums, middle + 1, high, num);
    }
}

int main()
{
    // the array in which we search
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 10, 15, 20, 25, 30, 35, 40, 50, 60, 70, 80, 90, 100};
    //number we are looking for
    int num = 50;
    //the size of the array
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Index of number " << num << " is: " << binarySearch(nums, 0, n - 1, num) << endl;

    return 0;
}