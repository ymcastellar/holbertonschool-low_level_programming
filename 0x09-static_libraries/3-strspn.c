/**
*_strspn - length of a prefix substring
*@s: char parameter
*@accept: char parameter
*Return: cont
*/

unsigned int _strspn(char *s, char *accept)
{
int cont, i;

cont = 0;

for ( ; *s != '\0' ; s++)
{
for (i = 0; *(accept + i) != '\0' ; i++)
{
if (*s == *(accept + i))
{
cont++;
break;
}
}
if (*s != *(accept + i))
{
break;
}
}

return (cont);
}
