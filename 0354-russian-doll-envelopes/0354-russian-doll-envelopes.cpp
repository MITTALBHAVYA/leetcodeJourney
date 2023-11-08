class Solution {
public:
    // static bool compare(vector<int>&a ,vector<int>&b){
    //     return a[0]>b[0];
    // }
    static bool cmp(vector<int> &a, vector<int> &b) {
       return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),cmp);
        vector<int>vect;
        for(auto e : envelopes){
            if(vect.empty() || vect.back()<e[1]){vect.push_back(e[1]);}
            else{
                auto it =lower_bound(vect.begin(),vect.end(),e[1]);
                *it=e[1];
            }
        } 
        return vect.size();
    }
    
};