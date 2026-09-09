#include <stdio.h>

struct student {

char *name;

};

struct student s;

struct student fun(void) {

s.name = "newton";

printf("%s", s.name);

s.name = "alan";
return s;
}


void main() {

struct student m = fun(); ", m.name);

printf("%s m.name = "turing";

printf("%s", s.name);
}