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
int i;

if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
for (i = 1; s[i] != '\0'; i++)
{
if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
|| s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
|| s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
{
s[i] = s[i] - 32;
}
}
return (s);
}
