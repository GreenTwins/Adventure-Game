#include <iostream>
#include <cstdlib>
using namespace std;
int num;
string choice;
string response;
string answer;
class  Room
{
       private:
               string description;
               int north;
               int south;
               int east;
               int west;
               int num; 
               int roomNumber;
               int options;
               int choice;
               int answer;
              
               

       public:
              Room ()
{ 
       roomNumber= 0;
       description = "";
       north= 0;
       south= 0;
       east= 0;
       west= 0;
       }
               Room (int num, string d, int n, int s, int e, int w)
{ 
       roomNumber= num;
       description = d;
       north= n;
       south= s;
       east= e;
       west= w;
       }
 
            Room (int num, string d)
    {        
   roomNumber= num;
   description = d;
}
     
    string getdescription()
        { return description;
                           }
    
    int getnorth ()
       { return north;
       }                       
                           
    int getsouth ()
     { return south;
                 }
    
    int geteast ()
      { return east;
      }
      
    int getwest ()
       {return west;
       }
       
   
   
                      
};

int main()
{
    
Room roomArray[17];
 roomArray[0] = Room(0,"Finn and Jake have entered the dark cave and they see four paths. At the entrance a sign saying 'Be warned, pick the wrong one and it will spell the end for you'", 1, 2, 3,4);   
 roomArray[1] = Room(1,"Finn and Jake have walked into an empty room thats darker than the last since the sun can't reach. Seems like they're safe for now. But in front of them is a fork in the road", 5, 6, 1, 1);     
 roomArray[2] = Room(2,"Finn and Jake have walked into an empty room thats darker than the last since the sun can't reach. Seems like they're safe for now. But in front of them are two more paths. ", 6, 7, 2, 2);    
 roomArray[3] = Room(3, "Without hesitation Finn and Jake walk into the third room. It seems safe but there's a strangly strong smell of....lemons?? You continue to walk east...", 3, 3,7, 3); 
 roomArray[4] = Room(4, "The path seems endless. Finn and Jake think this adventure is going smoother than they previously thought...its a straight path from now on", 4, 4, 10, 4);   
 roomArray[5] = Room(5, "You take a few more steps and end up in a sewage system. Yuck! Reguardless you are again faced with three paths. Pick the right choice", 9, 10, 12, 5);  
 roomArray[6] = Room(6, "Another fork in the road. From one path you can smell the stench of lemons...the other path it extremely dark. Which will you choose?", 6, 6, 10, 7);   
 roomArray[7] = Room(7, "The lemon smell gets even stronger and stronger...until finally you reach the room. But in the middle of it is a Lemon Monkey. He clears his throat prepared to speak...");
 roomArray[8] = Room(8, "After figuring out the Lemon Monkey's riddle they continue onto the next room. The hallway gets brighter and brighter and all of a sudden you end up back at the cave entrance", 0,8,8,8 );         
 roomArray[9] = Room(9, "Finn and Jake want to get out of the sewers quick so they take the nearby exit. Maybe that wasnt the best idea...you run into a Blueberry monkey wearing a top hat" );   
 roomArray[10] = Room(10, "Its getting darker and darker. The silence is defening but Finn and Jake push on. Before they know it, the ground underneath them is gone and the plummit to their end");      
 roomArray[11] = Room(11, "Finn and Jake have run into an intersection. At the very center a Rasberry Monkey appears with a piece of paper in his hand");
 roomArray[12] = Room(12, "That Rasberry Monkey had a tough riddle but at this point nothing can stop Finn and Jake. Its a straight path, no choice but to go north" , 13, 12, 12, 12);   
 roomArray[13] = Room(13, "Before they even enter the next room they realize that its gotten brighter all of a sudden. As they walk in another monkey blocks their way...");
 roomArray[14] = Room(14, "Finn and Jake decide to go to the north. They keep walking and walking for what seemed like hours. All of a sudden the cave begins to rumble and the rocks on the cave ceiling come crashing down blocking your way back...Guess it wasnt a good idea to go north.");
 roomArray[15] = Room(15, "They decided to ignore the monkey and go west instead. Although it feels as if they're walking backwards. But its too late, before they know it they've fallen into the endless pit");
 roomArray[16] = Room(16, "Congradulation on unraveling the monkey's riddle. Finn and Jake run to the next to room to snag all of the gold. They can't wait to take it back to the village....THE END....");   
 
cout<< "Do you want to see the intro? y or n?";
cin>> response;

if (response == "y"){
cout << "In the 'Land of Ooo' Finn the human and his buddy Jake are in a nearby town reminiscing about when they slayed the giant one eyed worm inside the gummy pits.\n";
cout << "But their story was cut short as a band of Vikings stormed in all battered and bruised. All the townspeople gathered around them, muttering and questioning them. \n";  
cout << "Finn's eyes grew wide with admiration.\n";
cout << "Finn: 'It's them! The manliest and most heroic band left in the Land of Ooo. The Mushroom Gang!!\n";
cout << "Jake: 'Why are they called Mushroom Gang. They look more like Vikings than mushrooms?'\n";
cout << "Finn: 'Because they slayed the Giant Mushroom King far off in the west. Then…they ate him!!' He ended his brief story with a horrified face.\n"; 
cout << "Jake: '….Never make that face again…'\n";
cout << "The Town Old-Man walked out from his house and towards the group of Vikings.\n"; 
cout << "He had hoped for some good news since half of the town was destroyed by a fire storm. He had promised them the heroic sword Heroes if they had completed the quest for gold in the Dark Caves.\n"; 
cout <<  "Town Old-Man: 'How did the quest go? Did you find it? The gold' All of the Vikings were silent except for the biggest Viking.\n"; 
cout << "Biggest Viking: 'It was nearly impossible. I lost half of my men going though that cave. It seems like it never ends. To make matters worse…..' The biggest Vikings warning was cut off by a chatty Finn.\n"; 
cout << "Finn: 'Mr. Big Viking can I join your group?! Oh please!'. All the Vikings laughed in unison.\n";
cout <<  " 'This group is for the manliest of men. You are but a boy, a human boy'. They continued to laugh. Finn became angry at the Vikings for laughing at him.\n"; 
cout << "Finn: 'I'll prove to you that I am not just a boy. I'll go into the Dark Caves and find the gold and when I do you have to accept me into your group.'";  
}

     
int CurrentRoom= 0;     
while (response !="q"){
      
if (CurrentRoom ==7){
                answer="a towel";
                cout<< roomArray[CurrentRoom].getdescription();
                cout<< "The Lemon-Monkey says: 'You two, I have a riddle for you.";
                cout<< "What do you want to do? Answer it or walk pass him?";
                cin >> choice;
                if (choice != "answer"){
                cout << "Finn ignores him and attempts to walk pass him, however the monkey is strong and pushes him back";
                cout << " 'If you want to get pass you must answer my riddle. Get it right then i will skiddadle'";
                cout << "Jake asked: 'and what if we get it wrong?'";
                cout << "The monkey smiled a wicked smile exposing his long sharp teeth and said: 'Then I'll have a tasty snack'";\
                }
                cout << "Now lets continue...";
                cout << "What gets wetter and wetter the more it dries?";
                cin >> response;
                  if (response != "towel"){
                             cout << " 'Sorry thats wrong. Seems like your adventure didnt last that long.' THE END";
                             }
                if (response == "towel"){
                             cout << "Seems like you got this one right. If you want my advice go to the right () ";
                             cout << "There is a fork in the road. You can either go east or west. Which way do you want to go?" ;
                             cin >> choice;
          }
          }
          
          
          
 answer=  "onion";                                 
 if (CurrentRoom ==9){
                cout<< roomArray[CurrentRoom].getdescription();
                cout<< "The Blueberry Monkey says: 'You use a knife to slice my head, then weep beside me when i am dead. What am I?";
                cin >> response;
                if (response != answer){
                             cout << " 'Sorry thats wrong. Seems like your adventure didnt last that long.' THE END";
                             }
                if (response == answer){
                             cout << "Seems like you got this one. I advise that you two go to the east() ";
                             cout << "There is a fork in the road. You can either go east or west."; 
                              }
                             }
                                                     
answer= "shadow";
if (CurrentRoom ==11){
                cout<< roomArray[CurrentRoom].getdescription();
                cout<< "The Rasberry Monkey says:' I'm the part of the bird that's not in the sky. I can swim in the ocean and yet remain dry. What am I?";
                cin >> response;
                if (response != answer){
                             cout << " 'Sorry thats wrong. Seems like your adventure didnt last that long.' THE END";
                             }
                if (response == answer){
                             cout << "Seems like you got this one right. If you want my advice go to the west () ";
                             cout << "There is a fork in the road. You can either go east or west."; 
                             }
                             }
 answer= "tree";                            
 if (CurrentRoom ==13){
                cout<< roomArray[CurrentRoom].getdescription();
                cout<< "The Blackberry Monkey says:' Im the last riddle monkey. Its not that you'll get my riddle, I will eat you here.";
                cout << "Now...I am mother and father, but never birth or nurse. I'm rarely still, but I never wander. What am I?";
                cin >> response;
                if (response != answer){
                             cout << " 'Sorry thats wrong. And you were so close too' THE END";
                             }
                if (response == answer){
                             cout << "Seems like you got this one right. If you want my advice go to the east () ";
                             cout << "There is a fork in the road. You can either go north, east or west."; 
                            
                             }
                             }

cout << roomArray[CurrentRoom].getdescription();
cout << "Which way do you want to go?";
cin >> choice;
if (choice == "q"){
           cout << "Hope you enjoyed the game!";
           }
if (choice == "n"){
          CurrentRoom=roomArray[CurrentRoom].getnorth();
           }

if (choice == "s"){
           CurrentRoom=roomArray[CurrentRoom].getsouth();
}
if (choice == "e"){
          CurrentRoom=roomArray[CurrentRoom].geteast();
          }
if (choice == "w"){
          CurrentRoom=roomArray[CurrentRoom].getwest();
          }
if (CurrentRoom ==10){
                 cout<< roomArray[10].getdescription();
                 cout<< "Do you want to play again? Y or N?";
                 cin >> choice;
                 if (choice == "y"){
                            CurrentRoom=0;
                            }
                 if (choice != "y"){
                            cout << "Hope you enjoyed the game!";
                            }
}
}

system ("Pause");
  return 0;
}
