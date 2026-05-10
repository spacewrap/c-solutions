### Exercise 5.05
Is the following `if` statement legal?

```c
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 0?

### Answers

Yes, it is legal but it will always produce true. Because 0 >= 1 = 0 (false), and 0 <= 10 = 1 (true).
And even if `n = 50`: 50 >= 1 = 1 (true), 1 <= 10 = 1 (true).

