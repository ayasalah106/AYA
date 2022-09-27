int red = 8;
int yellow = 9;
int green = 10;
int button = 11;
int counter = 0;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH)
  { counter++;
    if (counter == 1)
    { digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
    }
    else if (counter == 2)
    { digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
    }
    else if (counter == 3)
    { digitalWrite(green, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
    }
    else
    { digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      counter = 0;
    }
  }
  delay(400);
}
