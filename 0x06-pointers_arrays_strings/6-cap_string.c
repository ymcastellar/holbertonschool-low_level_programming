/**
*cap_string - capitalize strings
*@s: parameter char
*Return: array s
*/
char *cap_string(char *s)
{
int i;

for (i = 1; s[i] != '\0'; i++)
{
if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
{
s[i] = s[i] - 32;
}
else
{
s[i] = s[i];
}
}


return (s);
}
