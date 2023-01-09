#include "../includes/rtv1.h"

t_vect	mkvec(t_vect a, t_vect b)
{
	t_vect	c;

	c.x = b.x - a.x;
	c.y = b.y - a.y;
	c.z = b.z - a.z;
	return (c);
}

t_vect	do_vec(double x, double y, double z)
{
	t_vect	pt;

	pt.x = x;
	pt.y = y;
	pt.z = z;
	return (pt);
}

t_vect	norma(t_vect a)
{
	double	dist;

	dist = do_dist(a);
	a.x = a.x / dist;
	a.y = a.y / dist;
	a.z = a.z / dist;
	return (a);
}

double	scal(t_vect a, t_vect b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

double	scal_sqrd(t_vect a)
{
	return (scal(a, a));
}
