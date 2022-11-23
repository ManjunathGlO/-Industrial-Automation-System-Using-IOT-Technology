#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
WiFiClient client;
String thingSpeakAddress= "http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfield1Name;
String request_string;
HTTPClient http;
void setup()
{
  pinMode(5, INPUT);
pinMode(4, INPUT);
pinMode(0, INPUT);
pinMode(2, INPUT);
pinMode(14, INPUT);
  WiFi.disconnect();
   WiFi.begin("shivanand","8050587017");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);

 }

}

void loop()
{

    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "YGYLHACAMUUI2HDP";
      request_string += "&";
      request_string += "field1";
      request_string += "=";
      request_string += analogRead(A0);
      http.begin(request_string);
      http.GET();
      http.end();
      delay(3000);

    }
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "YGYLHACAMUUI2HDP";
      request_string += "&";
      request_string += "field2";
      request_string += "=";
      request_string += analogRead(A0);
      http.begin(request_string);
      http.GET();
      http.end();
      delay(3000);

    }
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "YGYLHACAMUUI2HDP";
      request_string += "&";
      request_string += "field3";
      request_string += "=";
      request_string += digitalRead(5);       //lpg gAS
      http.begin(request_string);
      http.GET();
      http.end();
      delay(3000);

    }
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "YGYLHACAMUUI2HDP";
      request_string += "&";
      request_string += "field4";            //prohibited area pir
      request_string += "=";
      request_string += digitalRead(4);
      http.begin(request_string);
      http.GET();
      http.end();
      delay(3000);

    }
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "YGYLHACAMUUI2HDP";
      request_string += "&";
      request_string += "field5";
      request_string += "=";
      request_string += digitalRead(0);         //conveyor ir 
      http.begin(request_string);
      http.GET();
      http.end();
      delay(3000);

    }
    }
