#include <HTTPClient.h>

#define SSID        "vivo 2015"
#define PASSWORD    "0981311077"

 
float a=1.1;
float b=2.2;


void setup() {
  Serial.begin(115200); 
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n",  SSID);
  while(WiFi.status() != WL_CONNECTED) { Serial.print("."); delay(400); }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());   
}



void loop() {
   
   GG_ScriptSheet();

}


void GG_ScriptSheet()
{
    HTTPClient client1;

String  url = "https://script.google.com/macros/s/AKfycbyInuad_WkWzxaTSqx7nUvPtsxIWb5q96JL6ja_6GvibmDLUh3RUW-cJe9H80RDbsDl/exec?";

String   sensor =url+"&AIRT="+String(a) + "&AIRH="+String(b);
  
  client1.begin(sensor);
  int httpCode = client1.GET();

  client1.end();
  
}
