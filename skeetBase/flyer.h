//
//  flyer.h
//  Skeet
//
//  Created by Journey Curtis on 3/29/22.
//

#ifndef flyer_h
#define flyer_h

#include <list>
#include "point.h"

class Effect;

class Flyer {
protected:
   Point pt;
   Velocity v;
   bool dead;
   double radius;
   
public:
   Point getPosition()       const { return pt;   }
   Velocity getVelocity() const { return v;    }
   bool isDead()          const { return dead; }
   
   virtual void draw() = 0;
   virtual void move() = 0;
   virtual void kill() { dead = true; }
};

#endif /* flyer_h */
