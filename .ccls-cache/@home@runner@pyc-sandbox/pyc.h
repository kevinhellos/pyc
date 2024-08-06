// pyc - C++ extension for Python like syntax
// version: 1.0.1
// By Kevin

#ifndef MACROS_H
#define MACROS_H
#include <iostream>
using namespace std;

// Main
#define main int main() {

// Keyword "end" is used to represent } (close bracket)
#define end };

// Keyword "endmain" is used to represent } (close bracket)
// Same as end but used for endmain for better redability
#define endmain return 0; };
// #define endall return 0;

// Print
#define print(x) std::cout << x << std::endl;

// Function
#define def(name) void name() {
#define start(x) x

// endblock
// #define endblock ;

// String conversion
#define str(x) (std::to_string(x))

// Variable type
#define Number int
#define Float double
#define String std::string
#define Boolean bool

// User input
#define input(prompt) ([](const std::string& promptStr) { \
    std::string result; \
    std::cout << promptStr; \
    std::getline(std::cin, result); \
    return result; \
})(prompt)

// If else
#define ifelse(cond, if_true, if_false) \
do { \
  if (cond) { \
    if_true \
  } else { \
    if_false \
  } \
} while (0)


#endif
