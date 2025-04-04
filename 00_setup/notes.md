# C++ Output (Printing Text and Numbers)

## Basic Output with `cout`
Use `cout` with the `<<` operator to print text and values.

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";  // Text needs double quotes
  return 0;
}
```

## Printing Multiple Items
You can use multiple `cout` statements, but they won't add new lines automatically:
```cpp
cout << "Hello World!";
cout << "I am learning C++"; 
// Output: "Hello World!I am learning C++"
```

## Printing Numbers
For numbers, don't use quotes:
```cpp
cout << 3;          // Prints: 3
cout << 3 + 3;      // Prints: 6 (can do math)
```

## Adding New Lines

### Method 1: `\n` character
```cpp
cout << "Hello World!\n";
cout << "I am learning C++";
```

### Method 2: Separate `\n`
```cpp
cout << "Hello World!" << "\n";
```

### Method 3: `endl` manipulator
```cpp
cout << "Hello World!" << endl;
```

### Blank Lines
Use two `\n` for blank lines:
```cpp
cout << "Hello World!\n\n";
cout << "I am learning C++";
```

## Escape Sequences
Special characters for formatting:

| Sequence | Description            |
|----------|------------------------|
| `\n`     | New line               |
| `\t`     | Horizontal tab         |
| `\\`     | Backslash (\)          |
| `\"`     | Double quote (")       |

Example:
```cpp
cout << "Line 1\nLine 2\tTabbed\\Backslash\"Quote\"";
```

> **Tip**: `\n` is more commonly used than `endl` for new lines.
