class Solution {
public:
    int mirrorFrequency(string s) {
        int ans=0;

        vector<int>c(1000,0);
        vector<int>n(2560,0);



        for(char it:s){ 
            if(it<= '9' && it>= '0')
            { c[it-'0']++; }
            else{ n[it-'a']++; }
             } 
        
        
        for(int i=0;i<5;i++){
             ans+= abs(c[i]-c[9-i]);
              } 
              
              for(char i = 0;i<13;i++){ ans+= abs(n[i]-n[25-i]); }

        // for(auto &it:s){
        //     if(h[it]>0){
        //         if(it<'9'){
        //             int l= '9'-it;
        //             int m= '0'+l;
        //            int m1 =h[m];
        //            h[m]=0;

        //             int c =h[it];
        //             h[it]=0;
        //             ans+= abs(c-m1);
        //         }else{
        //             int l= 'z'-it;
        //             int m= 'a'+l;
        //            int m1= h[m];
        //            h[m]=0;

        //             int c=h[it];
        //             h[it]=0;
        //             ans+= abs(c-m1);
        //         }
        //     }
        // }

            // int l= '9'-'9';
            // char x= 
            // cout<<('0'+l);

        return ans;

    }
};