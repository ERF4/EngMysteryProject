#include <iostream>
using namespace std;
bool continueGame=false;

int main() {
    string userInput1;
    cout << "In January 25th 1919 storage tank burst in boston releasing two million gallons of molasses. ";
    cout << " \nThis led to the death of 21 people nd over 150 people injured. ";
    cout << " \nYou are a structural engineer investigating the crush of the molasses.";
    cout << " \nYou need to investigate what was the cause of engineering failure.";
    cout << " \nThe US industrial alcohol  kept a log of the temperature and pressure.";
    cout << " \nYour task is to start the arduino logs to check the temperature and pressure.";
    cout << " \nDo you want to continue. (YES/NO) ";
    cin >> userInput1;


    if (userInput1 == "YES") {
        cout << "Proceed to the arduino" << endl;
    }
    else if (userInput1 == "NO") {
        cout << "game over";
        return 0;
    } else{
        cout << "try again";
        return 0;
    }

    cout << "The arduino provides a log of the weather over four days leading up to the disaster, " << endl <<
         "along with the fill level of the tank over those same four days." << endl <<
         "Temperature is given by the blue-yellow-red LED scale, " << endl <<
         "and fill level is given by the green-yellow-red LED scale. " << endl <<
         "See the LCD screen for numerical values. " << endl << endl <<
         "To go through the days up until the tank bursts, you must press a button that correlates to a date." << endl <<
         "Button 1 (Yellow): Sunday, January 12\n"
         "Button 2 (Blue): Monday, January 13\n"
         "Button 3 (Red): Tuesday, January 14\n"
         "Button 4 (Green): Wednesday, January 15, which is the day of the tank bursting" << endl ;

    cout << "To continue through the arduino stage, go through each button in the correct order of dates." << endl <<
         "Identify any sort of patterns leading up to the tank bursting and then answer the questionnaire below. " << endl <<
         "When ready enter CONTINUE below." << endl;
    do {
        cin >> userInput1;
        if ( userInput1 == "CONTINUE"){
            continue;
        } else {
            cout << " INVALID INPUT restart lol ";
        }
    } while(userInput1!="CONTINUE");

    cout << "Which of the following accounts aligns with the data from the log? Enter a number to choose.\n"
            "(1) The tank was filled up to capacity between Sunday and Monday. The weather was very cold. On Tuesday, the weather got much warmer. On Wednesday, warm weather persisted, and the tank burst. \n"
            "(2) The temperature increased significantly on Monday. The tank was filled to capacity by Tuesday. Warm weather persisted through Wednesday, and the tank burst.\n"
            "(3) The temperature decreased from Sunday to Monday. In this cold temperature, the tank was filled up to capacity by Tuesday. It then burst on Wednesday. \n"
            "(4) The tank was emptied by 600000 gallons from Sunday into Monday. Then, the weather got warmer on Tuesday, which continued into Wednesday when the tank burst. \n"
            "(5) It was warm on Wednesday, and the tank was at capacity. On Tuesday it stayed much the same, but on Monday the temperature dropped sharply. By Sunday, the tank was emptied by 600000 gallons. \n"
            "(6) Nothing happened apparently. No temperature or tank fill level for any of the days.\n"
            "(7) HELP! MY ARDUINO LOG ISN’T WORKING!\n"
            "(8) It’s 1919; why does my character have access to a circuit board?\n";

    do {
        int answer;
        cin >> answer;
        switch (answer) {
            case 1:
                cout << "Correct!" << endl;
                continueGame = true;
                break;
            case 2:
                cout << "Uh, are you sure about that? I'd take another look." << endl;
                continueGame = false;
                break;
            case 3:
                cout << "Uh, are you sure about that? I'd take another look." << endl;
                continueGame = false;
                break;
            case 4:
                cout << "Uh, are you sure about that? I'd take another look." << endl;
                continueGame = false;
                break;
            case 5:
                cout << "Time doesn’t move backwards SILLY! Try again!" << endl;
                continueGame = false;
                break;
            case 6:
                cout << "Plug in the batteries and try again." << endl;
                continueGame = false;
                break;
            case 7:
                cout << "We’re sorry for the inconvenience; please contact customer support at 781-460-8325. Ask for Evan." << endl;
                continueGame = false;
                break;
            case 8:
                cout << "....shut up." << endl;
                continueGame = false;
                break;
            default:
                cout<<"what?"<<endl;
                continueGame = false;
                break;
        }
    }while (!continueGame);




    string userInput;
    float  Mn;
    float MnMolar;
    float C;
    float CMolar;
    MnMolar = 55;
    CMolar = 12;
    float totalMn;
    float totalC;
    float correctMass;
    string multiply;
    cout << "Now you will be initiating the chemical analysis sequence." << endl;
    cout << "Do you wish to continue?" << endl;
    cout <<"Enter YES or NO" << endl;
    cin >> userInput;
    float counter;
    counter = 1;
    if (userInput == "YES"){
        cout << "INITIATING CHEMICAL ANALYSIS" << endl;
        cout << "The tank is comprised of steel, your job is to figure out the amount of mass of the individual elements of the steel." << endl;
        cout << "In order for steel to be stable, the mass of the Manganese must be double to the mass of the Carbon." << endl;
        cout << "Here are the molar masses of both elements:" << endl << "Manganese = " << MnMolar << endl ;
        cout << "Carbon = " << CMolar << endl ;
        cout << "To determine if the steel is stable, first you must figure out the amount of moles of both elements in the steel." << endl;
        cout << "Each circle of Mn and C equals to one mole of the elements." << endl;
        cout << "Looking at the laser cut tank, how many Manganese moles do you see?" << endl;
        cin >> Mn;
        cout << "Looking again at the laser cut tank, how many Carbon moles do you see?" << endl;
        cin >> C;
        while( counter <= 1){
            if( C == 8  && Mn == 3){
                counter = 2;
            } else{
                cout << "You did not find the right amount of moles. Try again." << endl;
                cout << "Looking at the laser cut tank, how many Manganese moles do you see?" << endl;
                cin >> Mn;
                cout << "Looking again at the laser cut tank, how many Carbon moles do you see?" << endl;
                cin >> C;
            }
        }
        cout << "To calculate the total mass of both elements, multiply the moles of the element by the molar mass." << endl;
        cout << "What is the total amount of Manganese?" << endl;
        cin >> totalMn;
        cout << "What is the total amount of Carbon?" << endl;
        cin >> totalC;
        counter =1;
        while( counter <= 1 ){
            if( totalC == 96  && totalMn == 165 ){
                cout << "You answered that the total mass of both Manganese and Carbon were ";
                cout << totalMn;
                cout << " and ";
                cout << totalC << endl;
                cout << "That is correct!!" << endl;
                counter = 2;
            } else if( totalC == 96) {
                cout << "Total Manganese was wrong" << endl;
            } else if( totalMn == 165) {
                cout << "Total Carbon was wrong" << endl;
            }
            else{
                cout << "You did not calculate the total masses correctly" << endl;
                cout << "What is the total amount of Manganese?" << endl;
                cin >> totalMn;
                cout << "What is the total amount of Carbon?" << endl;
                cin >> totalC;
            }

        }
        counter = 1;
        cout << " What should have been the correct masses of either Manganese or Carbon? (remember what is considered stable steal)"
             << endl;
        cin >> correctMass;
        while(counter <= 1){
            if( correctMass == totalC*2 || correctMass == totalMn/2 ){
                cout << "You inputted: ";
                cout << correctMass << endl;
                cout << "Correct!" << endl;
                cout << "The actual amount of manganese of the tank was too little in the tank and poorly made " << endl;
                cout << "causing the walls of the tank to be too brittle for the tank to handle the amount of molasses it was containing." << endl;
                counter += 1;
            } else{
                cout << "You did not calculate the right total mass." << endl;
                cout << "What should have been the correct masses of either Manganese or Carbon? (remember what is considered stable steal)"
                     << endl;
                cin >> correctMass;

            }

        }

    } else if ( userInput =="NO" ){
        cout << "are you sure?";

    } else{
        cout << "INVALID INPUT, RUN CODE AGAIN" << endl;
    }

    // final diagnosis
    string userInput2;
    cout << "INITIATING FINAL DIAGNOSIS" << endl;
    cout << "Do you wish to continue? YES/NO" << endl;
    cin >> userInput2;
    if( userInput2 == "YES"){
        cout << "There were many reasons the Boston Molasses disaster." << endl <<
             "The rivets of the tank were poorly made," << endl <<
             "the tank itself had too little manganese that made it too brittle" << endl <<
             "and the pressure and temperature raised too quickly for the tank to handle and exploded." << endl <<
             "Thank you for going through this project, have a great day!!!! :)" << endl;
    }else if( userInput2 == "NO"){
        cout << "Too bad :/, try again!" << endl;
    }else{
        cout << "INVALID INPUT, RERUN CODE AGAIN" << endl;

    }

    return 0;
}


