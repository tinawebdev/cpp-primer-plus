## Chapter 15 "Friends, Exceptions, and More"
### Programming Exercises

1. Modify the `Tv` and `Remote` classes as follows:

    **a.** Make them mutual friends.

    **b.** Add a state variable member to the `Remote` class that describes whether the
    remote control is in normal or interactive mode.

    **c.** Add a `Remote` method that displays the mode.

    **d.** Provide the `Tv` class with a method for toggling the new `Remote` member.      
        This method should work only if the TV is in the on state.

    Write a short program that tests these new features.
    
2. Modify *Listing 15.11* so that the two exception types are classes derived from the
`logic_error` class provided by the `<stdexcept>` header file. Have each `what()`
method report the function name and the nature of the problem. The exception
objects need not hold the bad values; they should just support the `what()` method.

3. This exercise is the same as *Programming Exercise 2*, except that the exceptions
should be derived from a base class (itself derived from `logic_error`) that stores the
two argument values, the exceptions should have a method that reports these values
as well as the function name, and a single `catch` block that catches the base-class
exemption should be used for both exceptions, with either exception causing the
loop to terminate.
