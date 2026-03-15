# Introduction

In this homework assignment, you will apply your knowledge about C++ classes to an example involving two classes: Cow and Sheep. 
The implementation for these classes may seem somewhat repetitive. 
In upcoming lectures, you’ll learn inheritance and polymorphism, which will enable you to reuse code more effectively.


# Tasks

In `Sheep.cpp` and `Cow.cpp`:
  1. Initialize their static member variables. Specifically, set the static member variable `SAYS` for the Cow class to "Moo!" and for the sheep class to "Baa!". 
  2. Implement their constructors and `incrementAge()` and `setWeight()` member functions. 
  3. Implement the copy constructor for the Sheep class (the Cow class does not have a copy constructor). When implementing it, append a space followed by the word "Clone" to the existing Sheep name.
  4. Implement their overloaded << operators to print the name, age, and weight of the objects (hint: you can treat the ostream parameter as cout). See the expected outputs provided below to complete these overloaded operators.

For detailed information about the members, please refer to `Sheep.h` and `Cow.h`.


# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp
```
```
./main
```

2. Input
* This homework assignment does not require any input. Below are the expected outputs:
```
Let's remember our farm animal noises!
A cow says: Moo!
A sheep says: Baa!

Let's see who is on the farm!
We have a Cow 
Name: Moolissa
Age: 5
Weight: 1225 lbs 

We have a Sheep
Name: Dolly
Age: 1
Weight: 125 lbs 

1 year passes. The animals are getting older and fatter.
Name: Moolissa
Age: 6
Weight: 1400 lbs 

Name: Dolly
Age: 2
Weight: 140 lbs 

In the underground barn...
Old MacDonald has been experimenting with cloning!
Name: Dolly Clone
Age: 2
Weight: 140 lbs
```

# Submit

Please upload your `cow.cpp` and `sheep.cpp` files (two files) to `myCourses > Assignments > HW7`. Do not submit *.docx, *.pdf, *.txt, or *.zip file. Do not modify the main.cpp and header files.
