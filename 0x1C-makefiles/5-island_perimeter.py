#!/usr/bin/python3
'''returns the perimeter of the island
described in grid
'''

def island_perimeter(grid):
    '''calculates the perimeter of an
    island in a grid
    '''
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
