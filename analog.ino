int sensor = 0;


void setup()
{
  Spark.variable("sensor", &sensor, INT);
  pinMode(A0, INPUT);
}


void loop()
{
  sensor = analogRead(A0);
}