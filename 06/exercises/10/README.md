### Exercise 6.10
Show how to replace a `continue` statement by an equivalent `goto` statement.

### Answers
`continue`
for(i = 10; i; i--){
    if (x == 0){
        continue;
    }
    x--;
    printf("%d", i);
}

`goto`
for(i = 10; i; i--){
    if (x == 0){
        goto done;
    }
    x--;
    printf("%d", i);
    done: ;
}
