char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(dest);
  while (src[i])
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
