#include <HTTPClient.h>
#include "DHT.h"

#define DHTPIN 5 
#define DHTTYPE DHT22 
    
    DHT dht(DHTPIN, DHTTYPE);

#define SSID        "vivo 2015"
#define PASSWORD    "0981311077"

 
//float a=1.1;
//float b=2.2;

float h;
float t;

void setup() {
  Serial.begin(115200); 
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n",  SSID);
  while(WiFi.status() != WL_CONNECTED) { Serial.print("."); delay(400); }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());   
dht.begin();
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
      delay(5000);    


   
   GG_ScriptSheet();

}


void GG_ScriptSheet()
{
    HTTPClient client1;

String  url = "https://script.google.com/macros/s/AKfycbyInuad_WkWzxaTSqx7nUvPtsxIWb5q96JL6ja_6GvibmDLUh3RUW-cJe9H80RDbsDl/exec?";

String   sensor =url+"&AIRT="+String(t) + "&AIRH="+String(h);
  
  client1.begin(sensor);
  int httpCode = client1.GET();

  client1.end();
  
}
