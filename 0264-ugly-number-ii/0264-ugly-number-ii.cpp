class Solution {
public:
    int nthUglyNumber(int n) {
         vector<int> u(n);
        u[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; i++) {
            int n2 = u[i2] * 2;
            int n3 = u[i3] * 3;
            int n5 = u[i5] * 5;
            int y = min({n2, n3, n5});
            u[i] = y;
            if (y == n2) i2++;
            if (y == n3) i3++;
            if (y == n5) i5++;
        }
        return u[n - 1]; 
    }
};