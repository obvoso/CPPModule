#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

typedef struct s_data
{
	int _int;
	char _c;
}	Data;

uintptr_t serialize(Data *p);
Data *deserialize(uintptr_t ip);
#endif

