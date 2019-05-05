/*
Converts a hexadecimal string to integer.
Allowed values - optional 0x or 0X, 0-9, a-f, A-f.
*/
#include<stdio.h>

#define BASE 16

int htoi(char s[])
{
    int i = 0;
    int ans = 0;
    if(s[0] == 0 && (s[1] == 'x' || s[1] == 'X'))
        i = 2;
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9'){
            ans += ans * BASE + s[i] - '0';
        }
        if(s[i] >= 'a' && s[i] <= 'f'){
            ans += ans * BASE + s[i] - 'a' + 10;
        }
        if(s[i] >= 'A' && s[i] <= 'F'){
            ans += ans * BASE + s[i] - 'A' + 10;
        }
        i++;
    }
    return ans;
}

int main()
{
    char str[] = "0xA\0";
    printf("%d\n", htoi(str));
    return 0;
}