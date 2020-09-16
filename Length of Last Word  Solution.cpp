/*

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

If the last word does not exist, return 0.

Note: A word is defined as a maximal substring consisting of non-space characters only.

Example:

Input: "Hello World"
Output: 5


*/

#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLastWord(string str) {
       int count = 0; 
    bool flag = false; 
        
        //start travesal from the last
        //check for thr characterse in the string  and if char is encountere turn flag to true 
        //and increase the count and then go to next character oft last word 
        //if we encounter any space we can turn flag to false or 
        //return the value or flag == true from previous count
        
    for (int i = str.length() - 1; i >= 0; i--) { 
        
            if((str[i]>='a' and str[i]<='z') or (str[i]>='A' and str[i]<='Z')){

                flag= true;
                count++;
            }
        
            else{
                if(flag==true){
                    return count;
                }

            }

        } 
       
        return count;
    }
};
