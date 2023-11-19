class Solution {
public:
    void solve(int n,int k,vector<int>&set,vector<vector<int>>&superset){
        if(set.size()==k){
            superset.push_back(set);
            return;
        }
        if(n==0){
            return;
        }
        set.push_back(n);
        solve(n-1,k,set,superset);
        set.pop_back();
        solve(n-1,k,set,superset);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>set;
        vector<vector<int>>superset;
        solve(n,k,set,superset);
        return superset;
    }
};