class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;

        while(a||b||c){
            bool x= (a&1);
           bool y=  b&1;
           bool z=  c&1;

           
        //     if((x|y) != z)ans++;
        //     cout<<x<<' ';

        //   if((x|y)!=z)  x=(~x);

        //     cout<<x<<' ';
        //     if((x|y) != z)ans++;

        if(z){
           if(x+y!=2) ans+=(int)(x==y);
        }else{
            ans+=x;
            ans+=y;
        }
        // 101 
        // 101
        // 101

            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};