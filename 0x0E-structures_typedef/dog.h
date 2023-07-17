#ifndef _DOG_H
#define _DOG_H

/**
 * struct - structure definition for dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: data structure for the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
