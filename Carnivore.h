//
//  Carnivore.h
//  artgame
//
//  Created by Hisashi on 13-3-9.
//
//

#ifndef __artgame__Carnivore__
#define __artgame__Carnivore__

#include <iostream>
#include "ofColor.h"
#include "Creature.h"
#include "ofMain.h"
#include "ofxBox2d.h"

class Carnivore : public Creature {
	
public:
    //method
    void update();
    void draw();
    void setActive(bool);
    
    //constructor
    Carnivore(float x, float y, int r, int h);
    
    //variables
    //float x; //position
    //float y;
    //int rank;
    //int seq; //sequent #
    //ofColor color;
    //bool active;
    int hungerM; // hunger meter
    //int hp;//health point
    
    ofxBox2d box2d;
    vector<ofxBox2dRect> rects;
//private:
    int speedX;
    int speedY;
    int width;
    int height;
    ofColor color;
    
};

#endif /* defined(__artgame__Carnivore__) */
