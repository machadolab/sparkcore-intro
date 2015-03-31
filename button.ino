
boolean currentlyPressed = false;

void setup()
{
    Serial.begin(9600);

    pinMode(D7, INPUT);

}

void loop()
{

    if (digitalRead(D7) == HIGH) {

        if (!currentlyPressed) {
            Serial.println("Button pressed!");
            currentlyPressed = true;

            Spark.publish("button");
        }

    } else {

        if (currentlyPressed) {
            Serial.println("Button released");
            currentlyPressed = false;
        }

    }

}
