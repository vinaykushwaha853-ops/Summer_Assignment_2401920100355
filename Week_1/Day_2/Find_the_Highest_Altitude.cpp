class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur =0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            cur =cur +gain[i];
            if(maxi<cur) maxi=cur;
        }
        return maxi;
    }
};
