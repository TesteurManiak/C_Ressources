void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if(nb <= 9)
    my_putchar(nb + 48);
  else
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
}
