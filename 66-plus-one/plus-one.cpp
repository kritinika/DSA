class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>arr;int k=0;
        int i=digits.size()-1;
        while(i>=0&&digits[i]==9&&k==0){
            arr.push_back(0);i--;
        }
        if(i<0)arr.push_back(1);
        else arr.push_back(digits[i]+1);i--;
        while(i>=0)arr.push_back(digits[i--]);
        reverse(arr.begin(),arr.end());
        return arr;
    }
};