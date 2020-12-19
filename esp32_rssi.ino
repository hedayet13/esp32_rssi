#include <SPI.h>
#include <WiFi.h>

char* ssid = "****";
char* pass = "****";

char* ssid = "Home_TP";
char* pass = "llIlIIl0O~`IlIl";

void setup()
{

  Serial.begin(115200);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.println("Couldn't get a wifi connection");
    WiFi.begin(ssid, pass);
    delay(2000);
  }
  // if you are connected, print out info about the connection:
 
    // print the received signal strength:
    long rssi = WiFi.RSSI();
    Serial.print("RSSI:");
    Serial.println(rssi);
  
}

void loop () {
  Serial.println(WiFi.RSSI());
  
//  Serial.println(WiFi.RSSI('192.168.0.107'));
  delay(100);
}
