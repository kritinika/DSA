class Solution {
public:
    bool validMountainArray(vector<int>& arr){
        int n=arr.size();
        if(n<=2||arr[0]>arr[1])return false;
        int i=0,j=n-1;
        while(i<n&&arr[i]<arr[i+1])i++;
        while(j>0&&arr[j-1]>arr[j])j--;
        return i>0&&i==j&&j<n-1;
        
    }
};