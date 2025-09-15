class Solution {
public:

        int getSum(int x,int y){
            int ans=0;
            for(int i=1;i<=x;i++){
                if(i%y!=0) ans+=i;
            }
            return ans;
        }

        int getSumN(int x,int y){
            int ans=0;
            for(int i=1;i<=x;i++){
                if(i%y==0) ans+=i;
            }
            return ans;
        }


    int differenceOfSums(int n, int m) {
        int num1 = getSum(n,m);
        int num2 = getSumN(n,m);

        return num1 - num2;
    }
};