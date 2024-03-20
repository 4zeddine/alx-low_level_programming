#!/usr/bin/python3
"""Defines the mesure function of an island."""


def island_perimeter(grid):
    """Returns the perimeter of the island

    Args:
        grid (list): list of ints representing an island.
    Returns:
        the parimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    corners = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    corners += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    corners += 1
    return size * 4 - corners * 2
