/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyoo <euyoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:23:56 by euyoo             #+#    #+#             */
/*   Updated: 2020/10/18 21:51:33 by euyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	first_and_last_line(int row);
void	mid_line(int row, int col);

void	rush(int row, int col)
{
	if (row > 0 && col > 0)
	{
		first_and_last_line(row);
		mid_line(row, col);
		first_and_last_line(row);
	}
}

void	first_and_last_line(int row)
{
	int i;

	ft_putchar('o');
	i = 2;
	while (i < row)
	{
		ft_putchar('-');
		i++;
	}
	if (row > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	mid_line(int row, int col)
{
	int i;
	int j;

	j = 2;
	while (j < col)
	{
		ft_putchar('|');
		i = 2;
		while (i < row)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		j++;
	}
}
