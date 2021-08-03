/*Interfacing 7 Segment(Common Cathode) BCD display to Arduino Uno and display the given digit. 
 * 
 * Hardware Components:
 * Sevensegment BCD Display(Common Cathode)
 * Arduino Uno  
      
 * Hardware Connection:
 * D2-D5 of Arduino Uno is connected to BCD display

 * Author : Sahana B G
 * Date   : 01 May 2021 
 */

// Data pins configuration from D2 - D5
 const int FIRSTPIN = 2;
 const int LASTPIN= 5;

 void setup()
 {
  // Configure data pins to output
  for(int i=FIRSTPIN;i<=LASTPIN;i++)
  pinMode(i,OUTPUT);
 }

 void loop()
 {
  // Display number 5 
  displayDigit(5);
  
 }

 void displayDigit(const int a)
 {
   int pin = FIRSTPIN;
  
  // Iterate over pins to assign data
   for (int i = 0;i<=3 ; i++)
   {
     digitalWrite(pin,bitRead(a,i));
     pin++;
   }
 }
 
