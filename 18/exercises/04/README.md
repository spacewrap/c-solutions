### Exercise 18.04

Let `f` be the following function. What will be tha value of `f(10)` if `f` has
never been called before? What will be the value of `f(10)` if `f` has been
called five times previously?

```c
int f(int i)
{
    static int j = 0;
    return i * j++;
}
```

