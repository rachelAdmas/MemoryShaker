#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //which pins to communicate with

const int switchPin = 6;
const int backlightPin = 12;
int switchState = 0;
int prevSwitchState = 0;
int reply;

//TODO: make these two lists tuples, or dictionary keys for better readability. 
const char *firstLine[] = {"neverthesoftadve", "Everything will", "I have become", "Guatemalan",
  "Buen Camino", "Just another", "Go howl at", "Love you like", "High five more", "That Yolanda",
  "I think", "Madame madame!", "Clackclackclack!", "Iohno if it's", "This is not",  
  "Silliest thing", "Slip slidin on", "So its glass", "SPACE TRUCKIIIIN", "COCKSBURY BUTTS!", 
  "Shu shu shu", "WHAT A WASTE"
};
      
const char *secondLine[] = {"ntureofundoom", "work out", "sentient - Help", "soccer ball", 
  "you pilgram", "onionhead", "the moon", "a big dog", "dead than alive", "She learn",
  "youre great.", "Le chapeau!!", "Spanish storks", "sposta do that.", "fun for me.", 
  "Ive ever heard.", "Jack Kendrick", "sea garbage?", "THROUGH ARIZONA", "Hehehe", 
  "Sugarbread", "But good darts."
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  pinMode(backlightPin, OUTPUT); 

  lcd.print("I'm here for you.");
  lcd.setCursor(0,1);
  lcd.print("Shake me!");
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState){
    if (switchState == LOW){
      reply = random(22);
      lcd.clear();
      
      lcd.setCursor(0,0);
      lcd.print(firstLine[reply]);
      lcd.setCursor(0,1);
      lcd.print(secondLine[reply]);
    }
  }
  prevSwitchState = switchState;
}

    
        
        //the muffins!
        //galley's on fire!

        //Shoodang

        //Infinite mail loop

        //Puffin teen in Alaska

        //WATERWORLD WAS A GOOD MOVIE

        //Mt Baker hot tub lyyyfe

        //AZ infinity mirrors
        //Look up! at camera booth

        //waverly rooftop peacocks

        //Rocko's tail getting chopped off
        //Sevenheaded dragon at Pink Pony Pub

        //orange paddles at pinkberry
        //shittier in whittier
        //chipinator
        //come help me make tortelinni soup

        //china
        //chk foot food
        // coffee for 20 mins
        //thanks for plant help
        //ramans just dont care
        //gardenia in the summer
        //jessie
        //needle in the haaaay
        //hermoine
        //honking coming into seattle
        //trampoline
        //jessie with wrapping paper
        //sailboat grill
        //sunrise coming into clearwater
        //hearing you on the phone after tornado
        //learning to make pecan pie
        //leavenworth dec 14 2017
        //alaska bbq
        //hiking with shotgun
        //going to ravine, just take the dog
        //burning recipe on grill
        //spanish black waxies
        //the ring
        //fine boy
        //roll tide
        //that deonte wilder oooh, rehab
        //xc races
        //basket ball games church
        //care packages in college
        //teaching me to drive
        //freakin righteous
        //guitar
        //willy ts chicken
        //christmas tornado
         
