#ifndef SHEEP_H__ // header guard
#define SHEEP_H__

#include <ostream>
#include <string>

using namespace std;

class Sheep {
private:
  string name;
  int age;
  int weight;

public:
  /**
   * Constructor
   * The definition is in sheep.cpp
   * @param name - used to initialize the member variable name
   * @param age - used to initialize the member variable age
   * @param weight - used to initialize the member variable weight
   */
  Sheep(string name, int age, int weight);

  /** 
   * Copy Constructor
   * The definition is in sheep.cpp
   * @param sheep - an object of the Sheep class to copy
   */
  Sheep(Sheep& sheep); 

  /** 
   * Add 1 to the member variable age
   * The definition is in sheep.cpp
   */
  void incrementAge();

  /** 
   * Update the value of the member variable weight
   * The definition is in sheep.cpp
   * @param weight - new weight 
   */
  void setWeight(int weight);

  /** 
   * Return "Sheep"
   */
  string getAnimalType() { return "Sheep"; };

  /** 
   * Store the sound of a sheep as "Baa!"
   * Initialization is done in sheep.cpp
   */
  static string SAYS;

  /** 
   * Overloaded << operator for the Sheep class
   * The definition is in sheep.cpp
   * Print the current values of the member variables (name, age, and weight)
   * friend allows for access to the private member variables
   */
  friend ostream& operator<<(ostream& out, Sheep& sheep);
};

#endif
