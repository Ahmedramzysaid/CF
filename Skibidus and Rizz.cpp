void solve()
{
   int a, b, c;
        cin >> a >> b >> c;
 
        if (abs(a - b) > c || (a == 0 && b == 0 && c != 0) || (a == 0 && c != b) || (b == 0 && c != a)) {
            cout << -1 << endl;
           return ;
        }
 
        int t = a + b;
        string res(t, ' ');
        int i = 0;
 
        int f = a - b;
        int z, u, d, L, U;
 
        if (f >= 0) {
            for (int j = 0; j < c; j++) res[i++] = '0';
            z = c;
            u = a - c;
            d = b;
            L = 0;
            U = c;
        } else {
            for (int j = 0; j < c; j++) res[i++] = '1';
            z = -c;
            u = a;
            d = b - c;
            L = -c;
            U = 0;
        }
 
        while (u + d > 0) {
            if (z == U) {
                if (d <= 0 || z - 1 < L || z - 1 + u < f || z - 1 - (d - 1) > f) {
                    res = "";
                    break;
                }
                res[i++] = '1';
                z--;
                d--;
            } else if (z == L) {
                if (u <= 0 || z + 1 > U || z + 1 + u - 1 < f || z + 1 - d > f) {
                    res = "";
                    break;
                }
                res[i++] = '0';
                z++;
                u--;
            } else {
                bool q = (u > 0 && z + 1 <= U && z + 1 + u - 1 >= f && z + 1 - d <= f);
                bool w = (d > 0 && z - 1 >= L && z - 1 + u >= f && z - 1 - (d - 1) <= f);
                if (q && w) {
                    res[i++] = (abs(z + 1 - f) <= abs(z - 1 - f)) ? '0' : '1';
                    z += (abs(z + 1 - f) <= abs(z - 1 - f)) ? 1 : -1;
                    if (res[i - 1] == '0') u--;
                    else d--;
                } else if (q) {
                    res[i++] = '0';
                    z++;
                    u--;
                } else if (w) {
                    res[i++] = '1';
                    z--;
                    d--;
                } else {
                    res = "";
                    break;
                }
            }
        }
 
        if (res.empty() || (z != f && !res.empty())) {
            cout << -1 ;
        } else {
            cout << res ;
        }
        cout << endl;
}