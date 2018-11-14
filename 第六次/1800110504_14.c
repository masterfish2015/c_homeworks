#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, h, m, n;
    char s1[5];
    char s2[5];
    printf("Please enter s1: ");
    gets(s1);
    m=strlen(s1);
    printf("Please enter s2: ");
    gets(s2);
    n=strlen(s2);
    for (i=0, j=0; i<m || j<n; i++, j++){
        if (s1[i]==s2[j])
            continue;
        else
            h=s1[i]-s2[j];
    }
    printf("%d\n", h);
    return 0;
}