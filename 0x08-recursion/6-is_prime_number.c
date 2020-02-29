/**
*primenumber - find prime number
*@n: int parameter
*@x: consta parameter
*Return: prime number int
*/

int primenumber(int n, int x)
{

if (n % x == 0)
{
return (0);
}

if (x == n / 2)
{
return (1);
}
return (primenumber(n, x + 1));
}

/**
*is_prime_number - print a prime number
*@n: int parameter
*Return: int
*/
int is_prime_number(int n)
{

if (n < 2)
{
return (0);
}
if (n > 2)
{
return (primenumber(n, 2));
}
else
{
return (0);
}

}


