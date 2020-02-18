/**
*_strlen - string leng task 2
*@s: cahr parameter
*Return: char
*/

int _strlen(char *s)
{
int i = 0, count = 0;

while (s[i++] != '\0')
{
count++;
}

return (count);
}
