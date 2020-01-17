//********** Variables ************************************************************
const int V1 = 7;
const int T1 = 8;
const int G1 = 9;
const int V2 = 10;
const int T2 = 11;
const int G2 = 2;
unsigned int temp = 1000;
//********** Setup ****************************************************************
void setup()
{
  pinMode(V1, OUTPUT);
  pinMode(T1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(V2, OUTPUT);
  pinMode(T2, OUTPUT);
  pinMode(G2, OUTPUT);
  digitalWrite(V1, LOW);
  digitalWrite(T1, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(V2, LOW);
  digitalWrite(T2, LOW);
  digitalWrite(G2, LOW);
}
void loop()
{
digitalWrite(V1, HIGH);
digitalWrite(V2, HIGH);
delay(temp); //5000
digitalWrite(V1, HIGH);
digitalWrite(V2, LOW);
digitalWrite(G2, HIGH);

delay(4*temp); //5000
digitalWrite(V1, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, HIGH);
delay(temp);
digitalWrite(V1, HIGH);
digitalWrite(V2, HIGH);
digitalWrite(T2, LOW);
delay(temp);
digitalWrite(V1, LOW);
digitalWrite(G1, HIGH);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(temp); //5000
digitalWrite(V1, LOW);
digitalWrite(G1, HIGH);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(temp); //5000
digitalWrite(V1, LOW);
digitalWrite(G1, HIGH);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(temp); //5000
digitalWrite(V1, LOW);
digitalWrite(G1, HIGH);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(4*temp); //5000
digitalWrite(T1, HIGH);
digitalWrite(G1, LOW);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(temp); //5000
digitalWrite(V1, HIGH);
digitalWrite(T1, LOW);
digitalWrite(G1, LOW);
digitalWrite(V2, HIGH);
digitalWrite(G2, LOW);
digitalWrite(T2, LOW);
delay(temp); //5000
}
