class Solution {
public:
    bool canConstruct(string ransomnote, string magazine) {
        unordered_map<char,int> map;
        int len1 = ransomnote.length();
        int len2 = magazine.length();
        for(int i =0;i<len1;i++){
            map[ransomnote[i]]++;
        }
        for(int j = 0; j<len2;j++){
            map[magazine[j]]--;
        }
        for(int k = 0; k<len1;k++){     //verifying if one than 0 uncommon elements are still left
            if(map[ransomnote[k]]>0){
                return false;
            }
        }return true;
    }
};

//     if(magazine.size() > ransomnote.size())
//         return false;

//     for (int i = 0; i < ransomnote.size(); i++){
//         int j = 0;
//         if(ransomnote[i] == magazine[j]){
//             int k = i;
//             while (ransomnote[i] == magazine[j] && j < magazine.size()){
//                 j++;
//                 i++;
//             }
//             if (j == magazine.size())
//                 return true;
//                 i = k;
//         }
//     }
   

//         int len1 = ransomnote.length();
//         int len2 = magazine.length();
        
//         for(int i=0;i<len2;i++){
//             int j;
            
//             for(j = 0;j<len2;j++){
//                 if(magazine[i+j] != ransomnote[j] )
//                     break;
//             if(j == len2){
//                 return true;
//             }
                
//             }
//         }return false;
//     }
