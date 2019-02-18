#include <bits/stdc++.h>
#define time_table_size 289
#define normalization_of_start_time(t) (t - t % 5)
#define normalization_of_end_time(t) (t + (t % 5 ? (5 - t % 5) : 0))
#define from_time_to_number(t) (t / 100 * 12 + t % 100 / 5)
#define from_number_to_time(n) ((n / 12 * 100) + n % 12 * 5)
#define increment_for_time(i) (((i + 5) % 100 / 60) ? (i / 100 + 1) * 100 : i + 5)
using namespace std;
int time_table[time_table_size];
int main()
{
    int n, begin, end;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d", &begin, &end);
        time_table[from_time_to_number(normalization_of_start_time(begin))] += 1;
        time_table[from_time_to_number(normalization_of_end_time(end))] -= 1;
    }
    int prev = 0;
    for (int i = 0; i < time_table_size; i++)
    {
        prev = (time_table[i] += prev);
    }
    bool flag = true;
    for (int i = 0; i < time_table_size; i++)
    {
        if (time_table[i] && flag)
        {
            begin = from_number_to_time(i);
            flag = !flag;
        }
        if (!time_table[i] && !flag)
        {
            end = from_number_to_time(i);
            printf("%04d-%04d\n", begin, end);
            flag = !flag;
        }
    }
    return 0;
}
