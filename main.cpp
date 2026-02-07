#include <iostream>
#include <string>
using namespace std;
class FAQ_Data {
    public:
    char ans1[3],ans2[3],ans3[3],ans4[3],ans5[3];
    void getFAQData () {
        cout<<"\n ========================================== FAQ's ==========================================";
        cout<<"\n 1. Which storytelling approach do you find most engaging? ";
        cout<<"\n A1) tight, self-contained story that resolves within a single experience.";
        cout<<"\n B1) A longer arc with multiple episodes exploring characters and world over time.";
        cout<<"\n C1) A story that emphasizes unique visual style and world-building, sometimes with episodic snapshots but \n connected lore.";
        cout<<"\n Your option (A1/B1/C1): ";
        cin>>ans1;
        cout<<"\n 2. How do you prefer pacing and structure?";
        cout<<"\n A2) Quick pacing with a clear beginning, middle, and end in one sitting. ";
        cout<<"\n B2) Moderate pacing that unfolds across several installments, encouraging ongoing viewing.";
        cout<<"\n C2) Varied pacing that leans into visuals and atmosphere, sometimes with slower or more experimental beats.";
        cout<<"\n Your option (A2/B2/C2): ";
        cin>>ans2;
        cout<<"\n 3. When thinking about visuals and animation (or production style), which description resonates most? ";
        cout<<"\n A3) Realistic or conventional live-action visuals with practical effects.";
        cout<<"\n B3) Cinematic lighting and production values that feel like a cohesive series, not necessarily one movie.";
        cout<<"\n C3) Distinctive animation or art style that stands out, with emphasis on aesthetic or fantasy elements.";
        cout<<"\n Your option (A3/B3/C3): ";
        cin>>ans3;
        cout<<"\n 4. How do you typically consume media in terms of episodes or duration?";
        cout<<"\n A4) One-and-done experiences that don’t require commitment beyond a single sitting.";
        cout<<"\n B4) A structured sequence of episodes or seasons that you follow over time.";
        cout<<"\n C4) Shorter segments or episodes with frequent shifts in tone or setting, often found in serialized formats.";
        cout<<"\n Your option (A4/B4/C4): ";
        cin>>ans4;
        cout<<"\n 5. Which statement best describes your viewing habits and preferences?";
        cout<<"\n A5) I value finishing a complete story in one go, without long breaks.";
        cout<<"\n B5) I enjoy building a watch schedule, bingeing or following seasons over weeks.";
        cout<<"\n C5) I enjoy diverse media experiences with strong stylistic choices and varied formats, sometimes outside standard \n TV norms.";
        cout<<"\n Your option (A5/B5/C5): ";
        cin>>ans5;
    }
    void computeRecommendation() {
        char a1 = toupper(ans1[0]);
        char a2 = toupper(ans2[0]);
        char a3 = toupper(ans3[0]);
        char a4 = toupper(ans4[0]);
        char a5 = toupper(ans5[0]);
        int scoreMovies = 0;
        int scoreWebSeries = 0;
        int scoreAnime = 0;
        if (a1 == 'A') scoreMovies += 2;
        if (a2 == 'A') scoreMovies += 2;
        if (a4 == 'A') scoreMovies += 2;
        if (a5 == 'A') scoreMovies += 1;
        if (a1 == 'B') scoreWebSeries += 2;
        if (a2 == 'B') scoreWebSeries += 2;
        if (a3 == 'B') scoreWebSeries += 2;
        if (a4 == 'B') scoreWebSeries += 2;
        if (a5 == 'B') scoreWebSeries += 1;
        if (a1 == 'C') scoreAnime += 2;
        if (a2 == 'C') scoreAnime += 2;
        if (a3 == 'C') scoreAnime += 2;
        if (a4 == 'C') scoreAnime += 1;
        if (a5 == 'C') scoreAnime += 2;
        cout<<"\n =======================================================================";
        if (scoreAnime >= scoreWebSeries && scoreAnime >= scoreMovies) {
            cout << "\n\n Recommendation: Anime";
            cout << "\n Why: You seem to appreciate distinctive style and varied formats with strong aesthetics.";
        } else if (scoreWebSeries >= scoreMovies && scoreWebSeries >= scoreAnime) {
            cout << "\n\n Recommendation: Web Series";
            cout << "\n Why: You prefer ongoing arcs, multi-episode structures, and cohesive series feeling.";
        } else {
            cout << "\n\n Recommendation: Movies";
            cout << "\n Why: You value concise, self-contained storytelling and complete experiences in one sitting.";
        }
        cout << "\n\n";
    }
};
class MediaRanking {
public:
    void printList(const string list[], int size) {
        cout << "\n\n ---------------- TOP "<<size<<" ----------------\n";
        for (int i = 0; i < size; i++) {
            cout << i + 1 << ". " << list[i] << endl;
        }
        cout << " ----------------------------------------\n";
    }
};
class Rankings : public MediaRanking {
public:
    void showRankings() {
        int mediaChoice;
        cout << "\n ================= MEDIA RANKINGS =================";
        cout << "\n 1. Movies";
        cout << "\n 2. Web Series";
        cout << "\n 3. Anime";
        cout << "\n Enter your choice: ";
        cin >> mediaChoice;
        if (mediaChoice == 1) {
            movieRanking();
        }
        else if (mediaChoice == 2) {
            webSeriesRanking();
        }
        else if (mediaChoice == 3) {
            animeRanking();
        }
        else {
            cout << "\n Invalid Media Choice!";
        }
    }
    void movieRanking() {
        int genre;
        cout << "\n ---- MOVIE GENRES ----";
        cout << "\n 1. Action";
        cout << "\n 2. Adventure";
        cout << "\n 3. Animation";
        cout << "\n 4. Comedy";
        cout << "\n 5. Crime";
        cout << "\n Enter genre choice: ";
        cin >> genre;
        if (genre == 1) {
            string action[] = {
                "Terminator 2: Judgment Day",
                "Die Hard",
                "Mad Max: Fury Road",
                "The Dark Knight",
                "The Matrix",
                "Raiders of the Lost Ark",
                "Oldboy",
                "Aliens",
                "One Battle After Another",
                "13 Assassins"
            };
            printList(action, 10);
        }
        else if (genre == 2) {
            string adventure[] = {
                "LOTR: Return of the King",
                "LOTR: Fellowship of the Ring",
                "LOTR: The Two Towers",
                "Inception",
                "Star Wars: Empire Strikes Back",
                "Star Wars: A New Hope",
                "Spirited Away",
                "Seven Samurai",
                "Jurassic Park",
                "Raiders of the Lost Ark"
            };
            printList(adventure, 10);
        }
        else if (genre == 3) {
            string animation[] = {
                "Spirited Away",
                "Pinocchio",
                "WALL-E",
                "Spider-Man: Across the Spider-Verse",
                "The Lion King",
                "Coco",
                "Ratatouille",
                "Up",
                "Finding Nemo",
                "How to Train Your Dragon"
            };
            printList(animation, 10);
        }
        else {
            cout << "\n Genre not available!";
        }
    }
    void webSeriesRanking() {
        int genre;
        cout << "\n ---- WEB SERIES GENRES ----";
        cout << "\n 1. Action";
        cout << "\n 2. Drama";
        cout << "\n 3. Mystery";
        cout << "\n Enter genre choice: ";
        cin >> genre;
        if (genre == 1) {
            string action[] = {
                "Game of Thrones",
                "The Boys",
                "Squid Game",
                "The Last of Us",
                "The Family Man",
                "Reacher",
                "9-1-1",
                "Vikings",
                "Jack Ryan",
                "Hanna"
            };
            printList(action, 10);
        }
        else if (genre == 2) {
            string drama[] = {
                "Breaking Bad",
                "Band of Brothers",
                "Chernobyl",
                "The Wire",
                "The Sopranos",
                "Game of Thrones",
                "Scam 1992",
                "Aspirants",
                "Succession",
                "The Crown"
            };
            printList(drama, 10);
        }
        else if (genre == 3) {
            string mystery[] = {
                "Sherlock",
                "True Detective",
                "Broadchurch",
                "The Night Manager",
                "Mare of Easttown",
                "Happy Valley",
                "The Outsider",
                "Deadloch",
                "Poker Face",
                "Sherwood"
            };
            printList(mystery, 10);
        }
        else {
            cout << "\n Genre not available!";
        }
    }
    void animeRanking() {
        int genre;
        cout << "\n ---- ANIME GENRES ----";
        cout << "\n 1. Adventure";
        cout << "\n 2. Action";
        cout << "\n 3. Romance";
        cout << "\n Enter genre choice: ";
        cin >> genre;
        if (genre == 1) {
            string adventure[] = {
                "Fullmetal Alchemist: Brotherhood",
                "Hunter x Hunter",
                "One Piece",
                "Attack on Titan",
                "Made in Abyss",
                "Vinland Saga",
                "Samurai Champloo",
                "Gurren Lagann",
                "Dororo",
                "Mushishi"
            };
            printList(adventure, 10);
        }
        else if (genre == 2) {
            string action[] = {
                "Attack on Titan",
                "Fullmetal Alchemist: Brotherhood",
                "One Piece",
                "Hunter x Hunter",
                "Bleach: TYBW",
                "Cowboy Bebop",
                "Vinland Saga",
                "Dragon Ball Z",
                "Yu Yu Hakusho",
                "Jujutsu Kaisen"
            };
            printList(action, 10);
        }
        else if (genre == 3) {
            string romance[] = {
                "Fruits Basket",
                "Clannad After Story",
                "Kaguya-sama: Love Is War",
                "Violet Evergarden",
                "Horimiya",
                "Nana",
                "Kids on the Slope",
                "Toradora!",
                "Oregairu",
                "The Fragrant Flower Blooms with Dignity"
            };
            printList(romance, 10);
        }
        else {
            cout << "\n Genre not available!";
        }
    }
};
class Menu {
        FAQ_Data F1;
        Rankings r1;
    public:
        void MainMenu() {
            int choice;
            while (true) {
                cout << "\n ===============================MAIN MENU===============================";
                cout << "\n 1. Answer Some FAQ's  ";
                cout << "\n 2. View Our Rankings";
                cout << "\n 3. Exit";
                cout << "\n =======================================================================";
                cout << "\n Enter your choice (1-3): ";
                cin >> choice;
                switch (choice) {
                    case 1:
                        F1.getFAQData();
                        F1.computeRecommendation();
                        break;
                    case 2:
                        r1.showRankings();
                        break;
                    case 3:
                        cout<<"Thanks for using !!!";
                        return;
                    default:
                        cout << "\n Invalid choice! Please enter a number between 1 and 3.";
                }
            }
        }
    };
int main() {
    Menu m1;
    m1.MainMenu();
    return 0;
}
