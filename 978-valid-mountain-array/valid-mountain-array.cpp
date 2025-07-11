class Solution {
public:
    bool validMountainArray(vector<int>& arr){
        if(arr.size()<=2||arr[0]>arr[1])return false;
        int i =1;
        while(i<arr.size()-1&&arr[i]>arr[i-1])i++;
         while(i<arr.size()&&arr[i]<arr[i-1])i++;

      
        return i==arr.size();
        
    }
};