#!/usr/bin/python3
"""Island perimeter function"""


def island_perimeter(grid):
    """Returns island perimeter


    Args:
        grid(list): list of int
    Returns:
        island perimeter
    """
    line = 0
    h = len(grid)
    w = len(grid[0])
    size = 0

    for i in range(h):
        for k in range(w):
            if grid[i][k] == 1:
                size += 1
                if (k > 0 and grid[i][k - 1] == 1):
                    line += 1
                if (i > 0 and grid[i - 1][k] == 1):
                    line += 1
    return size * 4 - line * 2
