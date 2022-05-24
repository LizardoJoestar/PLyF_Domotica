// LED lights
const int led1 = 0;
const int led2 = 1;
const int led3 = 2;

// Movement sensors (PIR)
const int pir1 = 3;
const int pir2 = 4;
const int pir3 = 5;

// Variables for reading sensor states
int pir1State = 0;
int pir2State = 0;
int pir3State = 0;

void setup() {
    // LED lights setup
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);

    // Movement sensors (PIR)
    pinMode(pir1, INPUT);
    pinMode(pir2, INPUT);
    pinMode(pir3, INPUT);
}

void loop() {
    // Read sensor states
    pir1State = digitalRead(pir1);
    pir2State = digitalRead(pir2);
    pir3State = digitalRead(pir3);

    // Polling sensors for movement in each room

    // Room #1
    if (pir1State == HIGH) {
        digitalWrite(led1, HIGH);
    }
    else {
        digitalWrite(led1, LOW);
    }

    // Room #2
    if (pir2State == HIGH) {
        digitalWrite(led2, HIGH);
    }
    else {
        digitalWrite(led2, LOW);
    }

    // Room #3
    if (pir3State == HIGH) {
        digitalWrite(led3, HIGH);
    }
    else {
        digitalWrite(led3, LOW);
    }

    delay(250);
}
