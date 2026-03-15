#ifndef COW_H__ // header guard                                                               
#define COW_H__                                                                               
                                                                                              
#include <ostream>                                                                            
#include <string>                                                                             
                                                                                              
using namespace std;                                                                          
                                                                                              
class Cow {                                                                                   
private:                                                                                      
  string name;                                                                                
  int age;                                                                                    
  int weight;                                                                                 
                                                                                              
public:                                                                                       
  /**                                                                                         
   * Constructor 
   * The definition is in cow.cpp
   * @param name - used to initialize the member variable name                                
   * @param age - used to initialize the member variable age                                  
   * @param weight - used to initialize the member variable weight                            
   */                                                                                         
  Cow(string name, int age, int weight);                                                      
                                                                                              
  /**                                                                                         
   * Add 1 to the member variable age
   * The definition is in cow.cpp
   */                                                                                         
  void incrementAge();                                                                        
                                                                                              
  /**                                                                                         
   * Update the value of the member variable weight
   * The definition is in cow.cpp
   * @param weight - new weight                                                               
   */                                                                                         
  void setWeight(int weight);

  /**                                                                                         
   * Return "Cow"                                                                             
   */                                                                                         
  string getAnimalType() { return "Cow"; }                                                    
                                                                                              
  /**
   * Store the sound of a sheep as "Moo!"
   * Initialization is done in cow.cpp
   */
  static string SAYS;

  /**
   * Overloaded << operator for the Cow class
   * The definition is in cow.cpp
   * Print the current values of the member variables (name, age, and weight)
   * friend allows for access to the private member variables
   */
  friend ostream& operator<<(ostream& out, Cow& cow);
};

#endif
