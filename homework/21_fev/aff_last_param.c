#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	i = 0;
	j = argc-1;
	
	if(argc > 1)
	while(argv[j][i] != '\0')
	{
		write(1, &argv[j][i], 1);
		i++;
	}
	else
	
		write(1, "\n", 1);
	
}


