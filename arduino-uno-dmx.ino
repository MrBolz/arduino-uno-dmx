#include <SoftwareSerial.h>
#include <Conceptinetics.h>

#define SLAVE_CHANNELS 9
#define RXEN_PIN       2

DMX_Slave dmx_slave ( SLAVE_CHANNELS , RXEN_PIN );


SoftwareSerial mySerial(10, 11); // RX, TX


void setup() {
  
  // Enable DMX slave interface and start recording
  // DMX data
  dmx_slave.enable ();

  // Set start address to 1, this is also the default setting
  // You can change this address at any time during the program
  dmx_slave.setStartAddress (1);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

void OnFrameReceiveComplete (void)
{
    // Called every time when it collected its data
    // and no interference from other interrupts 
    
}
