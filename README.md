# Well-formed expression checker
We would like to write a program to tell whether expressions made up of pa-renthèses, brackets and accolades are well-formed.
brackets and braces are well formed: the algorithm scans the string and determines whether
determines whether there's a balance (and in the right order) between the opening parentheses “(” and fer-
brackets “[” and closing brackets “]”, opening braces “{” and closing braces “}”,
opening bars “|” and closing bars “|”.

**Example:**
- The expression `(1 + 2)| + 3` is incorrectly formed because there is an extra closing parenthesis.
- The expression `{[(1 + 2) + 3] + 13}` is well-formed.

## 1. Resolution principle. 
Describe (on paper and in no more than 5 lines) how such a program can be written using the stack data structure.

## 2. Data structure. 
Propose a stack data structure using an array. The following constraints must be respected:
<br><br>
(a) the stack type must be : PileTab_t<br>
(b) the primitives must be called :

- i. **pushTab**(char c, PileTab_t* P), for stacking
- ii. **char pullTab**(PileTab_t* P), to unstack
- iii. **char headTab**(PileTab_t* P), for the top of the stack
- iv. **initTab**(PileTab_t* P), to initialize the stack
- v. **isEmptyTab**(PileTab_t P), to determine whether the stack is empty
- vi. **isPlentyTab**(PileTab_t P), to determine whether the stack is full.

## 4. Verification program.
- (a) Write (on paper) the algorithm for checking well-formed expressions.
- (b) Write the C procedure corresponding to this algorithm. You are required to use alternative structures switch - case.
- (c) Write the main program that reads a set of expressions (string of characters) in a file and checks whether these expressions are well-formed.
