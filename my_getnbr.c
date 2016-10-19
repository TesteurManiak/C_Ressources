int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] >= 48 && str[i] <= 57)
    {
      nb = nb * 10 + (str[i] - 48);
      i++;
    }
  return (nb);
}
