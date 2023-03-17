#!/bin/bash

# Generate a random number between 0 and RAND_MAX
n=$(( $RANDOM % $RAND_MAX ))

# Check if the number is positive, negative or zero
if [ $n -gt 0 ]
then
    echo "$n is positive"
elif [ $n -eq 0 ]
then
    echo "$n is zero"
else
    echo "$n is negative"
fi

