#define ML_Ctrl 4     //define direction control pin of B motor
#define ML_PWM 5   //define PWM control pin of B motor
#define MR_Ctrl 2    //define direction control pin of A motor
#define MR_PWM 6   //define PWM control pin of A motor

char BLE_val;

void setup() {
  Serial.begin(9600);
  pinMode(ML_Ctrl, OUTPUT);//set direction control pin of B motor to OUTPUT
  pinMode(ML_PWM, OUTPUT);//set PWM control pin of B motor to OUTPUT
  pinMode(MR_Ctrl, OUTPUT);//set direction control pin of A motor to OUTPUT
  pinMode(MR_PWM, OUTPUT);//Set PWM control pin of A motor to OUTPUT
}

void loop(){
  
  if(Serial.available()>0)
    {
      BLE_val = Serial.read();
      Serial.println(BLE_val);
    }

    // TODO
    // Write code that handles the BLE_val and responds accordingly i.e. if the value is F go forward
  
}

// A motor corresponds to moving left, right motors
// B motor corresponds to moving right, left motors

// Code to turn the car to the right
void car_front()
{
    digitalWrite(ML_Ctrl,HIGH);//set direction control pin of B motor to HIGH 
    analogWrite(ML_PWM,200);//set PWM control speed of B motor to 200
    digitalWrite(MR_Ctrl,HIGH);//set direction control pin of A motor to HIGH
    analogWrite(MR_PWM,200);//set PWM control speed of A motor to 200
}

// Code to turn the car to the left
void car_left()
{
    digitalWrite(ML_Ctrl,LOW);//set direction control pin of B motor to LOW
    analogWrite(ML_PWM,200);//set PWM control speed of B motor to 200
    digitalWrite(MR_Ctrl,HIGH);//set direction control pin of A motor to HIGH 
    analogWrite(MR_PWM,200);//set PWM control speed of A motor to 200
}

//TODO 
// Code to turn the car to the right
void car_right()
{
  
}

// Code to reverse
void car_back()
{

}

// Code for the car to stop
void car_stop()
{
  
}

  
