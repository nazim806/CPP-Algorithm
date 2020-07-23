# CPP-Algorithm

**Recursion**

Recursion is a method (procedure) where the solution to a problem depends on solutions to smaller instances of the same problem, so we break the task into smaller subtasks. The approach can be applied to many types of problems and recursion is one of the central ideas of computer science. We have to define base cases in order to avoid infinite loops. We can solve problems with recursion or with iteration  so we can transform recursion into iteration and vice versa. 

**Tail recursion:** If the recursion occurs at the end of a function then it is called a tail recursion. Tail recursion is similar to a loop (for loop or a while loop). This method executes all the statements before jumping into the next recursive call.

**Head recursion:** If the recursive call occurs at the beginning of a function then it is called a head recursion. The method saves the state before jumping into the next recursive call which means that head recursion needs more memory because we have to store the states of the actual function calls.


**Factorial**

**Fibonacci numbers**

**Towers of Hanoi**
 It consists of three rods and number of discs of different sizes which can slide onto any rod. The puzzle starts with the discs in a neat stack in aacending order of size on one rod, the smallest at the rod, thus making a conical shape. The minimum number of moves to solve a Tower of Hanoi problem is 2^n - 1 or O(2^n) exponential time complexity.
 
 The rules for Tower of Hanoi: only one disc can be moved at a time. Each moves consists of taking the upper disc from one of the stacks and placing it on top of another stack i.e., a disk can only be moved if it is the uppermost disk on a stack. No disc may be placed on top of a smaller disc.


**Backtracking:** 
Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time. It is a form of recursion, a general algorithm for finding all solutions to some computational problems known as 'constraint satisfaction problems'.

**N-Queen problem:** N Queen is the problem of placing N chess queens on an N X N chessboard so that no two queens attack each other.
