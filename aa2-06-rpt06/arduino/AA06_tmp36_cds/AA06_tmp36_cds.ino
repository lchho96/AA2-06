//
// AA00, TMP36 sensor
//

#define TMP36_INPUT 0
#define CDS_INPUT 1
// or  int TEMP_INPUT = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
   //getting the voltage reading from the temperature sensor
  int temp_value = analogRead(TMP36_INPUT);
   // converting that reading to voltage
   float voltage = temp_value * 5.0 * 1000;  // in mV
   voltage /= 1023.0; 
   float tempC = (voltage - 500) / 10 ;  

   int cds_value = analogRead(CDS_INPUT);
   int lux = int(luminosity(cds_value));


   Serial.print(tempC);
   Serial.print(",");
   Serial.println(lux); 
//   Serial.println(" degrees C");

  delay(1000);
}

double luminosity (int RawADC0){
  double Vout=RawADC0*5.0/1023.0;
  int lux=(2500/Vout-500)/10;

  return lux;
}
