#ifndef JZ_FINGERPRINT_H
#define JZ_FINGERPRINT_H

#include <Arduino.h>

typedef uint8_t  u8;


class JZ_Fingerprint {

  

public:

  void setSerial(HardwareSerial & ser);
  void sendByte(u8 msg);

private:
	
	u8 sendCommand();

  HardwareSerial * JZ_Serial;

};

#endif /*JZ_FINGERPRINT_H*/
