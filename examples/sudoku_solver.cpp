#include <iostream>
#include "../src/sudoku_generator.h"
#include "../src/sudoku_solver.h"
#include "../src/sudoku_validator.h"

int main()
{
    // Generate the puzzle
    sudoku::Grid generated_grid = sudoku::generate_puzzle();

    // Print the generated puzzle
    std::cout << "Generated Puzzle:\n"
              << generated_grid << std::endl;

    // Solve the puzzle
    sudoku::solve(&generated_grid);

    // Print the solved puzzle
    std::cout << "Solved Puzzle:\n"
              << generated_grid << std::endl;

    // Validate the solution
    if (sudoku::is_valid_solution(generated_grid))
    {
        std::cout << "Solution is valid!\n";
    }
    else
    {
        std::cout << "DEFCON 4! Something isn't working.\n";
    }

    return 0;
}
