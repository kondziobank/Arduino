#define AXIS_Y A0
#define AXIS_X A1
#define SWITCH 13

#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
const int lightsPorts[] = {2, 3, 4, 5, 6, 7, 8, 9};
bool lightsOutput[] = {false, false, false, false, false, false, false, false};
int currentLight = 0;
int decimal = 0;

void setup() {
 Serial.begin(9600);

 pinMode(AXIS_Y, INPUT_PULLUP);
 pinMode(AXIS_X, INPUT_PULLUP);
 pinMode(SWITCH, INPUT_PULLUP);

 for (size_t i = 0; i < SIZE(lightsPorts); ++i) {
  pinMode(lightsPorts[i], OUTPUT);
 }
}

void loop() {
  int x = analogRead(AXIS_X);
  int y = analogRead(AXIS_Y);
  int switchValue = digitalRead(SWITCH);

  if (y > 700) {
    currentLight = currentLight == SIZE(lightsPorts) - 1 ? 0 : currentLight + 1;
  } else if (y < 300) {
    currentLight = currentLight == 0 ? SIZE(lightsPorts) - 1 : currentLight - 1;
  }

  if (switchValue == 0) {
    lightsOutput[currentLight] = !lightsOutput[currentLight];
  }

  int decimalCopy = decimal;
  decimal = 0;
  int base = 1;
  for (size_t i = 0; i < SIZE(lightsPorts); ++i) {
    if (i == currentLight || lightsOutput[i] == true) {
      digitalWrite(lightsPorts[i], HIGH);
    } else {
      digitalWrite(lightsPorts[i], LOW);
    }

    decimal += base * lightsOutput[i];
    base *= 2;
  }

  if (decimalCopy != decimal) {
    Serial.print("Aktualna liczba: ");
    Serial.println(decimal);
  }

  delay(200);
}
