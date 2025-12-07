


class Solution {
public:
    bool completePrime(int num) {
        static const set<int> sol = {2 , 3 , 5 , 7 , 23 , 37 , 53 , 73 , 313 , 317 , 373 , 797 , 3137 , 3797 , 739397};
        vector<int> p={2,3,5,7};
         return sol.count(num);

    }
};


/*

this is used to calcutale set<int> sol


vector<bool> prime(1e7+10, true);

// vector<int> res;
// time taken with constexpr = 905598
// time taken without = 900483
constexpr void sieve(int n = 1e7 + 10)
{
        prime[1] = false;
    // creation of boolean array
    
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

}

bool ok(const string &s)
{
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        string left = s.substr(0, i + 1);
        string right = s.substr(i + 1);

        long long L = stoll(left);
        long long R = stoll(right);

        if (!prime[L] || !prime[R])
            return false;
    }
    return true;
}

void solve ()
{


    for( int i=2;i<=1e7;i++){

        string s = to_string(i);
        if(ok(s) && prime[i]){
            cout<<i<<" , ";
        }
    }
          

}




*/