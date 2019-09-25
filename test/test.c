/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <fsidler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:53:46 by fsidler           #+#    #+#             */
/*   Updated: 2019/09/25 16:54:39 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libfts.h"

# define _FT_BZERO
# define _FT_STRCAT
# define _FT_ISALPHA
# define _FT_ISDIGIT
# define _FT_ISALNUM
# define _FT_ISASCII
# define _FT_ISPRINT
# define _FT_TOUPPER
# define _FT_TOLOWER
# define _FT_PUTS
# define _FT_STRLEN
# define _FT_MEMSET
# define _FT_MEMCPY
# define _FT_STRDUP
# define _FT_CAT

# define _FT_ATOI
# define _FT_ITOA
# define _FT_ICLAMP
# define _FT_STRCMP
# define _FT_STRJOIN

int		main(void)
{

	char *long_str = "qwertyuiop asfdghjkklzxcvbnm1234567898987654123qe fvtsvdqwertyuiolkjhgfdsazxcvbnmnbvcxzasdfghjklpoiuytrew!@#$^&*())(*&^$#@!@#$^&**&^$#@#$^&*(*&^$#";

#ifdef _FT_BZERO
	printf("_ft_bzero_\n");
	char bz_str[] = "aPERI_CUB-e";
	printf("\tbz_str = \"%s\"\n", bz_str);
	ft_bzero(bz_str + 2, 2);
	printf("\tft_bzero(bz_str + 2, 2)\n");
	printf("\tbz_str = [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c]\n", bz_str[0], bz_str[1], bz_str[2], bz_str[3], bz_str[4], bz_str[5], bz_str[6], bz_str[7], bz_str[8], bz_str[9], bz_str[10]);
	ft_bzero(bz_str + 1, 9);
	printf("\tft_bzero(bz_str + 1, 9)\n");
	printf("\tbz_str = [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c]\n", bz_str[0], bz_str[1], bz_str[2], bz_str[3], bz_str[4], bz_str[5], bz_str[6], bz_str[7], bz_str[8], bz_str[9], bz_str[10]);
	printf("_ft_bzero_\n\n");
#endif

#ifdef _FT_STRCAT
	printf("_ft_strcat_\n");
	char cat_str[100] = "mouche, ";
	char *cats[3] = { "", "mOuCHELetTE", ", Moucheronnette, \% moucheron \%" };
	printf("\tcat_str = \"%s\"\n", cat_str);
	printf("\tft_strcat(cat_str, \"%s\") = \"%s\"\n", cats[0], ft_strcat(cat_str, cats[0]));
	printf("\tft_strcat(cat_str, \"%s\") = \"%s\"\n", cats[1], ft_strcat(cat_str, cats[1]));
	printf("\tft_strcat(cat_str, \"%s\") = \"%s\"\n", cats[2], ft_strcat(cat_str, cats[2]));
	printf("_ft_strcat_\n\n");
#endif

#ifdef _FT_ISALPHA
	printf("_ft_isalpha_\n");
	printf("\tft_isalpha(%c) = %d\n", 42, ft_isalpha(42));
	printf("\tft_isalpha(%c) = %d\n", -42, ft_isalpha(-42));
	printf("\tft_isalpha(%c) = %d\n", 0, ft_isalpha(0));
	printf("\tft_isalpha(%c) = %d\n", 'z', ft_isalpha('z'));
	printf("\tft_isalpha(%c) = %d\n", 'Z', ft_isalpha('Z'));
	printf("\tft_isalpha(%c) = %d\n", 'a', ft_isalpha('a'));
	printf("\tft_isalpha(%c) = %d\n", 'A', ft_isalpha('A'));
	printf("\tft_isalpha(%c) = %d\n", '`', ft_isalpha('`'));
	printf("_ft_isalpha_\n\n");
#endif

#ifdef _FT_ISDIGIT
	printf("_ft_isdigit_\n");
	printf("\tft_isdigit(%c) = %d\n", 42, ft_isdigit(42));
	printf("\tft_isdigit(%c) = %d\n", -42, ft_isdigit(-42));
	printf("\tft_isdigit(%c) = %d\n", 0, ft_isdigit(0));
	printf("\tft_isdigit(%c) = %d\n", '0', ft_isdigit('0'));
	printf("\tft_isdigit(%c) = %d\n", '9', ft_isdigit('9'));
	printf("\tft_isdigit(%c) = %d\n", 47, ft_isdigit(47));
	printf("\tft_isdigit(%c) = %d\n", 58, ft_isdigit(58));
	printf("\tft_isdigit(%c) = %d\n", '`', ft_isdigit('`'));
	printf("_ft_isdigit_\n\n");
#endif

#ifdef _FT_ISALNUM
	printf("_ft_isalnum_\n");
	printf("\tft_isalnum(%c) = %d\n", 42, ft_isalnum(42));
	printf("\tft_isalnum(%c) = %d\n", -42, ft_isalnum(-42));
	printf("\tft_isalnum(%c) = %d\n", 0, ft_isalnum(0));
	printf("\tft_isalnum(%c) = %d\n", '0', ft_isalnum('0'));
	printf("\tft_isalnum(%c) = %d\n", '9', ft_isalnum('9'));
	printf("\tft_isalnum(%c) = %d\n", 'z', ft_isalnum('z'));
	printf("\tft_isalnum(%c) = %d\n", 'A', ft_isalnum('A'));
	printf("\tft_isalnum(%c) = %d\n", '`', ft_isalnum('`'));
	printf("_ft_isalnum_\n\n");
#endif

#ifdef _FT_ISASCII
	printf("_ft_isascii_\n");
	printf("\tft_isascii(%c) = %d\n", -42, ft_isascii(-42));
	printf("\tft_isascii(%c) = %d\n", -128, ft_isascii(-128));
	printf("\tft_isascii(%c) = %d\n", 0, ft_isascii(0));
	printf("\tft_isascii(%c) = %d\n", '9', ft_isascii('9'));
	printf("\tft_isascii(%c) = %d\n", 'A', ft_isascii('A'));
	printf("\tft_isascii(%c) = %d\n", 58, ft_isascii(58));
	printf("\tft_isascii(%c) = %d\n", 127, ft_isascii(127));
	printf("\tft_isascii(%c) = %d\n", '`', ft_isascii('`'));
	printf("_ft_isascii_\n\n");
#endif

#ifdef _FT_ISPRINT
	printf("_ft_isprint_\n");
	printf("\tft_isprint(%c) = %d\n", 31, ft_isprint(31));
	printf("\tft_isprint(%c) = %d\n", 32, ft_isprint(32));
	printf("\tft_isprint(%c) = %d\n", 64, ft_isprint(64));
	printf("\tft_isprint(%c) = %d\n", 126, ft_isprint(126));
	printf("\tft_isprint(%c) = %d\n", 127, ft_isprint(127));
	printf("_ft_isprint_\n\n");
#endif

#ifdef _FT_TOUPPER
	printf("_ft_toupper_\n");
	printf("\tft_toupper(%c) = %c\n", '+', ft_toupper('+'));
	printf("\tft_toupper(%c) = %c\n", '3', ft_toupper('3'));
	printf("\tft_toupper(%c) = %c\n", 'R', ft_toupper('R'));
	printf("\tft_toupper(%c) = %c\n", 'f', ft_toupper('f'));
	printf("_ft_toupper_\n\n");
#endif

#ifdef _FT_TOLOWER
	printf("_ft_tolower_\n");
	printf("\tft_tolower(%c) = %c\n", '$', ft_tolower('$'));
	printf("\tft_tolower(%c) = %c\n", '!', ft_tolower('!'));
	printf("\tft_tolower(%c) = %c\n", 'R', ft_tolower('R'));
	printf("\tft_tolower(%c) = %c\n", 'f', ft_tolower('f'));
	printf("_ft_tolower_\n\n");
#endif

#ifdef _FT_PUTS
	printf("_ft_puts_\n");
	printf("\tft_puts(\"%s\") = %d\n", "K", ft_puts("K"));
	printf("\tft_puts(\"%s\") = %d\n", "hello worlds\n", ft_puts("hello worlds\n"));
	printf("\tft_puts(\"%s\") = %d\n", long_str, ft_puts(long_str));
	printf("\tft_puts(\"%s\") = %d\n", NULL, ft_puts(NULL));
	printf("\tft_puts(0) = %d\n", ft_puts(0));
	printf("_ft_puts_\n\n");
#endif

#ifdef _FT_STRLEN
	printf("_ft_strlen\n");
	printf("\tft_strlen(\"%s\") = %lu\n", "", ft_strlen(""));
	printf("\tft_strlen(\"%s\") = %lu\n", "1", ft_strlen("1"));
	printf("\tft_strlen(\"%s\") = %lu\n", "four", ft_strlen("four"));
	printf("\tft_strlen(\"%s\") = %lu\n", long_str, ft_strlen(long_str));
	printf("_ft_strlen\n\n");
#endif

#ifdef _FT_MEMSET
	printf("_ft_memset_\n");
	char memstr[] = "Chevaliers dla Tableuronde";
	printf("\tmemstr = \"%s\"\n", memstr);
	printf("\tft_strlen(memstr) = %lu\n", ft_strlen(memstr));
	printf("\tft_memset(memstr, '$', 0) = \"%s\"\n", ft_memset(memstr, '^', 0));
	printf("\tft_memset(memstr, '^', 26) = \"%s\"\n", ft_memset(memstr, '^', 26));
	printf("_ft_memset_\n\n");
#endif

#ifdef _FT_MEMCPY
	printf("_ft_memcpy_\n");
	char cpydst[] = "buvons un coup la la !";
	char cpysrc[] = "BUVONS EN 2222 LA LA !!!";
	printf("\tcpydst = \"%s\"\n", cpydst);
	printf("\tft_memcpy(cpydst, \"%s\", 0) = \"%s\"\n", "AU BON BAR", ft_memcpy(cpydst, "AU BON BAR", 0));
	printf("\tft_memcpy(cpydst, \"%s\", 14) = \"%s\"\n", cpysrc, ft_memcpy(cpydst, cpysrc, 14));
	printf("_ft_memcpy_\n\n");
#endif

#ifdef _FT_STRDUP
	printf("_ft_strdup_\n");
	char *dup_str;
	char *dups[3] = { "", "mais a 7 ans ON PERD SES DEEEEEEEEEENNNNTS !", "Je collectionne des canards par milliers" };
	printf("\tft_strdup(\"%s\") = \"%s\"\n", dups[0], (dup_str = ft_strdup(dups[0])));
	free(dup_str);
	printf("\tft_strdup(\"%s\") = \"%s\"\n", dups[1], (dup_str = ft_strdup(dups[1])));
	free(dup_str);
	printf("\tft_strdup(\"%s\") = \"%s\"\n", dups[2], (dup_str = ft_strdup(dups[2])));
	free(dup_str);
	printf("_ft_strdup_\n\n");
#endif

#ifdef _FT_CAT
	printf("_ft_cat_\n");
	int fd = open("test/test_cat.txt", O_RDONLY);
	printf("\tint fd = open(\"test_cat.txt\", O_RDONLY)\n");
	printf("\tft_cat(fd)\n");
	ft_cat(fd);
	printf("\tclose(fd)\n");
	close(fd);
	printf("_ft_cat_\n\n");
#endif

#ifdef _FT_ATOI
	printf("_ft_atoi_\n");
	printf("\tft_atoi(\"%s\") = %d\n", "32", ft_atoi("32"));
	printf("\tft_atoi(\"%s\") = %d\n", " \t -42", ft_atoi(" \t -42"));
	printf("\tft_atoi(\"%s\") = %d\n", " \t ,-42", ft_atoi(" \t ,-42"));
	printf("\tft_atoi(\"%s\") = %d\n", "+99_99", ft_atoi("+99_99"));
	printf("\tft_atoi(\"%s\") = %d\n", "-2147483648", ft_atoi("-2147483648"));
	printf("\tft_atoi(\"%s\") = %d\n", "2147483647", ft_atoi("2147483647"));
	printf("\tft_atoi(\"%s\") = %d\n", "", ft_atoi(""));
	printf("\tft_atoi(\"%s\") = %d\n", "H2O7L9A4", ft_atoi("H2O7L9A4"));
	printf("_ft_atoi_\n\n");
#endif

#ifdef _FT_ITOA
	printf("_ft_itoa_\n");
	printf("\tft_itoa(%d) = \"%s\"\n", -0, ft_itoa(-0));
	printf("\tft_itoa(%d) = \"%s\"\n", 9, ft_itoa(9));
	printf("\tft_itoa(%d) = \"%s\"\n", -9, ft_itoa(-9));
	printf("\tft_itoa(%d) = \"%s\"\n", 32, ft_itoa(32));
	printf("\tft_itoa(%d) = \"%s\"\n", -32, ft_itoa(-32));
	printf("\tft_itoa(%d) = \"%s\"\n", -3435, ft_itoa(-3435));
	printf("\tft_itoa(%d) = \"%s\"\n", INT32_MIN, ft_itoa(INT32_MIN));
	printf("\tft_itoa(%d) = \"%s\"\n", INT32_MAX, ft_itoa(INT32_MAX));
	printf("_ft_itoa_\n\n");
#endif

#ifdef _FT_ICLAMP
	printf("_ft_iclamp_\n");
	printf("\tft_iclamp(%d, %d, %d) = %d\n", 15, 0, 30, ft_iclamp(15, 0, 30));
	printf("\tft_iclamp(%d, %d, %d) = %d\n", 0, 15, 30, ft_iclamp(0, 15, 30));
	printf("\tft_iclamp(%d, %d, %d) = %d\n", 31, -100, 30, ft_iclamp(31, -100, 30));
	printf("\tft_iclamp(%d, %d, %d) = %d\n", -10, -40, -30, ft_iclamp(-10, -40, -30));
	printf("\tft_iclamp(%d, %d, %d) = %d\n", -30499, -30469, INT32_MAX, ft_iclamp(-30469, -30469, INT32_MAX));
	printf("_ft_iclamp_\n\n");
#endif

#ifdef _FT_STRCMP
	printf("_ft_strcmp_\n");
	printf("\tft_strcmp(\"%s\", \"%s\") = %d\n", "cheech and", "chong", ft_strcmp("cheech and", "chong"));
	printf("\tft_strcmp(\"%s\", \"%s\") = %d\n", "spoonGod*", "spoonGod", ft_strcmp("spoonGod*", "spoonGod"));
	printf("\tft_strcmp(\"%s\", \"%s\") = %d\n", "Bienvenue a Poil", "Bienvenue a poil", ft_strcmp("Bienvenue a Poil", "Bienvenue a poil"));
	printf("\tft_strcmp(\"%s\", \"%s\") = %d\n", "goon's dope", "goon's dope", ft_strcmp("goon's dope", "goon's dope"));
	printf("_ft_strcmp_\n\n");
#endif

#ifdef _FT_STRJOIN
	printf("_ft_strjoin_\n");
	char *join_str;
	printf("\tft_strjoin(\"%s\", \"%s\") = \"%s\"\n", "", "fear is not real", (join_str = ft_strjoin("", "fear is not real")));
	free(join_str);
	printf("\tft_strjoin(\"%s\", \"%s\") = \"%s\"\n", "but danger, danger is very real", "", (join_str = ft_strjoin("but danger, danger is very real", "")));
	free(join_str);
	printf("\tft_strjoin(\"%s\", \"%s\") = \"%s\"\n", "The only place that fear can exist...", " is in our thoughts of the future", (join_str = ft_strjoin("The only place that fear can exist...", " is in our thoughts of the future")));
	free(join_str);
	printf("_ft_strjoin_\n\n");
#endif

	return (0);
}
