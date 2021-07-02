#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island described in grid:
        Grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water, and there is one
        island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t connected
        to the water around the island).
    """
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:

                if i <= 0:
                    per += 1
                elif grid[i - 1][j] != 1:
                    per += 1

                if j <= 0:
                    per += 1
                elif grid[i][j - 1] != 1:
                    per += 1

                if i >= (len(grid) - 1):
                    per += 1
                elif grid[i + 1][j] != 1:
                    per += 1

                if j >= (len(grid[0]) - 1):
                    per += 1
                elif grid[i][j + 1] != 1:
                    per += 1
    return per
