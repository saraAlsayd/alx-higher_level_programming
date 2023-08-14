#!/usr/bin/python3
#0-print_list_integer.py

def print_list_integer(my_list=[]):
        for i in range(len(my_list)):
            str('{:d}'.format(my_list[i]))
