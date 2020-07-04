#!/usr/bin/python3
def island_perimeter(grid):
    max_col = len(grid[0])
    max_row = len(grid)
    perimeter = 0

    for i in range(0, max_row - 1):
        for j in range(0, max_col - 1):
            if grid[i][j] == 1:
                if i-1 < 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i+1 == max_row - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j-1 < 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j+1 == max_col - 1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
