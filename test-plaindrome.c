#include <stdio.h>

int strlength(char *s)
{              
    int i = 0;
    
    if (*s > '\0')
            i += strlength(s + 1) + 1;
    return (i);
}

char* last_char(char *s)
{                         
    int i = 0;
    
    while (*s > '\0')
        {
            s++;
            strlength(s);
        }
    return (s - 1);
}
int strcompare(char *s1, char *s2)
{
    int i = 0;
    
    while (*(s2 + i) != '\0' && *(s1 + i) != '\0')
    {
        if(*(s1 + i) - *(s2 + i) != 0)
            return (*(s1 + i) - *(s2 + i));
        i++;
    }
    return(0);
}
int check_plaindrome(char *str)
{
    char *p;
    int n = strlength(str) - 1;
    int i = 0;
    char arr[n];
    p = last_char(str);
    while (i <= n)
    {
     arr[i] = *p;
     p--;
     i++;
    }
    if (strcompare(str, arr) == 0)
    {
        printf("the string is plaindrome !\n");
        return (1);
    }
    else 
    {
        printf("the string is not a plaindrome\n");
        return (0);
    }
}
int main()
{
    char *s = "step on no pets";
    //check_plaindrome(s);
    printf("%d\n", check_plaindrome(s));
    return (0);
}
