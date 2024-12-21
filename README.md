# Simple Calculator
Basic arithmetic operations.

### How to run
```pwsh
> Input (order 1): [num1] [operator] [num2]  ↴
> Input (roder 2): [result] [operator] [num] ↴
```

###  Example
```pwsh
> Input (roder 1): 10.1 - 3.1
> Input (roder 2): 7.000000 * 2
> Input (order 3): 14.000000 - ... [continues]
```

## What I learned from this
> User will input more than one value at a time, but I only want to store some of them. This is how it's done in c.
```c
scanf("%*c %c %*c", &theSecond);
```
> Just put a _'*'_ after the _'%'_ character.