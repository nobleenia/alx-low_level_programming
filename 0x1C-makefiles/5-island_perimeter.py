#!/usr/bin/python3
"""
Module island_perimeter
"""


def island_perimeter(grid):
    """
    Calculate perimeter of grid where "1" is found
    """
    peri = 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                if row == 0 or grid[row - 1][column] == 0:
                    peri += 1  # top-side
                if row == (len(grid) - 1) or grid[row + 1][column] == 0:
                    peri += 1  # bottom-side
                if column == 0 or grid[row][column - 1] == 0:
                    peri += 1  # left-side
                if column == (len(grid[0]) - 1) or grid[row][column + 1] == 0:
                    peri += 1  # right-side
    return peri
