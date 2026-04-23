#include <libasm.h>

int ft_write_test(int fd, const void *buf, size_t count)
{
	printf("_ft_write asm_x64 (fd: %d, buf: %p, count: %zu): result == %zu\n", fd, buf, count, ft_write(fd, buf, count));
	printf("write libC (fd: %d, buf: %p, count: %zu): result == %zu\n\n", fd, buf, count, write(fd, buf, count));
	printf("errno %d\n", errno);
	return 1;
}