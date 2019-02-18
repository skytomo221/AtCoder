#include <bits/stdc++.h>
using namespace std;
int t5[290];
int begin5(int t)
{
    return t - t % 5;
}
int end5(int t)
{
    return t + (t % 5 ? (5 - t % 5) : 0);
}
int main()
{
    int n, begin, end;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d", &begin, &end);
        begin = begin5(begin);
        end = end5(end);
        for (int j = begin; j < end; j = ((j + 5) % 100 / 60) ? (j / 100 + 1) * 100 : j + 5)
        {
            t5[j / 100 * 12 + j % 100 / 5] += 1;
        }
    }
    bool flag = true;
    for (int i = 0; i < 289; i++)
    {
        if (t5[i] && flag)
        {
            begin = (i / 12 * 100) + i % 12 * 5;
            flag = !flag;
        }
        if (!t5[i] && !flag)
        {
            end = (i / 12 * 100) + i % 12 * 5;
            printf("%04d-%04d\n", begin, end);
            flag = !flag;
        }
    }
    return 0;
}
