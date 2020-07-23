# Homework task 9 (9th lecture)
This project contains a binary that represents work with classes: `AbstractEmployee`, `Employee`, `Manager`, `Fink`, `HighFink`.

## Description
Here is the implementation of mentioned classes.
Answers to questions:
1) Why isn't assignment operation defined?
>`I think it's because there in no any pointers in class members and default assignment operator will be defined by default.`
2) Why are showAll() and setAll() virtual?
>`To be able to print and set private information in base classes.`
3) Why HighFink class doesn't have a data section?
>`Because it doesn't add any new functionality for base classes.`
4) Why is one version of operator<<() is enough?
>`It depends on the business task, which that operator should solve. If the task is to print only main 3 fields - so it's enough to have only one such  operator (It will cast all inherited classes to base implicitly). But in case, when it should print even inherited fields to have only one overloading won't be enough.`

## How to check
To run the program cd to root of the repository and create build folder. Then:

1. `cmake -H. -Bbuild`
2. `cmake --build build`
3. `./build/testapp`