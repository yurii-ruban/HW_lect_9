# Homework task 9 (9th lecture)
This project contains a binary that represents work with classes: `AbstractEmployee`, `Employee`, `Manager`, `Fink`, `HighFink`.

## Description
Here is the implementation of mentioned classes.
Answers to questions:
1) Why isn't assignment operation defined?

2) Why are showAll() and setAll() virtual?

3) Why HighFink class doesn't have a data section?

4) Why is one version of operator<<() is enough?


## How to check
To run the program cd to root of the repository and create build folder. Then:

1. `cmake -H. -Bbuild`
2. `cmake --build build`
3. `./build/testapp`