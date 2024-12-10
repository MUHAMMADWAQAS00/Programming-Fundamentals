#include <iostream>
using namespace std;

int main() {
    int mainMenuChoice, displayMenuChoice, soundMenuChoice;
    
    cout << "Welcome to the Game!\n";
    cout << "Please choose an option:\n";
    cout << "1. Start Game\n";
    cout << "2. Settings\n";
    cout << "3. Quit\n";
    cout << "Enter your choice: ";
    cin >> mainMenuChoice;

    switch (mainMenuChoice) {
        case 1:
            cout << "Starting the game...\n";
            break;
        
        case 2:
            // Settings Menu
            cout << "Settings Menu\n";
            cout << "1. Display Settings\n";
            cout << "2. Sound Settings\n";
            cout << "3. Back to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> displayMenuChoice;

            switch (displayMenuChoice) {
                case 1:
                    // Display Settings
                    cout << "Display Settings\n";
                    cout << "1. Resolution\n";
                    cout << "2. Brightness\n";
                    cout << "3. Back to Settings Menu\n";
                    cout << "Enter your choice: ";
                    cin >> displayMenuChoice;
                    switch (displayMenuChoice) {
                        case 1:
                            cout << "Choose Resolution: 1920x1080, 1280x720, 1024x768\n";
                            break;
                        case 2:
                            cout << "Adjust Brightness: 1 - 100\n";
                            break;
                        case 3:
                            cout << "Back to Settings Menu\n";
                            break;
                        default:
                            cout << "Invalid option!\n";
                    }
                    break;

                case 2:
                    // Sound Settings
                    cout << "Sound Settings\n";
                    cout << "1. Volume\n";
                    cout << "2. Mute\n";
                    cout << "3. Back to Settings Menu\n";
                    cout << "Enter your choice: ";
                    cin >> soundMenuChoice;
                    switch (soundMenuChoice) {
                        case 1:
                            cout << "Adjust Volume: 1 - 100\n";
                            break;
                        case 2:
                            cout << "Sound Muted\n";
                            break;
                        case 3:
                            cout << "Back to Settings Menu\n";
                            break;
                        default:
                            cout << "Invalid option!\n";
                    }
                    break;

                case 3:
                    cout << "Back to Main Menu\n";
                    break;
                
                default:
                    cout << "Invalid option!\n";
            }
            break;

        case 3:
            cout << "Exiting game... Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Exiting.\n";
    }

    return 0;
}

