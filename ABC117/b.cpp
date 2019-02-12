#include <stdio.h>

using namespace std;

int main() {
    int n, l[100];
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
    scanf("%d",&l[i]);        
    }
    int max=0, sum=0;
    for(int i = 0; i < n; i++)
    {
if (max<l[i])max=l[i];
sum+=l[i];
    }
    //printf("%d",sum);
    printf("%s\n",(sum-max >max)?"Yes":"No");

    
    return 0;
}
