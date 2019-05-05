#include<stdio.h>

void squeeze(char[], char[]);
int in_ignore(char, char[]);

int in_ignore(char c, char ignore[])
{
    int i, found;
    found = 0;
    for(i = 0; ignore[i] != '\0'; i++){
        if(ignore[i] == c) {
            found = 1;
            break;
        }
    }
    return found;
}

void squeeze(char s[], char ignore[])
{
    // i traverses the string and j marks
    // the position where the new non-ignore 
    // character should be placed.
    int i = 0,  j = 0;
    while(s[i] != '\0'){
        if(in_ignore(s[i], ignore))
            i++;
        else s[j++] = s[i++];
    }
    s[j] = '\0';
}

int main()
{
    char s[] = "abcdabfbdcb cjsdfjaksfa sfasjff";
    char ignore[] = "cjf";
    squeeze(s, ignore);
    printf("%s\n", s);
    return 0;
}