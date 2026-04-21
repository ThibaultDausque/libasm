#include <libasm.h>

int ft_read_test(int fd, void *buf, size_t count)
{
    if (!buf || fd < 0)
		return 0;

	printf("_ft_read asm_x64 (fd: %d, buf: %p, count: %zu): result == %zu\n", fd, buf, count, ft_read(fd, buf, count));
	printf("read libC (fd: %d, buf: %p, count: %zu): result == %zu\n\n", fd, buf, count, read(fd, buf, count));

	return 1;
}