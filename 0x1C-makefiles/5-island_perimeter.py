#!/usr/bin/python3
"""Return perimeter of island defined in grid."""

def island_perimeter(grid):
    """Return perimeter of island.
    
    Args:
        grid (list): list of integers
    """
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0
    
    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (a > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2