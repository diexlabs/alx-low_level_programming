#!/usr/bin/python3
'''Defines an island perimeter measuring function.'''

def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    if width > 100 or height > 100:
        raise ValueError()

    for y in range(height):
        for x in range(width):
            if grid[y][x] == 1:
                perimeter += 4
                if y != 0 and grid[y - 1][x] == 1:
                    perimeter -= 2
                if x != 0 and grid[y][x - 1] == 1:
                    perimeter -= 2
    return perimeter
