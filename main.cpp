#include <iostream>
#include "cow.h"
#include "sheep.h"

using namespace std;

int main() {
  cout << endl;
  cout << "Let's remember our farm animal noises!" << endl;
  cout << "A cow says: " << Cow::SAYS << endl; // prints the SAYS value of the Cow class
  cout << "A sheep says: " << Sheep::SAYS << endl << endl; // prints the SAYS value of the Sheep class

  Cow cow("Moolissa", 5, 1225); // creates an object from the Cow class, calling its constructor
  Sheep sheep("Dolly", 1, 125); // creates an object from the Sheep class, calling its constructor

  cout << "Let's see who is on the farm!" << endl;
  cout << "We have a " << cow.getAnimalType() << endl; // calls a member function of the cow object
  cout << cow; // uses the custom << operator to output the contents of the cow object
  cout << endl;

  cout << "We have a " << sheep.getAnimalType() << endl; // calls a member function of the sheep object
  cout << sheep; // uses the custom << operator to output the contents of the sheep object
  cout << endl;

  cout << "1 year passes. The animals are getting older and fatter." << endl;

  cow.incrementAge();   // calls a member function of the cow object
  cow.setWeight(1400);  // calls a member function of the cow object

  sheep.incrementAge(); // calls a member function of the sheep object
  sheep.setWeight(140); // calls a member function of the sheep object

  cout << cow; // uses the custom << operator to output the contents of the cow object
  cout << endl;

  cout << sheep; // uses the custom << operator to output the contents of the sheep object
  cout << endl;

  cout << "In the underground barn..." << endl;
  cout << "Old MacDonald has been experimenting with cloning!" << endl;
  Sheep clone(sheep); // creates another object from the Sheep class, calling its copy constructor
  cout << clone; // uses the custom << operator to output the contents of the clone object
  cout << endl;

  return 0;
}
