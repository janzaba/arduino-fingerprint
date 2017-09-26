#include "JZ_Fingerprint.h"

void JZ_Fingerprint::setSerial(HardwareSerial & ser) {
  JZ_Serial = &ser;
  JZ_Serial->print("aasds");
}

void JZ_Fingerprint::sendByte(u8 msg) {
  
}
