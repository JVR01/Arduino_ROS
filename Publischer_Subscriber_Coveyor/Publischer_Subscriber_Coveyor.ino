#include <ros.h>
#include <std_msgs/Empty.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/String.h>
ros::NodeHandle nh;

std_msgs::String str_msg;
std_msgs::String strmen;
//ros::Publisher chatter("chatter", &str_msg);

char hello[20] = "hello nice world!";
byte A = 0;
int i = 10;
String info;
<<<<<<< HEAD
char pato[20] = "nix";


char debug[]= "debug statements";
//char info[] = "infos";
char warn[] = "warnings";
char error[] = "errors";
char fatal[] = "fatalities";
char pedo[] = "pedoooo";



=======
char pato[] = "nix";
>>>>>>> origin/master
//Led Red
#define ledR 10
#define butR 11
//Led Green
<<<<<<< HEAD
#define ledG 4
=======
#define ledG 8
>>>>>>> origin/master
#define butG 9

void messageCb( const std_msgs::Empty& toggle_msg){
  digitalWrite(13, HIGH-digitalRead(13));   // blink the led
  digitalWrite(ledG, HIGH);
  delay(1000);
  digitalWrite(ledG, LOW);
<<<<<<< HEAD
  pato[1] = "a";
=======
>>>>>>> origin/master
  //hello[4] = "9";
  //info = toggle_msg;
}

void msggetinfo(const std_msgs::String& msg){
<<<<<<< HEAD
  info = msg.data;
  info.toCharArray(pato, 20);
  digitalWrite(ledG, HIGH);
  delay(1000);
  digitalWrite(ledG, LOW);
  //digitalWrite(LED_BUILTIN, HIGH-digitalRead(LED_BUILTIN));   // blink the led
 if (info == "pato" || info == "on" ){
=======
  //digitalWrite(LED_BUILTIN, HIGH-digitalRead(LED_BUILTIN));   // blink the led
 if (msg.data == pato || msg.data == "pato" || msg.data == "on" || msg.data == "'on'" ){
>>>>>>> origin/master
  digitalWrite(ledG, HIGH);
  info = msg.data;
  //info = msg.data.c_str();
  //hello[2] = info;
<<<<<<< HEAD
  delay(10000);
=======
  delay(1000);
>>>>>>> origin/master
  } 
  else {
    digitalWrite(ledG, LOW);
    }
 //A=msg.data;
 //info = A;
 //char mio[5] = "nix";
 //info.toCharArray(hello, 20);
 
}

ros::Subscriber<std_msgs::Empty> sub("toggle_led", &messageCb );
ros::Subscriber<std_msgs::String> sub_A("getinfo",msggetinfo);
ros::Publisher chatter("chatter", &str_msg);
ros::Publisher publi("publi", &strmen);
void setup()
{

  pinMode(ledG, OUTPUT);
  pinMode(butG, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(butR, INPUT);

  
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
  nh.subscribe(sub_A);
  nh.advertise(chatter);
  nh.advertise(publi);
  //nh.loginfo(info);
  //nh.loginfo("Program info");
  nh.loginfo("info");
}

void loop()
{
<<<<<<< HEAD
  
  nh.loginfo(pedo);
  nh.loginfo(pato);
  strmen.data = hello;
  str_msg.data = pato;
=======
  strmen.data = hello;
  str_msg.data = i;
>>>>>>> origin/master
  chatter.publish(&str_msg);
  publi.publish(&strmen);
  nh.spinOnce();
  delay(100);
<<<<<<< HEAD
}
=======
}
>>>>>>> origin/master
