#include<stdio.h>
void sort(int cf, int left, int right)
{
    if(left >= right)
    {
        return;
    }
    int i=left;
    int j=right;
    int key = cf[left];

    while(i < j)
    {
        while(i < j && key <= cf[j])
        {
            j--;
        }
        cf[i]=cf[j];
        while(i < j && key >= cf[i])
        {
            i++;
        }
        cf[i] = cf[j];
    }
    cf[i] = key;
    sort(cf, left, i-1);
    sort(cf, i+1, right);


}
int main()
{
     int i, k, n, m;
    long x, s[10] = {0};
    scanf("%d %d", &n, &m);
    int len = m < n ? m : n;
    for(i = 0; i < len; i ++) {
        scanf("%ld", &s[i]);
    }
    void sort(int *cf, int left, int right);
    for(i = len; i < n; i ++) {
        scanf("%ld", &x);
        if(x > s[len-1]) {
            for(k = 0; k < len; k ++) {
                if(s[k] < x) {
                    int t;
                    for(t = len-1; t > k; t --) {
                        s[t] = s[t-1];
                    }
                    s[t] = x;
                    break;
                }
            }
        }
    }
    if(len >= 1) {
        printf("%ld", s[0]);
    }
    for(i = 1; i < len; i ++) {
        printf(" %ld", s[i]);
    }

    return 0;


}
