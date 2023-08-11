#!/usr/bin/python3
import sys
if __name__ == "__main__":
    """prints the number of and the list of its arguments"""
    size = len(sys.argv) - 1
    if size == 0:
        print('{:d} argument'.format(0))
    elif size == 1:
        print('{:d} argument'.format(1))
    else:
        print('{:d} argument'.format(size))
        for i in range(size):
            print("{}: {}".format(i + 1, sys.argv[i + 1]))
