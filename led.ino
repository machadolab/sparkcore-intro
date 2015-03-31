
boolean led0_on = false;
boolean led1_on = false;

int toggleLed0(String args);
int toggleLed1(String args);

void setup() {

    Serial.begin(9600);

    pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);

    digitalWrite(D0, LOW);
    digitalWrite(D1, LOW);

    Spark.function("toggle_led0", toggleLed0);
    Spark.function("toggle_led1", toggleLed1);
}

void loop() {

}

int toggleLed0(String args) {

    Serial.println("Toggling LED 0");

    led0_on = !led0_on;

    if (led0_on) {
        digitalWrite(D0, HIGH);
    } else {
        digitalWrite(D0, LOW);
    }

    return 1;
}

int toggleLed1(String args) {

    Serial.println("Toggling LED 1");

    led1_on = !led1_on;

    if (led1_on) {
        digitalWrite(D1, HIGH);
    } else {
        digitalWrite(D1, LOW);
    }

    return 1;
}