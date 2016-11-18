char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(dest);
  while (i < n)
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
