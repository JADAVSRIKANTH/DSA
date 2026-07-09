class Solution {
public:
    static const int M = 1e9 + 7;
    long long power1(long long a, long long b) {
    long long ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return ans;
    }
    int countGoodNumbers(long long n) {
        long long e = (n + 1) / 2;
        long long o = n / 2;
        return (power1(5, e)*power1(4, o)) % M;
        
    }
};