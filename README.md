## C-Reverse

Small C/++ projects which help to spot default structures and functions in binary.

## Getting Started

To get started:

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/BitR13x/C-Reverse.git
   ```

2. Navigate to the project directory:

   ```bash
   cd C-Reverse
   ```

3. Compile the project using gcc:
   ```bash
   gcc -o myprogram myprogram.c
   ```

## Running the Program

After compiling the project, you can run the executable:

```bash
./myprogram
```

## Debugging with GDB

To debug your program using GDB, follow these steps:

1. Launch GDB:

   ```bash
   gdb ./myprogram
   ```

2. Set breakpoints at specific lines using `break` or `b` command:

   ```gdb
   break *main+15
   ```

3. Start the program's execution:

   ```gdb
   run
   ```

4. Use commands like `step`, `next`, and `continue` to navigate through your code.

5. Examine an adress or register using `x` command:

   ```gdb
   x/wx $rbp
   ```

6. Inspect variables using `print` or `p` command:

   ```gdb
   print my_variable
   ```

7. When you're done debugging, exit GDB:
   ```gdb
   quit
   ```

## References

GDB cheetsheet

- https://gist.github.com/shekkbuilder/8b52e2cf4142c35ba6de#file-gdbcomm-txt-L6

GDB cheetsheet v2

- https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf

GCC cheetsheet

- https://lzone.de/cheat-sheet/GCC

## License

This project is licensed under the MIT License.

Happy reverse engineering and coding!
