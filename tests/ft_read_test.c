#include <libasm.h>

int ft_read_test(int fd, void *buf, size_t count)
{
	printf("_ft_read asm_x64 (fd: %d, buf: %p, count: %zu): result == %zu\n", fd, buf, count, ft_read(fd, buf, count));
	printf("read libC (fd: %d, buf: %p, count: %zu): result == %zu\n\n", fd, buf, count, read(fd, buf, count));
	printf("errno %d\n", errno);

	return 1;
}