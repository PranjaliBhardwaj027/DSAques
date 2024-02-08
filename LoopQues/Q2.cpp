/*A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.

 */
class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v;
        int temp = num;
          int count =1;
          while(count<temp){
              if(temp%count ==0){
                   v.push_back(count);
                  count++;
                //  v.push_back(count);
              }
              else{
                  count++;
              }
          }
        int sum =0;
        for(int i =0; i<v.size(); i++){
            sum = sum+v[i];
        }
        if(sum==num )return true;
        return false;
        
    }
};
