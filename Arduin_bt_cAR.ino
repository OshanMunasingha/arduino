//Created by oshan malith
char t;

int mp1=6;
int mp2= 5;
int mp3=10;
int mp4= 11;

void setup() {
 pinMode (mp1, OUTPUT);
 
  pinMode (mp2, OUTPUT);
  pinMode (mp3, OUTPUT);
  pinMode (mp4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
 if (Serial.available()){
    t=Serial.read();
    Serial.println(t);
  }

  else if (t=='f'){
      digitalWrite(mp1,HIGH);
      digitalWrite(mp3,HIGH);
      digitalWrite(mp2,LOW);
      digitalWrite(mp4,LOW);
    }
   else if (t=='b'){
      digitalWrite(mp2,HIGH);
      digitalWrite(mp4,HIGH);
       digitalWrite(mp1,LOW);
      digitalWrite(mp3,LOW);
    }
    else if (t=='r'){
      digitalWrite(mp3,HIGH);
      digitalWrite(mp2,LOW);
      digitalWrite(mp4,LOW);
      digitalWrite(mp1,LOW);
    }
   else if (t=='l'){
      digitalWrite(mp1,HIGH);
       digitalWrite(mp3,LOW);
    digitalWrite(mp2,LOW);
      digitalWrite(mp4,LOW);
    }
  else if (t==0){
      digitalWrite(mp1,LOW);
      digitalWrite(mp3,LOW);
    digitalWrite(mp2,LOW);
      digitalWrite(mp4,LOW);
  }
  else if (t=='s'){
      digitalWrite(mp1,LOW);
      digitalWrite(mp3,LOW);
    digitalWrite(mp2,LOW);
      digitalWrite(mp4,LOW);
  delay(100);
  }
}
