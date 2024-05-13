# AP Computer Science A Final Project
Name: Finnian McGarvey

Augmented Reality

Okayyyyy where to start. Heyo I'm Finn AKA Fishhkabob and a student at Grant highschool. This project is a weird one. Let's talk about Augmented Reality!
Augmented Reality, also known as AR is when you put a display over real life things I don't want to go full apple vision pro buuuut, I don't want to five minutes craft this shit. 
There are a multitude of ways to make AR ranging from a 20 dollar projector and car window tint, to tony stark jarvis style glasses
I'm just a highschooler not a literal super hero, but I'm also pretty invested in this so it's going to be somewhere in the middle. 
If I continue Computer Science next year you'll probably get to see a interactable AR display which would be cooool as shit in my opinion.

Prototyping:
For now I am going to be using safety glasses window tint and a low will to live.
It migghhhtttt take a while and realistically it's not gonna go aywhere in the six weeks I have until the end of school. So, it will project the time, day, and battery percentge as just purely proof of concept

V1:
planning to attactc a bulky ass 3d printed thingamabobber to the outside of my glasses with the same time, day, battery life.

V2: 
a more streamline mount upgrading to an arduino nano nd making the screen more customizable. new HUD features and possibly a small interactable camera.
Whatever I probs won't get here for a while



Concepts

These are the two possible concepts I'm working on but hey one may not work and the other one's complicated...  ffffuuuuccckkkkk

anyway
here you go ig?

![projector-concepts](https://github.com/GrantHS-Programming/ap-final-project-Fishhkabob/assets/116756615/3ff9f8ad-c634-490e-99e0-94e542f137f6)

Arduino controller design with a simulator :)

![Screenshot 2024-05-13 at 11 23 08 AM](https://github.com/GrantHS-Programming/ap-final-project-Fishhkabob/assets/116756615/d064968e-764a-4ee1-8b80-4809ee8dcab4)

The code I ran today was to attempt to get a working timer displaed live through seconds, minutes, and hours...
it kinda failed but I'm gonna dump it here anyway


#include <LiquidCrystal.h>

int totalseconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);


void setup()
{
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.

  // Print a message to the LCD.
  lcd_1.print("time: 12:00");
}

void loop()
{
int totalminutes = totalseconds/60;
int minutes = totalminutes % 60;
  int seconds = totalseconds % 60;
  lcd_1.setCursor(10, 0);
  
  lcd_1.print(minutes);
  lcd_1.print(seconds);

  delay(1000);
  totalseconds += 1;
  
  template<typename... Args>
std::string dyna_print(std::string_view rt_fmt_str, Args&&... args)
{
    return std::vformat(rt_fmt_str, std::make_format_args(args...));
}
 
int main()
{
    std::cout << std::format("Hello {}!\n", "world");
 
    std::string fmt;
    for (int i{}; i != 3; ++i)
    {
        fmt += "{} "; // constructs the formatting string
        std::cout << fmt << " : ";
        std::cout << dyna_print(fmt, "alpha", 'Z', 3.14, "unused");
        std::cout << '\n';
    }
}
}
