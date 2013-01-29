1) "Write a subroutine, function, or method that takes an array of characters
and returns an array of the same characters in reversed order with every consonant
between 'a' and 'z' lower cased and every vowel between 'a' and 'z' upper cased.
Prove your implementation works."

2) In C, create two threads (use printf, not NSLog to display the output). Both threads
will produce lines of output including the thread name and an incrementing number from 1 to 1000
(each thread should produce 1000 lines of output). Both threads should be running and producing numbers
to the output simultaneously; the iteration numbers do not need to line up. Each line of output
should include the thread name and the iteration number. The output may be placed on STDOUT
or to a file; your choice.
 
This is an example of the start of successful output:
 
Thread-1 1
Thread-2 1
Thread-1 2
Thread-1 3
Thread-1 4
Thread-2 2
 
And so on. Each line of output must be on a line of its own without ANY information
from another line of output. This, for example, is not acceptable:
 
Thread-1 Thread-2 1
1
Thread-1 2
 
This is considered corrupt data.
 
There are a number of ways you can solve this problem, and any of them count – as long as it solves the problem.
 
Ask questions if you have them!
 
For bonus, consider how you can test the code.
