#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    vector<long long int> a(5);
    long long int t = 0;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    long long int min = a[0], mini = 0;
    for (int i = 0; i < 5; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            mini = i;
        }
    }
/*    for (int i = 0; i < mini; i++)
    {
        t += n / a[i];
    }
    t += n / min + 5 - mini;
*/
	t = n - min + 1;
    cout << t << endl;
    return 0;
}
