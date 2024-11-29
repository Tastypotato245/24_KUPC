#include <cstdio>
#include <cmath>
int f[10];
int f_p[10];

int main(){
    for(int i = 0; i < 10 ; i++) {
        scanf("%d", f + i);
        f_p[f[i]] = i;
    }

    int a, b;
    scanf("%d%d", &a, &b);

    int inv_a = 0, inv_b = 0;
    int x = 0;
    while(a != 0){
        int k = a % 10;
        a /= 10;

        int y = f_p[k];

        inv_a += y * pow(10, x++);
    }
    x = 0;
    while(b != 0){
        int k = b % 10;
        b /= 10;
        int y = f_p[k];
        inv_b += y * pow(10, x++);
    }

    int p = inv_a + inv_b;
    
    int ans = 0;
    x = 0;
    while(p != 0){
        int k = p % 10;
        p /= 10;
        int y = f[k];
        ans += y * pow(10, x++);
    }
    printf("%d", ans);
}
