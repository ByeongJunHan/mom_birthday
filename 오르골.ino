int high_value = 20;
const int ENABLE=10;            // 모터1사용 가능 제어핀과 동시에 속도제어핀 역할
const int DIR1=9;               // 방향제어를 위한 핀1
const int DIR2=8;               // 방향제어를 위한 핀2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ENABLE, OUTPUT);             // 모터1사용 가능 제어핀 출력으로 설정
  pinMode(DIR1, OUTPUT);               // 방향제어를 위한 핀1 출력으로 설정
  pinMode(DIR2, OUTPUT);
  digitalWrite(ENABLE, LOW);
  digitalWrite(DIR1, HIGH);           //방향제어를 위한 핀1은 HIGH
  digitalWrite(DIR2, HIGH);              //방향제어를 위한 핀2은 LOW
}
void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  int speed = map(value, 0, 1024, 0, 255);  
  digitalWrite(DIR1, HIGH);           //방향제어를 위한 핀1은 HIGH
  digitalWrite(DIR2, HIGH);              //방향제어를 위한 핀2은 LOW
  analogWrite(ENABLE, speed);
  delay(100);
}
