#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    char vowel[] = {'a', 'i', 'u', 'e', 'o'};
    cin >> w;
    for (int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < 5; j++)
            if (w[i] == vowel[j])
                goto skip;
        cout << w[i];
    skip:;
    }
    cout << endl;
    return 0;
}
