#!/usr/bin/python
def square_matrix_simple(matrix=[]):
    square = []
    for line in matrix:
        square.append([i**2 for i in line])
    return(square) 
