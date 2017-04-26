// This code is processed by the circuito engine, only edit lines within specified code blocks, other changes will be discarded
// {CIRCUITO_DRIVER_API_1.0}

#include "Arduino.h"
// ======================= ENTER INCLUDE STATEMETNS HERE // ====================
// {INCLUDE}
#include "MPU6050.h"
#include "Wire.h"
#include "I2Cdev.h"
// {/INCLUDE}
// ======================= END OF INCLUDE BLOCK // =============================

// =======================Pin Definitions - ONLY MODIFY PIN NUMBERS // =========


// =======================Pin Definitions // ===================================


// ====================== DEFINE GLOBAL VARIABLES ===============================
// {GLOBAL}
int16_t mpu6050Ax, mpu6050Ay, mpu6050Az;
int16_t mpu6050Gx, mpu6050Gy, mpu6050Gz;
// {/GLOBAL}
// ======================= END OF GLOBAL BLOCK // ==============================


// // ======================  OBJECT INITIALIZATION // // ====================== 
// {OBJ}
MPU6050 mpu6050;
// {/OBJ}
// =========================  END OF OBJECT INITIALIZATION // ================== 




/* This code sets up the essentials for your circuit to work. It runs first every time your circuit is powered with electricity. */
void setup() {                                                                      
    // Setup Serial which is useful for debugging                                   
    // Use the Serial Monitor to view printed messages                              
    Serial.begin(9600);                                                             
    while (!Serial) ; // wait for serial port to connect. Needed for native USB     
    Serial.println("start");                                                        
    
// =========================  SETUP // ========================================= 
// {SETUP}
    Wire.begin();
    mpu6050.initialize();
// {/SETUP}
// =========================  END OF SETUP // ================================== 
}

/* This code is the main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop. */
void loop() {

// =========================  TESTCODE // ====================================== 
// {TESTCODE}
    mpu6050.getMotion6(&mpu6050Ax, &mpu6050Ay, &mpu6050Az, &mpu6050Gx, &mpu6050Gy, &mpu6050Gz);   //read accelerometer and gyroscope raw data in three axes
    double mpu6050Temp = ((double)mpu6050.getTemperature() + 12412.0) / 340.0;
    Serial.print("a/g-\t");
    Serial.print(mpu6050Ax); Serial.print("\t");
    Serial.print(mpu6050Ay); Serial.print("\t");
    Serial.print(mpu6050Az); Serial.print("\t");
    Serial.print(mpu6050Gx); Serial.print("\t");
    Serial.print(mpu6050Gy); Serial.print("\t");
    Serial.print(mpu6050Gz); Serial.print("\t");
    Serial.print(F("Temp- "));   
    Serial.println(mpu6050Temp);
    delay(100);
// {/TESTCODE}
// =========================  END OF TESTCODE // =============================== 
    
}