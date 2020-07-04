#!/usr/bin/python3
"""Module for the island_perimeter method"""


def island_perimeter(grid):
    """methos for calculate island perimeter"""
    max_col = len(grid[0])
    max_row = len(grid)
    perimeter = 0

    for i in range(0, max_row):
        for j in range(0, max_col):
            if grid[i][j] == 1:
                if i == 0:
                    perimeter += 1
                elif grid[i-1][j] == 0:
                    perimeter += 1
                if i == max_row - 1:
                    perimeter += 1
                elif grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0:
                    perimeter += 1
                elif grid[i][j-1] == 0:
                    perimeter += 1
                if j == max_col - 1:
                    perimeter += 1
                elif grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
