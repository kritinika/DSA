class Solution {
public:
    bool isPowerOfFour(int n){
        if(n==1)return 1;
        double num =(double)n;
        while(num>4){
            num/=4;
        }

       return num==4; 
    }
};