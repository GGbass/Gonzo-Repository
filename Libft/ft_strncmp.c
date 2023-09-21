#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 != '\0' && *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main()
{
    char    phrase1[20] = "Hola Mundo";
    char    phrase2[20] = "Hello World";
    size_t  n = 14;
    char    result = ft_strncmp(phrase1, phrase2, n);

    printf("Resultado %d\n", result);
    return (0);
}
