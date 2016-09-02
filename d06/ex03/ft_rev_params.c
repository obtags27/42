/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaggard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 20:17:03 by ttaggard          #+#    #+#             */
/*   Updated: 2016/08/17 22:33:18 by ttaggard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int i;
	int j;

	j = argc - 1;
	if (argc >= 2)
	{
		while (j > 0)
		{
			i = 0;
			while (argv[j][i] > 0)
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j--;
		}
	}
}