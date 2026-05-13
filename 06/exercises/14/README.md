### Exercise 6.14
Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even\n");
```

### Answers

if (n % 2 == 0) //rogue semicolon
    printf("n is even\n");
