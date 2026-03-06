class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        //if(s=="1" || s=="10" || s=="01")return 1;
        bool frst=0, snd=0,ze=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                frst=1;
            }
           if(frst && s[i]=='0'){
                ze = 1;
            }
          if(ze && s[i]=='1'){
                snd=1;
            }

            if(snd){
                return 0;
            }
            
        }
        return 1;
    }
};