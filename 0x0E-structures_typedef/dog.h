#ifndef _DOG_HD_
#define _DOG_HD_
/**
 * struct dog - structure dog
 * @name: dog name
 * @age: dog agee
 * @owner: dog owner
 *
 * Description: data structure for dog
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

#endif /* _DOG_HD_ */
