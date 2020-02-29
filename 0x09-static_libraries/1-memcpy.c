/**
*_memcpy - copy memori area
*@dest: destination parameter
*@src: source parameter
*@n: unsigned int i;
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);
}
