void	aff_tab(char **tab)
{
  for (int i = 0; tab[i] != '\0'; i++)
  {
    my_putstr(tab[i]);
    write(1, "\n", 1);
  }
}
