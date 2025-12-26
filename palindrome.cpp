//Given an integer x, return true if x is a palindrome, and false otherwise.

 

//Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }    
        long int rev=0;
        int num=x;
        while(num!=0){
            rev = rev*10 + num%10;
            num/=10;
        }   
        return rev == x; 
    }
};