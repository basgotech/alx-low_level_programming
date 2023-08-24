/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
char *r = str;
char a[] = {'a', 'e', 'o', 't', 'l'};
char n[] = {4, 3, 0, 7, 1};
int i;

for (; *str; str++)
{
for (i = 0; i < 5; i++)
{
if (*str == a[i] || *str == a[i] - 32)
{
*str = n[i] + '0';
break;
}
}
}

return (r);
}
