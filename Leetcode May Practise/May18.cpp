class Solution {
public:
   bool checkInclusion(string s1, string s2) {
        
        if( s2.length() < s1.length() )   
          return false ;
        vector len1(26,0);
        vector len2(26,0);    
        
        for(int i=0 ; i<s1.size() ; i++)
          len1[s1[i] - 'a']++;
        
        for(int i = 0; i < s2.size(); i++) {  
            len2[s2[i] - 'a']++;
          if(i >= s1.size())
             len2[s2[i - s1.size()] - 'a']--;
          if(len1==len2)
            return true;
            
          
        }
        return false;
    }
};
