
//Declarar as bibliotecas das funções para comparação
#include "../libft/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//prototipar os testes
void	ft_isalpha_test(void);
void	ft_isdigit_test(void);
void	ft_isalnum_test(void);
void	ft_isascii_test(void);
void	ft_isprint_test(void);
void	ft_strlen_test(void);

//Chamas as funções
int	main()
{
	printf("******ft_isalpha******\n");
	ft_isalpha_test();
	printf("\n");

	printf("******ft_isdigit******\n");
	ft_isdigit_test();
	printf("\n");

	printf("******ft_isalnum******\n");
	ft_isalnum_test();
	printf("\n");

	printf("******ft_ascii******\n");
	ft_isascii_test();
	printf("\n");

	printf("******ft_isprint******\n");
	ft_isprint_test();
	printf("\n");

	printf("******ft_strlen******\n");
	ft_strlen_test();
	printf("\n");
}

void ft_isalpha_test(void)
{
	char var1 = 'e';
	char var2 = '2';
	char var3 = ' ';
	char var4 = '\t';

	if (ft_isalpha(var1) == 1 && isalpha(var1))
		printf("Alfabético\n");
	else
		printf("Não Alfabético\n");

	if (ft_isalpha(var2) == 1 && isalpha(var2))
		printf("Alfabético\n");
	else
		printf("Não Alfabético\n");

	if (ft_isalpha(var3) == 1 && isalpha(var3))
		printf("Alfabético\n");
	else
		printf("Não Alfabético\n");

	if (ft_isalpha(var4) == 1 && isalpha(var4))
		printf("Alfabético\n");
	else
		printf("Não Alfabético\n");
}

void ft_isdigit_test(void)
{
	char var1 = 'e';
	char var2 = '2';
	char var3 = ' ';
	char var4 = '\t';

	if (ft_isdigit(var1) == 1 && isdigit(var1))
		printf("Numérico\n");
	else
		printf("Não Numérico\n");

	if (ft_isdigit(var2) == 1 && isdigit(var2))
		printf("Numérico\n");
	else
		printf("Não Numérico\n");

	if (ft_isdigit(var3) == 1 && isdigit(var3))
		printf("Numérico\n");
	else
		printf("Não Numérico\n");

	if (ft_isdigit(var4) == 1 && isdigit(var4))
		printf("Numérico\n");
	else
		printf("Não Numérico\n");
}

void	ft_isalnum_test(void)
{
	char var1 = 'e';
	char var2 = '2';
	char var3 = ' ';
	char var4 = '\t';

	if (ft_isalnum(var1) == 1 && isalnum(var1))
		printf("AlfaNumérico\n");
	else
		printf("Não AlfaNumérico\n");

	if (ft_isalnum(var2) == 1 && isalnum(var2))
		printf("AlfaNumérico\n");
	else
		printf("Não AlfaNumérico\n");

	if (ft_isalnum(var3) == 1 && isalnum(var3))
		printf("AlfaNumérico\n");
	else
		printf("Não AlfaNumérico\n");

	if (ft_isalnum(var4) == 1 && isalnum(var4))
		printf("AlfaNumérico\n");
	else
		printf("Não AlfaNumérico\n");
}

void	ft_isascii_test(void)
{
	char var1 = 'e';
	char var2 = '2';
	char var3 = ' ';
	char var4 = '\t';
	int var5 = 130;

	if (ft_isascii(var1) == 1 && isascii(var1))
		printf("ASCII\n");
	else
		printf("Não ASCII\n");

	if (ft_isascii(var2) == 1 && isascii(var2))
		printf("ASCII\n");
	else
		printf("Não ASCII\n");

	if (ft_isascii(var3) == 1 && isascii(var3))
		printf("ASCII\n");
	else
		printf("Não ASCII\n");

	if (ft_isascii(var4) == 1 && isascii(var4))
		printf("ASCII\n");
	else
		printf("Não ASCII\n");

	if (ft_isascii(var5) == 1 && isascii(var5))
		printf("ASCII\n");
	else
		printf("Não ASCII\n");
}

void	ft_isprint_test(void)
{
	char var1 = 'e';
	char var2 = '2';
	char var3 = ' ';
	int var4 = '\0';

	if (ft_isprint(var1) == 1 && isprint(var1))
		printf("Is Printable\n");
	else
		printf("Is not Printable\n");

	if (ft_isprint(var2) == 1 && isprint(var2))
		printf("Is Printable\n");
	else
		printf("Is not Printable\n");

	if (ft_isprint(var3) == 1 && isprint(var3))
		printf("Is Printable\n");
	else
		printf("Is not Printable\n");

	if (ft_isprint(var4) == 1 && isprint(var4))
		printf("Is Printable\n");
	else
		printf("Is not Printable\n");
}

void ft_strlen_test(void)
{
	if(ft_strlen("Tulani") == strlen("Tulani"))
		printf("ft_strlen: OK\n");
	else
		printf("ft_strlen: KO\n");
}
