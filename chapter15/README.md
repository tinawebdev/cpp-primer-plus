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
