/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Argument_Controls.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 03:43:17 by knarman           #+#    #+#             */
/*   Updated: 2024/05/10 03:43:17 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/time.h>

static int isNumeric(char *str)
{
    int i;
    i = 0;
    if(str[0] == '0')
        return (0);
    if(str[i] == '+')
        i++;
    while(str[i])
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return(1);
}

static int checkNumber(char **argv)
{
    int	i;

	i = 0;
	while (++i < 5)
	{
		if (ft_strlen(argv[i]) > 11)
			return (0);
		if (is_numeric(argv[i]))
			return (0);
	}
	if (!!argv[5])
	{
		if (ft_strlen(argv[i]) > 11)
			return (0);
		if (is_numeric(argv[5]))
			return (1);
	}
	return (0);
}



int argumentControl(int argc, char **argv)
{
    if(!(argc >= 5 && argc <=6))
        return (ERROR);
    if(!(checkNumber(argv)))
        return(ERROR);
    return (SUCCESS);
}

gettimeofday();