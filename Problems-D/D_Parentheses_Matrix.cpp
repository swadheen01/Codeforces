#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n, m;
bool g[205][205];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--) {
        memset(g, 0, sizeof(g));
        char s[2] = {'(', ')'};
        bool f = 0;
        scanf("%d%d", &n, &m);
        if ((n % 2 == 1) || (m % 2 == 1)) {
            f = n % 2;
            if (!f) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++)
                        printf("%c", s[i % 2]);
                    printf("\n");
                }
            } else {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++)
                        printf("%c", s[j % 2]);
                    printf("\n");
                }
            }
        } else {
            if (n < m) {
                f = 1;
                swap(n, m);
            }
            for (int i = 1; i <= n; i += 2)
                for (int j = 1; j <= m; j++)
                    g[i][j] = ((j + 1) % 2);
            for (int i = 2; i <= n; i += 2) {
                g[i][1] = 0;
                for (int j = 2; j < m; j++)
                    g[i][j] = (j % 2);
                g[i][m] = 1;
            }
            if (n + m - 4> n+ m / 2 - 1) {
                for (int i = 1; i <= m; i++)
                    g[1][i] = 0;
                for (int i = 1; i <= m; i++)
                    g[n][i] = 1;
            }
            if (!f) {
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= m; j++)
                        printf("%c", s[g[i][j]]);
                    printf("\n");
                }
            } else {
                for (int i = 1; i <= m; i++) {
                    for (int j = 1; j <= n; j++)
                        printf("%c", s[g[j][i]]);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
