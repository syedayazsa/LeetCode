class Solution {
public: 
    
    double pow(double x, int n){
        
        if(n==0) return 1;
        
        double temp;
        
        if(n%2 == 0){
                temp = pow(x, abs(n/2));
                temp = temp*temp;
            }
            else{
                temp = pow(x, (abs(n) - 1)/2);
                temp = x*temp*temp;
            }
        if(n > 0) return temp;
        return 1/temp;
        }
    
    double myPow(double x, int n) {
        return pow(x,n);
    }
};