#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dir = a_dictionary.copy()
    key_list = list(new_dir.keys())
    for i in key_list:
        new_dir[i] *= 2
        return (new_dir)
