# C Preprocessor – Source Code Processing Tool

A C-based implementation of a simplified preprocessor that performs essential source code transformations before compilation. The project covers comment handling, header inclusion, and macro expansion through a modular implementation.

## Project Introduction

Before a C program reaches the compiler, its source code undergoes a preprocessing stage. During this stage, directives are handled, comments are removed, header files are included, and macros are substituted.

This project recreates these fundamental operations using C programming. It accepts a source file, processes its contents through different preprocessing stages, and produces a modified output file.

The implementation makes use of core C concepts, including pointers, dynamic file handling, character manipulation, string operations, and function-based modular design.

## Implemented Functionalities

### 1. Source Code Comment Handling

The comment processing module identifies and removes comments from the input program.

- Detects and eliminates `//` single-line comments.
- Handles `/* ... */` multi-line comments.
- Preserves the multi-line comment status while processing consecutive lines.

### 2. Header Processing

This module handles header inclusion directives present in the source code.

- Recognizes `#include` statements.
- Processes headers specified using double quotes.
- Handles headers enclosed within angle brackets.
- Supports recursive processing of included header files.
- Integrates the contents of included files into the resulting source code.

### 3. Macro Expansion

The macro processing module performs substitutions based on previously defined macros.

- Handles object-like macros without parameters.
- Supports function-like macros with parameters.
- Maintains macro identifiers and their corresponding replacement expressions.
- Extracts formal parameters from macro declarations.
- Identifies actual arguments supplied during macro invocation.
- Substitutes formal parameters with their respective actual arguments.

## Directory Layout

```text
project_preprocessor/
│
├── main.c
├── file_processing.c
├── comment_removal.c
├── macro_replacement.c
├── header.h
│
├── ctype.h
├── math.h
├── stdio.h
├── stdlib.h
├── string.h
├── unistd.h
│
└── README.md
```

## Preprocessing Sequence

The program follows the sequence below to transform the input source file:

```text
          Source File
               |
               v
      Initial File Handling
               |
               v
       Comment Processing
               |
               v
       Header Expansion
               |
               v
        Macro Expansion
               |
               v
       Processed Output
```

## Module Description

| File | Purpose |
|---|---|
| `main.c` | Program entry point and handling of command-line inputs |
| `file_processing.c` | Manages file reading, header processing, and overall preprocessing coordination |
| `comment_removal.c` | Implements removal of single-line and multi-line comments |
| `macro_replacement.c` | Maintains macro definitions and performs macro substitutions |
| `header.h` | Contains shared declarations and function prototypes |

## Demonstration

### Input Program

```c
#define A 10
#define B 20
#define ADD(x,y) x+y

// Single-line comment

int main()
{
    int a = A;
    int b = B;
    int sum = ADD(a,b);

    /*
       Multi-line comment
    */

    return 0;
}
```

### Result After Preprocessing

```c
int main()
{
    int a = 10;
    int b = 20;
    int sum = a+b;

    return 0;
}
```

The output illustrates how comments are removed and macro references are substituted with their corresponding replacement values.

## Building and Running

### 1. Download the Repository

```bash
git clone https://github.com/pradeep934436/project_preprocessor.git
```

### 2. Enter the Project Directory

```bash
cd project_preprocessor
```

### 3. Build the Executable

Compile the required source files using GCC:

```bash
gcc main.c file_processing.c comment_removal.c macro_replacement.c -o preprocessor
```

### 4. Run the Preprocessor

**Linux:**

```bash
./preprocessor input.c output.c
```

**Windows:**

```bash
preprocessor.exe input.c output.c
```

After successful execution, the transformed C source code will be available in the specified output file.

## C Concepts Utilized

- C fundamentals and modular programming.
- File operations and file pointer management.
- String manipulation and character processing.
- Pointer arithmetic and memory handling.
- Arrays and multidimensional arrays.
- Function declarations, definitions, and calls.
- Recursive processing of files.
- Character classification using `ctype.h`.
- Command-line argument handling.

## Current Constraints

This implementation focuses on fundamental preprocessing operations rather than reproducing the complete functionality of the standard C preprocessor.

The following advanced capabilities are currently outside the scope of the implementation:

- Conditional compilation directives.
- Macro removal using `#undef`.
- Complete nested macro expansion.
- Stringification using `#`.
- Token concatenation using `##`.
- Variadic macro support.

## Possible Improvements

- Adding support for conditional directives such as `#ifdef`, `#ifndef`, and `#if`.
- Implementing the `#undef` directive.
- Enhancing support for nested macro expansion.
- Introducing macro stringification and token-pasting operations.
- Improving the handling and validation of macro arguments.

## Repository

**GitHub:** [project_preprocessor](https://github.com/pradeep934436/project_preprocessor)

---

*This project explores the internal stages of C source code preprocessing through a modular implementation, providing practical exposure to file operations, memory handling, and source code manipulation using C.*
