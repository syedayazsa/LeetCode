class Solution:
    def myPow(self, x: float, n: int) -> float:
        
        return self.pow(x, n)
        
    def pow(self, x, n):
                
        if n == 0:
            return 1
        
        if n%2 == 0:
            ans = self.pow(x, abs(n)/2)
            ans *= ans
        else:
            ans = self.pow(x, (abs(n)-1)/2)
            ans = x*ans*ans
            
        return ans if n > 0 else 1/ans
    
    
    