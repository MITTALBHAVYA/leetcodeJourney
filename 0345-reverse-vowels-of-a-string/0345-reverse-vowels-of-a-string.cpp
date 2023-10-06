class Solution {
public:
    string reverseVowels(string s) {
        int low=0,high=s.length()-1; 
        while(low<=high)
        {
            while(tolower(s[low])!='a'&&tolower(s[low])!='e'&&tolower(s[low])!='i'&&tolower(s[low])!='o'&&tolower(s[low])!='u'&&low<high){
                low++;
            }
            while(tolower(s[high])!='a'&&tolower(s[high])!='e'&&tolower(s[high])!='i'&&tolower(s[high])!='o'&&tolower(s[high])!='u'&&low<high){
                high--;
            }
            cout<<low<<" "<<high<<endl;
            swap(s[low],s[high]);
            low++;
            high--;
            cout<<low<<" "<<high<<endl;
        }
        return s;
    }
};