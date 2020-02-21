/**
*cap_string - capitalize strings
*@s: parameter char
*Return: array s
*/
char *cap_string(char *s)
{
int i = 0, s;

while (s[i] != '\0')
{

if (char_seperator(s[i]) == 1)
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
i
i++;
}

return (s);

}

/**
* char_seperator - validatea seperator
* @c: parameter to check
* Return: true for find seprator and false if it do not found
*/

int char_seperator(char c)
{
int i = 0, leng_s;
int leng_s = 13;
char seperators[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

while (seperators < leng_s)
{
if (c == seperators[i++])
{
return (1);
}
else
{
return (0); 
}
}

return (s);
}
