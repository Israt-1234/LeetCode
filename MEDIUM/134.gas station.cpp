class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalgas = 0, totalcost = 0;
        for(int i =0; i<n; i++){
         totalgas+=gas[i];
         totalcost+=cost[i];
        }
        if(totalgas<totalcost)
        return -1;
        int start = 0;
        int total = 0;
        for(int i =0; i<n; i++){
            total += gas[i] - cost[i];
            if(total<0){
                total = 0;
                start = i+1;
            }
        }
        return start;
    }
};
