# ICS 2175 – Laboratory 01 Report

## 1. Cover Information

- **Student Full Name:** Promise Macharia
- **Registration Number:** ENB211-0012/2025
- **Programme:** B.Sc In Agricultural And Biosystems Engineering 
- **GitHub Username:** miyyz
- **Assigned Scenario:** Stationery order cost
- **Variant ID:** V01
- **Date:** 20/11/2026

## 2. Objectives

Set up a working C development environment using Code::Blocks and the GCC compiler.

Write, compile, and run basic C programs using printf() and standard input/output headers.

Understand the core structural components of a C program (#include, main(), braces, statements, and return 0;).

Declare, initialize, and display variables of fundamental C data types (int, float, double, and char) with appropriate format specifiers.

Compute and display a deterministic personalised calculation (V01) based on a student registration number.

Track lab code changes and submit work using a GitHub workflow (fork, branch, commits, and pull request).

## 3. Software and Hardware Environment

- **Operating System:**Windows 11 Pro
- **IDE:** Code::Blocks version 25.03
- **Compiler:** GCC GNU Compiler
- **Hardware:** Intel(R) Pentium(R) Silver N5000 CPU @ 1.10GHz

## 4. Code::Blocks Installation and Configuration



## 5. Hello Kioto Implementation

In Exercise 1, the program prints a greeting (Hello, Kioto!) followed by an introductory statement about learning C on a new line using \n.

#include <stdio.h>

int main(void)
{
    printf("Hello, Kioto!\n");
    printf("I am learning the C programming language.\n");

    return 0;
}

Output:

Hello, Kioto!
I am learning the C programming language.

## 6. Explanation of C Program Structure

#include <stdio.h>: A preprocessor directive that includes the Standard Input/Output header file before compilation so functions like printf() are declared and available.

main() (int main(void)): The entry point where program execution begins. int indicates the function returns an integer status code, and void specifies that it takes no arguments.

Curly Braces ({ and }): Define the block boundaries of main(). Every statement inside { ... } belongs to the function body.

Statements: Individual instructions inside main(), such as printf(...), each terminated by a semicolon (;).

return 0;: Exits main() and returns 0 to the operating system to signal that the program completed successfully.

## 7. Variables and Data Types

In Exercise 2, four variables were declared and initialized with distinct data types and matched with printf() format specifiers:

int (student_count = 35): Stores whole numbers without fractional parts; formatted with %d.

float (average_score = 78.5f): Stores single-precision floating-point numbers; formatted with %f (or %.2f to limit output to two decimal places).

double (pi_precise = 3.141592653589793): Stores double-precision floating-point numbers with greater decimal precision than float; formatted with %lf (or %.10lf).

char (grade_letter = 'A'): Stores a single character enclosed in single quotes; formatted with %c.

## 8. Personalised Calculation

Using the registration number ENB211-0012/2025 with the variant lookup script, the assigned variant is:Variant ID: V01Scenario: Stationery order costInput Values: 25 (unit cost) and 6 (quantity)Operation: Multiplication ($25 \times 6$)Result & Output Label: Total cost: 150

Code:

#include <stdio.h>

int main(void)
{
    int unit_price = 25;
    int quantity = 6;
    int total_cost = unit_price * quantity;

    printf("Total cost: %d\n", total_cost);

    return 0;
}

Output:

Total cost: 150

## 9. Testing and Troubleshooting

Each program was compiled using Build and Run in Code::Blocks, checking both the compiler build log for warnings/errors and the console window for accurate output.

Issue Encountered 1: [e.g., Compiler reported an expected ; error or a format specifier warning when printing a floating-point variable with %d.]

Resolution: [e.g., Added the missing semicolon on the preceding line / updated the format specifier to %.2f to match the double variable.]

Issue Encountered 2: [e.g., Compiler executable not found on initial launch.]

Resolution: [e.g., Clicked "Auto-detect" under Compiler Toolchain Executables to link the MinGW bin directory.]

## 10. GitHub Workflow

Fork: Forked the course laboratory repository into my personal GitHub account ([miyyz]).

Branch: Cloned the forked repository locally and created a dedicated working branch (git checkout -b [student/ENB211-0012/2025/lab01]).

Commits: Staged and committed my C source files and completed lab report using descriptive commit messages (git add . followed by git commit -m "[commit message]").

Pull Request: Pushed the branch to my GitHub fork (git push origin [student/ENB211-0012/2025]) and opened a Pull Request against the base repository for submission.

## 11. Screenshots

[Code::Blocks 25.03 IDE displaying the Kioto_C_lab01 project in the workspace management panel.](<../screenshots/photo 1.png>)  
[Code::Blocks 25.03 editor view of main.c with the initial greeting program (Hello, kioto!) and build log panel.](<../screenshots/photo 2(A).png>)  
[Console execution output (Kioto_C_lab01.exe) displaying Hello, kioto! and I am learning the C programming language. with exit status 0.](<../screenshots/photo 2.png>)
[Code::Blocks 25.03 editor and build log showing the updated greeting (Hello guys!), programme statement (B.Sc. in Agricultural And Biosystems Engineering), and GNU GCC MinGW toolchain execution.](<../screenshots/photo 3.png>)
[Console output displaying Hello guys! and I am pursuing B.Sc. in Agricultural And Biosystems Engineering.](<../screenshots/photo 4.png>) 
[Code::Blocks 25.03 editor showing the rectangular plot calculation (plot_length = 48, plot_width = 13, plot_area = plot_length * plot_width). ](<../screenshots/photo 5.png>)  
[Console output for the initial plot calculation (48 * 13) showing Plot area (sq m): 624. !](<../screenshots/photo 6.png>)
[Code::Blocks 25.03 editor and build log showing plot_width updated to 15, plot_category = 'A', and a clean build (0 error(s), 0 warning(s)) using gcc.exe -Wall -g. ](<../screenshots/photo 7.png>) 
[Console output after updating plot_width to 15 and adding plot_category = 'A', showing Plot area: 720 sq m and the combined summary sentence.](<../screenshots/photo 8.png>)

## 12. Individual Reflection

What I Learned: I learned how a C source file is compiled into an executable using GCC, how core structural components (#include, main(), statements, braces, and return 0;) work together, how format specifiers map to data types, and how to manage lab deliverables with branches and pull requests on GitHub.

Challenges Faced: [e.g., Ensuring format specifiers matched variable types without compiler warnings, and keeping track of branch naming and PR steps on GitHub.]

Improvements for Next Time: [e.g., Compile incrementally after writing small sections of code, verify all format specifiers carefully, and capture screenshots immediately after each milestone.]

## 13. Conclusion

Laboratory 01 established the foundational workflow for writing, compiling, and verifying C programs in ICS 2175. Through Exercises 1 to 3 and Variant V01, the lab covered basic output formatting, primitive data types, arithmetic expressions, and version control practices on GitHub.