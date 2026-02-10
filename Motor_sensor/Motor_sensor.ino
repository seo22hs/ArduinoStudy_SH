//Motor sensor

int AA = 6;               //모터A의 A를 6번 핀에 배치
int AB = 7;               //모터A의 B를 7번 핀에 배치

const int trigPin = 9;  //초음파 발사 신호를 보내는 핀
const int echoPin = 10;  //반사되어 돌아온 초음파를 감지하는 핀

long duration;      //초음파가 나가서 돌아오는 시간
int distance;       //계산된 센서와 물체 사이 거리

void setup() {
  pinMode(AA, OUTPUT);
  pinMode(AB, OUTPUT);

  pinMode(trigPin, OUTPUT); //센서에 신호 보내기
  pinMode(echoPin, INPUT); //센서에서 반사 신호 받기
  Serial.begin(9600);     //시리얼 모니터에 거리 값 출력

}

void loop() {

  digitalWrite(trigPin, LOW); //센서에 짧은 LOW 신호 보내서 초기화
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 20) {
  digitalWrite(AA, HIGH);          //모터A를 정회전
  digitalWrite(AB, LOW);
  }

  else {
  digitalWrite(AA, LOW);           //모터A를 정지
  digitalWrite(AB, LOW);
  }

  delay (500);

}

