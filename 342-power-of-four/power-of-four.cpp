class Solution {
public:
    bool isPowerOfFour(int n){
        if(n==1)return 1;
        double num =(double)n;
        while(num>=4){
            if(num==4)return 1;
            num/=4;
        }

       return 0; 
    }
};