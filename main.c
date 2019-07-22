#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd;
	char **line;
	int	ret;

	fd = open("./file.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((ret = (get_next_line(fd, line)) == 1))
			ft_putstr(*line);
	close(fd);
	return (0);
}