#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
 *struct dog - dog class
 *@name: name of dog
 *@age: age of dog
 *@owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}
;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
