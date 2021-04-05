class Solution {
    public void reverseString(char[] s) {
        
    int l = 0;
    int r = s.length - 1;
        
    for(int i = 0; i<s.length; i++)
    {
        while(l<=r)
        {
            char temp = s[r];
            s[r] = s[l];
            s[l] = temp;
            l++;
            r--;
        }
    }
        
    }
}