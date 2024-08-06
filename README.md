# pyc
C++ macros extension for Python like syntax

## At a glance
### Main method
```cpp
#include "pyc.h" // Include the macros extension

main
  // Code goes here

endmain
```

### User input
```cpp
String fullName = input("Enter your full name> ")
print("Hello " + fullName + " !")
```

### Printing
```cpp
print("Hello World !")
```

### String conversion
```cpp
int apple = 5;
print("Apple is " + str(apple))
```

### Function
```cpp
def (helloWorld)
  start(
    print("Hello World !")
  );
```

### Control Flow (If Else)
```cpp
int apple = 5;

ifelse(
  apple >= 5,
  print("We have sufficient apples"),
  print("We need more apples")
);
```