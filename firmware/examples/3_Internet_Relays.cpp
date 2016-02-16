// This #include statement was automatically added by the Particle IDE.
#include "RelayShield/RelayShield.h"

// Create an instance of the RelayShield library, so we have something to talk to
RelayShield myRelays;

// Create prototypes of the Spark.functions we'll declare in setup()
int relayOn(String command);
int relayOff(String command);

void setup() {
    //.begin() sets up a couple of things and is necessary to use the rest of the functions
    myRelays.begin();

    // Use myRelays.begin(2); if you have the square, white RelayShield (from the Core)
    // to use, just add a '2' between the parentheses in the code above.

    // Register Spark.functions and assign them names
    Particle.function("relayOn", relayOn);
    Particle.function("relayOff", relayOff);
}

void loop() {
    // Nothing needed here, functions will just run when called
}

int relayOn(String command){
    // Ritual incantation to convert String into Int
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);
    
    // Turn the desired relay on
    myRelays.on(i);
    
    // Respond
    return 1;    
}

int relayOff(String command){
    // Ritual incantation to convert String into Int
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);
    
    // Turn the desired relay off
    myRelays.off(i);
    
    // Respond
    return 1;    
}
