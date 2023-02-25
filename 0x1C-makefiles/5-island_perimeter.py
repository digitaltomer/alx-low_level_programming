#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, k, j):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if k <= 0 or not grid[k - 1][j]:
        num += 1
    if j <= 0 or not grid[k][j - 1]:
        num += 1
    if j >= len(grid[k]) - 1 or not grid[k][j + 1]:
        num += 1
    if k >= len(grid) - 1 or not grid[k + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for k in range(len(grid)):
        for j in range(len(grid[k])):
            if grid[k][j]:
                perimeter += num_water_neighbors(grid, k, j)

    return perimeter
