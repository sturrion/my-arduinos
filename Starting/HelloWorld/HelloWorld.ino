#include "telegraph.h"

const unsigned int OUTPUT_PIN = 12;
const unsigned int DIT_LENGTH = 200;

Telegraph telegraph(OUTPUT_PIN, DIT_LENGTH);

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  telegraph.send_message("Hello, world");
  delay(5000);
}

