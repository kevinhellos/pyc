#include "pyc.h"

def (helloWorld)
  start(
    print("Hello World !")
  )
end

main

  String fullName = input("Enter your full name> ");
  print("Hello " + fullName + " !")
  

  helloWorld();

  String cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  print(cars[0])

  Number apple = 5;
  Float salary = 2999.95;

  print("Apple is " + str(apple))
  print("Salary is $" + str(salary))

  ifelse(
    apple >= 5,
    print("We have sufficient apples"),
    print("We need more apples")
  );


endmain

