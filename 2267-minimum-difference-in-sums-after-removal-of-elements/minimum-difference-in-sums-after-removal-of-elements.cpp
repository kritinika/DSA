class Solution {
public:
#define ll long long
#define pb push_back
#define vi vector<ll> 
#define vvi vector<vi>
#define umi unordered_map<int,int>
#define usi unordered_set<int> 
#define all(x) x.begin(),x.end()
#define pr(x) cout << x << endl
#define fr(i, n) for (long long i = 0; i < (n); i++)
    long long minimumDifference(vector<int>& a) {
        int n3 = a.size();
        int n = n3/3;
        vector<ll>ans(n+1,0); // n-1 to 2n-1 
        ll val=0;
        multiset<int>sete;
        for(int i=0;i<n;i++){
            val+=a[i];
            sete.insert(a[i]);
        }
        ans[0]=val;
        ll maxi = *(--sete.end());
        for(int i=n;i<2*n;i++){
            ll op = a[i];
            if(op<maxi){
                val+=op;
                val-=maxi;
                sete.erase(sete.find(maxi));
                sete.insert(op);
                maxi=*(--sete.end());
            }
            ans[i-n+1]=val;
        }
        sete.clear();
        val=0;
        vi ans1(n+1,0); // 2n nunchi n
        for(int i=2*n;i<3*n;i++){
            val+=a[i];
            sete.insert(a[i]);
        }
        ans1[0]=val;
        maxi=*sete.begin();
        for(int i=2*n-1;i>=n;i--){
            ll op=a[i];
            if(op>maxi){
                val+=op;
                val-=maxi;
                sete.erase(sete.find(maxi));
                sete.insert(op);
                maxi=*sete.begin();
            }
            ans1[2*n-1-i+1]=val;
        }
        // n-1->n
        // n->n+1
        // 2*n-1->2*n
        ll req=LLONG_MAX;
        for(int i=0;i<=n;i++){
            req=min(req,(ll)(ans[i]-ans1[n-i]));
        }
        return req;
    }
};
