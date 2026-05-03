### Exercise 21.05

The `islower` function, which belongs to the `<ctype.h>` header, tests whether a
character is a lower-case letter. Why would the following macro version of
`islower` not be legal, according to the C standard (You may assume that the
character set is ASCII)?

```c
#define islower(c) ((c) >= 'a' && (c) <= 'z')
```

