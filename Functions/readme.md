# Functions
- Functions are subroutines or procedures that break a large program into small chunks of reusable code.
- A function can be called multiple times to provide reusability and modularity to the program.
- With the help of functions, program can be divided among fellow prorammers.
- Debugging is simplified.

### Why Functions
Two major reasons to use functions
- **Abstraction** 

If you are using a function in your program then you do not have to worry about how it works internally.

- **Reusability** 

Once the function is defined, it can be called over and over again. 

## Types of functions
- **User Defined**
- **Library functions**

## Categorization of User Defined Functions
User defined functions in C programming can be categorised into 4 major types.
- Function with arguments and with return value.
- Function with arguments and without return value.
- Functions without arguements and with return value
- Function without arguements and without return value.

## Recursion
- Recursive functions or Recursion is a process when a function calls itself until solution is derived.
- A termination condition has has to be imposed on recursive function to stop them executing itself forever.
- A value at which the function does not recurr itself is called base value. 

  **Note** that any problem that can be solved *recursively*, can also be solved *iteratively*. 
  
 ### Is recursion always good?
 **No.**
 Some problems are best suited to be solved with recursion, but not every problem has to be nesccessarily solved through recursion. Sometimes recursion creates unneccesary time complexities by making mutiple calls. Iterative approach shall be followed during such scenarios.
 
 *For Instance*
 
 - **Factorial** problem can be solved using recursion, where **"!n = n * !(n-1)"**
 
 - **Fibonacci** series is an example where iteration is better than recursion.



# Index
### Read in order
| Problem      | Description |
| ----------- | ----------- |
| [1. functions.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/factorialfunc.c)      | 4 categories of functions explained.       |
| [2. factorialfunc.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/functions.c)      | Function to return factorial of a number       |
| [3. decimal2hex.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/decimal2hex.c)      | Decimal number to hexadecimal    |

| [4. poweroffunc.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/poweroffunc.c)      | function takes two arguments (mantissa and power) and, returns the power raised to the mantissa      |
| [5. factorialrecursion.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/factorialrecursion.c)      | A simple recursive function to return factorial of a number     |
| [6. recursion.c](https://github.com/WatashiwaSid/c-dev/blob/main/Functions/recursion.c)      | A simple recursive function to add first n positive integers      |

