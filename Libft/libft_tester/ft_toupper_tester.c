/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05-ft_toupper_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:57:59 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:33:47 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	char	u1;
	char	u2;
	int		c;

	if (argc == 2)
	{
		c = argv[1][0];
		u1 = ft_toupper(c);
		u2 = toupper(c);
		printf("\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("+	Comparison Results	+\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("|  %sft_toupper%s   |    %stoupper	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_toupper() vs toupper() %s\n", YE, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("|		|		|\n");
		printf("|	%s%c%s	|	%s%c%s	|", BU, c, CR, BU, c, CR);
		printf("%s<-- The character input.%s %s<lowercase char>%s\n", YE, CR, GR, CR);
		printf("|		|		|\n");
		printf("|	%s%c%s	|	%s%c%s	|", GR, u1, CR, GR, u2, CR);
		printf("%s<-- Result.%s %s<UPPERCASE char>%s\n", YE, CR, GR, CR);
		printf("|		|		|\n");
		printf("|      %s[%d]%s	|      %s[%d]%s	|", GR, u1, CR, GR, u2, CR);
		printf("%s<-- The return value.%s %s<ascii decimal value>%s\n",
			YE, CR, GR, CR);
		printf("|               |               |\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("\n");
	}
	else
		printf("Usage: %s < ><-- one element argument.\n", argv[0]);
	return (0);
}