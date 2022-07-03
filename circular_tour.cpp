class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cal=0,defi=0,start=0;
        for(int i=0;i<gas.size();i++){
            cal+=gas[i]-cost[i];
            if(cal<0){
                start=i+1;
                defi+=cal;
                cal=0;
            }
        }
        return (cal+defi)>=0?start:-1;
    }
};
