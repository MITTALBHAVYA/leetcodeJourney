class Solution {
public:
    int numTilings(int n) {
        int first=0,second=1,third=1,mod=1000000007;
        int next;
        while(--n){
            next=((third*2)%mod + first)%mod;
            first=second;
            second=third;
            third=next;
        }
        return third;
    }
};