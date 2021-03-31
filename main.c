# include <stdio.h>
# include <string.h>
# include "ft_printf.h"

int		main()
{
	printf("zero precision, width > len (string)\n");
	printf("%*.0s\n", 10, "abcdef");
	ft_printf("%*.0s\n", 10, "abcdef");
	printf("zero precision, width < len (decimal)\n");
	printf("%*.0d\n", 3, 123456);
	ft_printf("%*.0d\n", 3, 123456);
	printf("negative precision on string\n");
	printf("%.*s\n", -4, "abcdef");
	ft_printf("%.*s\n", -4, "abcdef");
	printf("minus basics\n");
	printf("%-09.20s\n", "abcdef");
	ft_printf("%-09.20s\n", "abcdef");
	printf("🐶 width < len\n");
	printf("%*s\n", 3, "abcdef");
	ft_printf("%*s\n", 3, "abcdef");
	printf("🐶 negative width\n");
	printf("%-5c\n", 'e');
	ft_printf("%-5c\n", 'e');
	printf("%-5.2s\n", "ola");
	ft_printf("%-5.2s\n", "ola");
	printf("🐶 minus basics\n");
	printf("%-10.5s\n", "abcdef");
	ft_printf("%-10.5s\n", "abcdef");
	printf("- and width > len\n");
	printf("%-10d\n", 123456);
	ft_printf("%-10d\n", 123456);
	printf("0, precision > width \n");
	printf("%-0*.20s\n", 9, "abcdef");
	ft_printf("%-0*.20s\n", 9, "abcdef");
	printf("0, w > len > p\n");
	printf("%-0*.*s\n", 9, 5, "abcdef");
	ft_printf("%-0*.*s\n", 9, 5, "abcdef");
	printf("%-0*.*s\n", -9, 5, "abcdef");
	ft_printf("%-0*.*s\n", -9, 5, "abcdef");
	printf("precision > width, both > len\n");
	printf("%-0*.20s\n", 9, "abcdef");
	ft_printf("%-0*.20s\n", 9, "abcdef");
	printf("%-0*.20s\n", 4, "abcdef");
	ft_printf("%-0*.20s\n", 4, "abcdef");
	printf("width > precision\n");
	printf("%-0*.3s\n", 4, "abcdef");
	ft_printf("%-0*.3s\n", 4, "abcdef");
	printf("%-0*.5s\n", 3, "abcdef");
	ft_printf("%-0*.5s\n", 3, "abcdef");
	printf("negative precision, positive width\n");
	printf("%-0*.*s\n", 9, -5, "abcdef");
	ft_printf("%-0*.*s\n", 9, -5, "abcdef");
	printf("🐶 0 and precision less than width\n");
	printf("%0*.3s\n", 5, "abcdef");
	ft_printf("%0*.3s\n", 5, "abcdef");
	printf("🐶 minus && width > prec\n");
	printf("%-20.10d\n", 123456);
	ft_printf("%-20.10d\n", 123456);
	printf("🐶 0 && minus && width > prec\n");
	printf("%0-20.10d\n", 123456);
	ft_printf("%0-20.10d\n", 123456);
	printf("prec < width\n");
	printf("%20.10d\n", 123456);
	ft_printf("%20.10d\n", 123456);
	printf("minus && prec > width\n");
	printf("%-10.20d\n", 123456);
	ft_printf("%-10.20d\n", 123456);
	printf("prec > width\n");
	printf("%10.20d\n", 123456);
	ft_printf("%10.20d\n", 123456);
	printf("0, precision > width \n");
	printf("%-0*.20d\n", 9, 123456);
	ft_printf("%-0*.20d\n", 9, 123456);
	printf("-0 and width > len\n");
	printf("%-010d\n", 123456);
	ft_printf("%-010d\n", 123456);
	printf("-0 and prec > width > len\n");
	printf("%-010.12d\n", 123456);
	ft_printf("%-010.12d\n", 123456);
	printf("-0 and prec > width, but len > prec\n");
	printf("%-03.4d\n", 123456);
	ft_printf("%-03.4d\n", 123456);
	printf("zero precision, width < len (string)\n");
	printf("%*.0s\n", 3, "abcdef");
	ft_printf("%*.0s\n", 3, "abcdef");
	printf("zero precision, width > len (decimal)\n");
	printf("%*.0d\n", 9, 123456);
	ft_printf("%*.0d\n", 9, 123456);
	printf("negative precision with bigger width on string\n");
	printf("%*.*s\n", 10, -4, "abcdef");
	ft_printf("%*.*s\n", 10, -4, "abcdef");
	printf("minus basics\n");
	printf("%-09.20d\n", 123);
	ft_printf("%-09.20d\n", 123);
	return (0);
}
