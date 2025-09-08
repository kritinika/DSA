class Solution {
public:
bool check(int x){
    while(x>0){
        if(x%10==0)return 0;
        x/=10;
    
    }
    return 1;
}
    vector<int> getNoZeroIntegers(int n){
        int a,b;
        for(int i=1;i<n;i++){
            a=i;
            b=n-i;
            if(check(a)&&check(b))break;
        
        }

return {a,b};
        
    }
};