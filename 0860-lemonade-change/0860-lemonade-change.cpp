class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool pop=true;
        int fives=0,tens=0;
        for(auto i:bills){
            if(i==5){
                fives++;
            }
            else if(i==10){
                if(fives!=0){
                    fives--;
                    tens++;
                }
                else{
                    pop=false;
                    break;
                }
            }
            else{
                if(tens!=0 && fives!=0){
                    tens--;
                    fives--;
                }
                else if(tens==0 && fives>=3){
                    fives-=3;
                }
                else{
                    pop=false;
                    break;
                }
            }
        }
        return pop;
    }
};