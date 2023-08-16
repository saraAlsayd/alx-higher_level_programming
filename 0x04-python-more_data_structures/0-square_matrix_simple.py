#!/usr/bin/python
def square_matrix_simple(matrix=[]):
    matrix1 = []
    for line in matrix:
        matrix1.append([i**2 for i in line])
    return(matrix1)
