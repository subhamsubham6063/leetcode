class Solution {
public:
    int countCollisions(string d) {
       stack<char>r;
        int ans=0;
        for(auto it:d){
            // 

            if(it == 'S'){
                 while(!r.empty()){
                    if(r.top()=='R')ans++;
                    r.pop();
                }
                 r.push('S');
            }

            if(it == 'L'){
                if(!r.empty() && r.top() == 'R'){
                    ans+=2;
                    r.pop();
                    r.push('S');
                    
                    while(!r.empty()){
                    if(r.top()=='R')ans++;
                    r.pop();
                }
                 r.push('S');
                }
                else if(!r.empty() && r.top() == 'S'){
                    ans++;
                    
                }
                 
                // while(!r.empty()){
                //     ans+=2;
                //     r.pop();
                // }
            }

            if(it == 'R' || it == 'S'){
                r.push(it);
            }
        }
        return ans;
    }
};