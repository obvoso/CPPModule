#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
 protected:
    std::string _type;
     
 public:
     WrongAnimal();
     WrongAnimal(std::string type);
     WrongAnimal(const WrongAnimal& obj);
     WrongAnimal& operator=(const WrongAnimal& obj);
     virtual ~WrongAnimal();
     void makeSound(void) const;
};

#endif
