"// Found bitonic point in array using C++" 
//Given an array of integers arr[] that is first strictly increasing and then maybe strictly decreasing, find the bitonic point, that is the maximum element in the array.
//Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing.

//Note: It is guaranteed that the array contains exactly one bitonic point.

//Examples:

//Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
//Output: 8


// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        for (int i=1;i<arr.size();i++){
            if ((arr[i-1]<arr[i]) and (arr[i]>arr[i+1])){
                return arr[i];
            }
        }
    }
};
