## Files
- **dog.h** - defines a new type `struct dog` with the following elements:
    - `name`, type = `char * `
    - age, type = `float`
    - owner, type = `char *`
- **1-init_dog.c** - initializes a variable of type `struct dog`
- **2-print_dog.c** - prints a `struct dog`
     - If an element of `d` is `NULL`, print `(nil)` instead of this element
     - If `d` is `NULL` print nothing
- **dog.h** - define a new type `dog_t` as a new name for the type `struct dog`
- **4-new_dog.c** - creates a new dog
    * You have to store a copy of `name` and `owner`
    * Return `NULL` if the function fails
- **5-free_dog.c** - frees dogs
