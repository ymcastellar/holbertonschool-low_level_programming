/**
* sqrt - square root
* @n: number parameter
* @i: incrementor parameter
* Return: int
*/

int _sqrt(int n, int i)
{
if (n == (i * i))
{
return (i);
}
else if (n > (i * i))
{
return (_sqrt(n, i + 1));
}
else
{
return (-1);
}
}


/**
*_sqrt_recursion - return the natural square
*@n: int parameter
*Return: int
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt(n, 1));
}

}
