#ifndef WEP_H_
#define WEP_H
#include <vector>

class weapon{
 private:
 int DMG;
 string DMG_type; // DEX or STR or INT 
 int WGT;
 vector<string> modifiers; //Horse, Armor, Mage
  
 public:
   vector<weapon> genWepList(); //creates the basic weapon types used in the game
}

#endif
