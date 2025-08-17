# PPP Supercalculator

My first university project completed in 2023 - this was my first experience with the C++ programming language. The project involves solving 10 mathematical subproblems without using built-in library functions.

## Project Description

The assignment consists of 10 mathematical subproblems, each of which must be solved as a separate function. **Key constraint**: using built-in functions such as `min`, `max`, `sort`, etc. is forbidden (penalty: -90% points).

## Subproblems

### Simple (without additional tests)

**0) Find positions containing the minimum value**
- Returns the position (index) of the smallest element in the sequence

**1) Sort the input sequence of numbers**
- Sorts the sequence in ascending order
- **Requirement**: must use the function from subproblem 0)

**2) Find the Euclidean length of a vector**
- Calculates the Euclidean norm: √(x₁² + x₂² + ... + xₙ²)

**3) Find the standard deviation**
- Calculates the standard deviation for a sequence of numbers
- **Requirement**: must use the function from subproblem 2)

**4) Reverse the sequence in place**
- Reverses the order of elements using only one array

### More difficult (with additional tests)

**5) Check if a number is prime**
- Returns 1 if the number is prime, 0 otherwise

**6) Find the area of a convex polygon**
- Calculates the polygon area based on vertex coordinates
- Points stored as an array of structures

**7) Solve quadratic and cubic equations**
- Quadratic equation: 50% points
- Cubic equation: full points

**8) Calculate the value of expression**
- Computes: 1²·2² + 2²·3² + 3²·4² + ... + n²·(n+1)²

**9) Count set bits**
- Counts the number of bits set to 1 in an unsigned natural number

## Input and Output Format

### Input
Each line contains:
- First element: subproblem number (0-9)
- Second element: number of following input data
- Subsequent elements: input data separated by spaces

### Output
- One line per subproblem with the solution
- For number sequences: elements separated by spaces
- For real numbers: floor of the result
- For yes/no questions: 1 (true) or 0 (false)

## Usage Example

### Input:
```
0 4 8 3 2 5
1 6 4 2 2 5 1 12 
2 2 3 4
3 3 1 2 3
4 6 4 2 2 5 1 12 
5 3 7 4 5
6 8 0 0 0 2 2 2 2 0
7 4 0 1 2 1
8 1 2
9 1 5
```

### Output:
```
3
12 5 4 2 2 1
5
0
12 1 5 2 2 4
1 0 1
4
-1
22
2
```

## Technical Notes

- All algorithms must be implemented from scratch
- No use of standard libraries for mathematical functions
- Project served as an introduction to C++ programming
- Focus on understanding fundamental algorithms and data structures

## Implementation Requirements

- **No built-in functions**: Custom implementation required for all operations
- **Function dependencies**: Some subproblems must use functions from previous ones
- **Memory management**: Efficient use of arrays and basic data structures
- **Mathematical precision**: Proper handling of floating-point calculations

## Learning Outcomes

This project provided hands-on experience with:
- Basic C++ syntax and structure
- Algorithm implementation without library dependencies
- Mathematical problem-solving in programming
- Memory management and array manipulation
- Function design and modular programming

## Project Status

✅ Project completed in 2023  
- First contact with C++ language  
- University coursework assignment  
- All 10 subproblems implemented from scratch