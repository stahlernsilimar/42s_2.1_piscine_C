/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemin <hemin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:19:39 by hemin             #+#    #+#             */
/*   Updated: 2020/07/07 15:27:27 by hemin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}
