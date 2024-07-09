// Arduino sketch
#include "XGBClassifier.h"

Eloquent::ML::Port::XGBClassifier classifier;

void setup() {
  Serial.begin(115200);

}

void loop() {
  float X1[] = {66.037, 0.0, 84.332, 78.295, 98.295, 0.0};
  int result1 = classifier.predict(X1);
  Serial.print("Result of predict with input X1:");
  Serial.println(result1);
  delay(2000);

  float X2[] = {15.580, 1.0, 94.092, 41.160, 82.790, 1.0};
  int result2 = classifier.predict(X2);
  Serial.print("Result of predict with input X2:");
  Serial.println(result2); 
  delay(2000);

  float X3[] = {8.325, 2.0, 121.65, 172.744, 76.65, 1.0};
  int result3 = classifier.predict(X3);
  Serial.print("Result of predict with input X3:");
  Serial.println(result3);
  delay(2000);
}