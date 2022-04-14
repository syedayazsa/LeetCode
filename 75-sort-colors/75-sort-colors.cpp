class Solution {
public:
    void sortColors(vector<int>& v) {
        int c0,c1,c2,i,j,k;
        c0=c1=c2=0;
        
        for(auto x : v){
            if(x == 0) c0++;
            if(x == 1) c1++;
            else c2++;
        }
        
        for(i = 0; i < c0; i++) v[i] = 0;
        for(j = c0; j < c0 + c1; j++) v[j] = 1;
        for(k = c1+c0; k < v.size(); k++) v[k] = 2;
    }
};