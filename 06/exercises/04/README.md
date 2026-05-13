### Exercise 6.04
Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `for (i = 0; i < 10; i++)` ...  
(b) `for (i = 0; i < 10; ++i)` ...  
(c) `for (i = 0; i++ < 10; )` ...

### Answers
(c) - because `i` is always compared against its old value, changing the value of `i` in the loops compared to (a) and (b).
