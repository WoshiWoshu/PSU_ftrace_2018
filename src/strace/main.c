/*
** EPITECH PROJECT, 2019
** strace
** File description:
** main.c
*/

#include "strace.h"

int run_strace(char **av)
{
    if (!strcmp(av[1], "-p") && av[2])
        return (strace_p(av));
    else
        strace(av);

    return (0);
}
