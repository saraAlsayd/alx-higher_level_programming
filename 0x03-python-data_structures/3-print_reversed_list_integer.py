#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list > 0:
        for x in reversed(my_list):
            print('{:d}'.format(my_list[x]))
    else:
        return None
