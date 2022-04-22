
typedef int (*TF) (int);

int	f(int x)
{
	return (7 - x);
}

int	function(int a, int (*f1)(int), int (*f2)(int))
{
	return (f1(a)/f2(a));
}

int	function_TF(int a, TF f1, TF f2)
{
	return (f1(a)/f2(a));
}
