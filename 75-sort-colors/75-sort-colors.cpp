class Solution {
public:
    void sortColors(vector<int>& v) {
       int low, mid, high;
        low = mid = 0;
        high = v.size() - 1;
        
        while(mid <= high){
            switch(v[mid]){
                case 0:
                    swap(v[low++], v[mid++]);
                    break;
                
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(v[mid], v[high--]);
                    break;
            }
        }
        
    }
};


