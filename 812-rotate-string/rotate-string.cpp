class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return 0;
        s+=s;
cout<<s;
         int res = s.find(goal);
        if (res != string::npos)
      	return res+1;
        return 0;
    }
};