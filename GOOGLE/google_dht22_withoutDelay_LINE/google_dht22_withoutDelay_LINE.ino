#include <HTTPClient.h>
#include "DHT.h"
#include <TridentTD_LineNotify.h>

#define DHTPIN 5 
#define DHTTYPE DHT22 
    
    DHT dht(DHTPIN, DHTTYPE);

#define SSID        "ICM_IOT1"
#define PASSWORD    "1234567890"
#define LINE_TOKEN  "W55Ro6QSuDjZowVxnd88t9AJ5duseihmWcnnBkhqnFN"
 
//float a=1.1;
//float b=2.2;

float h;
float t;

unsigned long previousMillis = 0;

const long interval = 10000; 

void setup() {
  Serial.begin(115200); 
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n",  SSID);
  while(WiFi.status() != WL_CONNECTED) { Serial.print("."); delay(400); }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());   
dht.begin();
LINE.setToken(LINE_TOKEN);
}



void loop() {

        h = dht.readHumidity();
        t = dht.readTemperature();

        if (isnan(t) || isnan(h))       {
        Serial.println("Failed to read from DHT");}         else {
        Serial.print("Humidity: "); 
        Serial.print(h);
        Serial.print(" %\t");
        Serial.print("Temperature: "); 
        Serial.print(t);
        Serial.println(" *C");
      }
     // delay(60000);    

if(t>=24.0)
{
   LINE.notify(t);
   LINE.notify("อุณหภูมิเกินกว่าที่กำหนดไว้");
}


unsigned long currentMillis = millis();

 if (currentMillis - previousMillis >= interval) {  
    previousMillis = currentMillis;
 //  LINE.notify("ทดสอบ LINE และ Google");
  // LINE.notifySticker(789,10855);  
   GG_ScriptSheet();
 }
}


void GG_ScriptSheet()
{
    HTTPClient client1;

String  url = "https://script.google.com/macros/s/AKfycbyFtfqnfGDi6msNjGYFU4bejgz7hRiXaDGAQr79HsXNfUDrASIm-PrD0QLY52IX7eWN/exec?";

String   sensor =url+"&AIRT="+String(t) + "&AIRH="+String(h);
  
  client1.begin(sensor);
  int httpCode = client1.GET();

  client1.end();
  
}
