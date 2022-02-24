#include <unistd.h>

int	main(void)
{
	int even;
	int odd;
	even = 66;
	odd = 97;
	while(odd <= 122)
	{
		write(1, &odd, 1);
		if(even <= 90)
		{
			write(1, &even, 1);
		}
		odd+=2;
		even+=2;
	}
	write(1, "\n", 1);
}
