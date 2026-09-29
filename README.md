# Structured_programming_github_practice
B39095 Uyenykeu Shalom Peace
# C Programming Exercises

This repository contains eight small C programs built as separate Code::Blocks projects. Textbook references below are based only on information present in the project names or source files. References shown as not recorded should be checked against the original assignment before submission; numeric suffixes in project names are treated as tentative chapter/exercise identifiers.

## Exercise 1 - Sum of Multiples of 7

**Category:** Basic loops and accumulation  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter and exercise not recorded in the project or source.  
**What the program does:** Prints every multiple of 7 from 1 through 100, then prints their sum.  
**Concepts used:** `for` loop, `if` condition, modulo operator, integer accumulator, `printf`.  
**How it works:** The loop checks each integer from 1 to 100. When the remainder after division by 7 is zero, the number is printed and added to `sum`.

**Example run:**

```text
7 14 21 28 35 42 49 56 63 70 77 84 91 98
Sum of multiples of 7 from 1 to 100 is: 735
```

## Exercise 2 - Ticket Number Acknowledgement

**Category:** Basic input and output  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 26 (inferred from the project name `Basic Output-2.26`; verify against the assignment).  
**What the program does:** Prompts for a ticket number and prints a brief thank-you message.  
**Concepts used:** Variable declaration, `scanf`, `printf`.  
**How it works:** The program displays a ticket-number prompt, attempts to read a number, and then prints its acknowledgement. The current `scanf` format string is invalid for standard C input, so the ticket number may not be read correctly; correct the format before relying on the input.

**Example run (intended interaction):**

```text
Enter your Ticket number:12345
Thank you for choosing us
```

## Exercise 3 - Mortgage Monthly Payment Estimate

**Category:** Decision and financial arithmetic  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 17 (inferred from the project name `Decision_3.17`; verify against the assignment).  
**What the program does:** Calculates an estimated monthly payment using a mortgage amount, term in years, and annual interest rate.  
**Concepts used:** Floating-point arithmetic, input/output, simple-interest calculation, conversion from annual term to months.  
**How it works:** The intended calculation finds simple interest as amount times rate times years, adds it to the principal, and divides the total by the number of months. The current code uses `%d` with `float` variables in `scanf`, which is a type mismatch and can produce unreliable results; the example below shows the intended calculation, not guaranteed output from the current source.

**Example run (intended calculation):**

```text
Enter mortgage amount in dollars:120000
Enter mortgage term (in years):30
Enter interest rate:5
The Monthly Payable Interest is:833.33
```

## Exercise 4 - Convert Elapsed Seconds

**Category:** Basic input, processing, and output  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 20 (inferred from the project name `Input _process_output-2.20`; verify against the assignment).  
**What the program does:** Converts a total number of elapsed seconds into hours, minutes, and remaining seconds.  
**Concepts used:** Integer division, modulo operator, integer variables, `scanf`, `printf`.  
**How it works:** The remainder after division by 60 gives the seconds. The remainder after division by 3600, divided by 60, gives the minutes. Dividing the total by 3600 gives whole hours.

**Example run:**

```text
Enter time elasped in seconds:3661
Your exact time is 1:1:1
```

## Exercise 5 - Stop the Loop Before 5

**Category:** Loop control and console output  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter and exercise not recorded in the project or source.  
**What the program does:** Prints the values before 5, then reports that the loop stopped when its counter reached 5.  
**Concepts used:** `for` loop, compound loop condition, `if`/`else`, flag variable, `printf`.  
**How it works:** The loop prints values while the counter is at most 10 and the `broke_out` flag is zero. At 5, the program sets the flag instead of printing the value. The loop increment then advances the counter to 6, where the condition fails, and the program reports that value.

**Example run:**

```text
1 2 3 4
Broke out at x == 6
```

## Exercise 6 - Sums, Squares, and Cubes

**Category:** Loops and arithmetic accumulation  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter and exercise not recorded in the project or source.  
**What the program does:** For a user-provided upper bound, calculates the sum of the natural numbers from 1 through that value, along with the sums of their squares and cubes.  
**Concepts used:** User input, `for` loop, integer arithmetic, multiple accumulators, `long` values.  
**How it works:** Each loop iteration adds the current number, its square, and its cube to separate totals. After the loop, the program prints all three totals.

**Example run:**

```text
Enter any number: 5

From 1 to 5:
Sum = 15
Sum of squares = 55
Sum of cubes = 225
```

## Exercise 7 - Validated Star Diamond

**Category:** Input validation and nested loops  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter and exercise not recorded in the project or source.  
**What the program does:** Draws a centered diamond made of asterisks whose widest row has the user-selected odd width.  
**Concepts used:** `while` loop, input validation, nested `for` loops, integer arithmetic, formatted output.  
**How it works:** The program repeats the prompt until the input is odd and between 1 and 19 inclusive. It then prints rows whose star counts increase by two up to the requested width and decrease by two back to one, adding leading spaces to center each row.

**Example run:**

```text
Enter an odd number from 1 to 19: 5
  *
 ***
*****
 ***
  *
```

## Exercise 8 - Revised Credit Limits

**Category:** Repetition, input, and decision-making  
**Textbook reference:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter and exercise not recorded in the project or source.  
**What the program does:** Processes three customers, halves each customer's previous credit limit, and reports whether the current balance is within that new limit.  
**Concepts used:** Fixed-count `for` loop, floating-point input and arithmetic, `if`/`else`, formatted currency output.  
**How it works:** For each of three customers, the program reads an account number, previous limit, and current balance. It calculates half the previous limit, then compares the balance with that new limit and reports either the excess or the available credit.

**Example run:**

```text
--- Customer 1 ---
Enter account number: 1001
Enter credit limit BEFORE recession: 1000
Enter current balance: 450

Account: 1001
New credit limit: $500.00
Status: Credit OK. Available credit: $50.00

--- Customer 2 ---
Enter account number: 1002
Enter credit limit BEFORE recession: 2000
Enter current balance: 1200

Account: 1002
New credit limit: $1000.00
Status: CREDIT LIMIT EXCEEDED! Balance is $200.00 over limit.

--- Customer 3 ---
Enter account number: 1003
Enter credit limit BEFORE recession: 1200
Enter current balance: 300

Account: 1003
New credit limit: $600.00
Status: Credit OK. Available credit: $300.00
```
