# order_weight
### code test deccember 2022

you are provided a string containing a list of positive integers separated by a space (" "). Take each value and calculate the sum of its digits, which we call its "weight". Then return the list in ascending order by weight, as a string joined by spaces.

For example 99 will have "weight" 18, 100 will have "weight" 1. In the ouput 100 will come before 99.
Specification
order_weight(strng)

Parameters

    strng: std::string - String of digits to be summed and put in order
Return Value

    std::string - A string of digits ordered by their "weight"

Example:

"56 65 74 100 99 68 86 180 90" ordered by numbers weights becomes: "100 180 90 56 65 74 68 86 99"

When two numbers have the same "weight", let's consider them to be strings and not numbers:

100 is before 180 because its "weight" (1) is less than that of 180 (9). 180 is before 90 since, having the same "weight" (9), it is ordered as before when compared as strings.
