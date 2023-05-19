#include "deps.h"

char *read_flag(char *dst)
{
	int fd = open("flag.txt", O_RDONLY);
	char *SECRET = get_next_line(fd);
	int i = 0;
	while (SECRET[i])
	{
		dst[i] = SECRET[i];
		++i;
	}
	return(dst);
}
