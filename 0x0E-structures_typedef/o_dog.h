#include <stdio.h>

// Define the struct for a dog
struct dog {
    char name[20];
    float age;
};

// Define a new type dog_t as a new name for struct dog
typedef struct dog dog_t;

int main() {
    // Declare a variable of type dog_t and initialize its fields
    dog_t myDog = {"Poppy", 3.5};

    // Access the fields of myDog using the . operator
    printf("My dog's name is %s and he is %f years old.\n", myDog.name, myDog.age);

    return 0;
}
