#!/usr/bin/python3
""" calculates the perimeter """

def num_water_neighbors(grid, row, col):
    """
    Count the number of water neighbors around a cell (row, col) in the grid.

    Args:
    - grid (list of lists): The 2D grid representing the island.
    - row (int): Row index of the cell.
    - col (int): Column index of the cell.

    Returns:
    - int: Number of water neighbors.
    """
    num_col = 0

    if row <= 0 or not grid[row - 1][col]:
        num_col += 1
    if col <= 0 or not grid[row][col - 1]:
        num_col += 1
    if col >= len(grid[row]) - 1 or not grid[row][col + 1]:
        num_col += 1
    if row >= len(grid) - 1 or not grid[row + 1][col]:
        num_col += 1

    return num_col


def island_perimeter(grid):
    """
    Calculate the perimeter of the island represented by the grid.

    Args:
    - grid (list of lists): The 2D grid representing the island.

    Returns:
    - int: The perimeter of the island.
    """
    qual = 0

    for k in range(len(grid)):
        for l in range(len(grid[k])):
		
            if grid[k][l]:
                qual += num_water_neighbors(grid, k, l)

    return qual
