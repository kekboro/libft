int ft_isalpha(int c)
{
    if (c > 64 && c < 91)
        return(1);
    else if (c > 97 && c < 123)
        return (1);
    else
        return (0);
}