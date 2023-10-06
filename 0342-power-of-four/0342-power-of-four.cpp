class Solution {
public:
float logbase(int a,int b){
    return log(a)/log(b);
}
    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }
        float x=logbase(n,4);
        if(floor(x)==x)return true;
        return false;
    }
};