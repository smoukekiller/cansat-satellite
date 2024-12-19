#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

//configs 
#define PRIMARY_DATA_TIME 400 //time in milliseconds between sending primary data (Pressure, latitude, longitude)
#define SECONDARY_DATA_TIME 1000 //time in milliseconds between sending secondary data
#define RADIO_KEY 28 


// Constants for data identifiers
#define TEMPERATURE 0x00
#define PRESSURE 0x01
#define LATITUDE 0x02
#define LONGITUDE 0x03
#define ACCELERATION_X 0x04
#define ACCELERATION_Y 0x05
#define ACCELERATION_Z 0x06
#define GYRO_X 0x07
#define GYRO_Y 0x08
#define GYRO_Z 0x09
#define LIGHT 0x0A
#define BASEP 0x0B

#endif
