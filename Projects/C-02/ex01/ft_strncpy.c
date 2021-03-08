char    *ft_strncpy(char*dest, char*src, unsigned intn)
{
    while (*(src) != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    while(*(dest) !='\0')
    {
        *(dest) = '\0';
        dest++;
    }
    return (dest);
}