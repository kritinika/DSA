class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        n1.resize(m);n2.resize(n);
        for(auto it:n2)n1.push_back(it);
        sort(n1.begin(),n1.end());
    }
};