#include "SPI.h"

void setup() {
  // put your setup code here, to run once:
  
  SPI_init();
  while(!(*SPSR_1 & (1<<7)));
  
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

}
