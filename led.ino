void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  //pinMode(번호, OUTPUT);
  // OUTPUT: 출력 설정 == "1"
  // INPUT: 입력 설정 == "0"
  // INPUT_PULLUP : 풀업 스위치 == "2"
}

void loop(){
  // 2 3 4 5 4 3 2 3 4 5...
  for(int i=2;i<6;i++){
    digitalWrite(i, 1);
    delay(500);
    digitalWrite(i, 0);
  }
  for(int i=4;i>2;i--){
    digitalWrite(i, 1);
    delay(500);
    digitalWrite(i, 0);
  }
}