class Solution {
    public:
        vector<int> countBits(int n) {
        // here we apply the brute force solution.
    
      vector<int> ans;
    
    
      for(int i = 0; i<=n; i++){
    
       int count = 0;
       int temp  = i;
       while(temp>1){
        count += temp&1;
        temp = temp>>1;  //  this is equal to the i = i/2;
       }
    
       if(temp == 1) count++;
    
       ans.push_back(count);
    
    
      }  
    
      return ans;
    
    
        }
    };