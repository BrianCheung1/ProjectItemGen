#include <iostream>
#include <vector>
#include <time.h> 
using namespace std;
int number = 0;

/*
Increases Item by 1 each time its called to create a list. 
Item 1, item 2, Item 3,...
*/
int randomItemNumber(){
    number++;
    return number;
}

/*
Generates a random ward based on the vector elements
*/
string genWards(){
    vector<string> items = {"Warding Totem", "Oracle Lens", "Farsight Alteration"};
    srand(time(NULL)); //this makes each random work based on current time, so each instance will be different
    int RandomNumber;
    RandomNumber = rand() % items.size();
    cout << "Item " << items[RandomNumber] << endl; 
    items.erase(items.begin() + RandomNumber);
    return "===============================";
}
/*
Generates a random boot based on the vector elements
*/
string genBoots(){
    vector<string> items = { "Berserker's Greaves", "Boots of Mobility", "Boots of Swiftness", "Ionian Boots of Lucidity", "Mercury's Treads", "Ninja Tabi", "Sorcerer's Shoes"};
    srand(time(NULL));
    int RandomNumber;
    RandomNumber = rand() % items.size();
    cout << "Item " << randomItemNumber() << ": " << items[RandomNumber] << endl;
    items.erase(items.begin() + RandomNumber);
    return "";
}

/*
Generates 5 random items based on the vector elements
*/
string genItemsTop(){
    vector<string> items = {"Abyssal Mask", "Adaptive Helm", "Dead Man's Plate", "Frozen Heart", "Gargoyle Stoneplate", "Randuin's Omen", "Righteous Glory", "Spirit Visage", "Sunfire Cape", "Thornmail", "Warmog's Armor", "Death's Dance", "Guardian Angel", "Ravenous Hydra", "Sterak's Gage", "The Black Cleaver", "Titanic Hydra", "Trinity Force", "Youmuu's Ghostblade"};
    srand(time(NULL));
    int RandomNumber;
    cout << "Your list of items: " << endl;
    genBoots();
    for(int i = 0; i < 5; i++){
        RandomNumber = rand() % items.size();
        cout << "Item " << randomItemNumber() << ": " << items[RandomNumber] << endl;
        items.erase(items.begin() + RandomNumber);
    }
    cout << "Ward: " << genWards() << endl;
    return "Generated";
}

/*
Generates 5 random items based on the vector elements
*/
string genItemsJungle(){
    srand(time(NULL));
    int RandomNumber, RandomJungleNumber;
    vector<string> items = {"Abyssal Mask", "Adaptive Helm", "Dead Man's Plate", "Frozen Heart", "Gargoyle Stoneplate", "Randuin's Omen", "Righteous Glory", "Spirit Visage", "Sunfire Cape", "Thornmail", "Warmog's Armor", "Death's Dance", "Guardian Angel", "Ravenous Hydra", "Sterak's Gage", "The Black Cleaver", "Titanic Hydra", "Trinity Force", "Youmuu's Ghostblade", "Archangel's Staff /  Seraph's Embrace", "Banshee's Veil", "Hextech GLP-800", "Hextech Gunblade", "Hextech Protobelt-01", "Liandry's Torment", "Lich Bane", "Luden's Echo", "Morellonomicon", "Rabadon's Deathcap", "Rod of Ages", "Rylai's Crystal Scepter", "Spellbinder", "Twin Shadows", "Void Staff", "Zhonya's Hourglass", "Duskblade of Draktharr", "Lord Dominik's Regards /  Mortal Reminder", "Manamune /  Muramana", "Maw of Malmortius", "Youmuu's Ghostblade"};
    vector<string> JungleItem = {"Enchantment - Cinderhulk", "Enchantment - Bloodrazor", "Enchantment - Runic Echoes", "Enchantment - Warrior"};
    RandomNumber = rand() % items.size();
    RandomJungleNumber = rand() % JungleItem.size();
    
    cout << "Your list of items: " << endl;

    cout << "Item "  << randomItemNumber() << ": " << JungleItem[RandomJungleNumber] << endl;
    JungleItem.erase(JungleItem.begin() + RandomJungleNumber);
    
    genBoots();
    for(int i = 0; i < 4; i++){
        RandomNumber = rand() % items.size();
        cout << "Item "  << randomItemNumber() << ": " << items[RandomNumber] << endl;
        items.erase(items.begin() + RandomNumber);
    }
    cout << "Ward: " << genWards() << endl;
    return "Generated";
}

/*
Generates 5 random items based on the vector elements
*/
string genItemsMiddle(){
    vector<string> items = {"Archangel's Staff /  Seraph's Embrace", "Banshee's Veil", "Hextech GLP-800", "Hextech Gunblade", "Hextech Protobelt-01", "Liandry's Torment", "Lich Bane", "Luden's Echo", "Morellonomicon", "Rabadon's Deathcap", "Rod of Ages", "Rylai's Crystal Scepter", "Spellbinder", "Twin Shadows", "Void Staff", "Zhonya's Hourglass", "Duskblade of Draktharr", "Lord Dominik's Regards /  Mortal Reminder", "Manamune /  Muramana", "Maw of Malmortius", "Youmuu's Ghostblade"};
    srand(time(NULL));
    int RandomNumber;
    cout << "Your list of items: " << endl;
    genBoots();
    for(int i = 0; i < 5; i++){
        RandomNumber = rand() % items.size();
        cout << "Item "  << randomItemNumber() << ": " << items[RandomNumber] << endl;
        items.erase(items.begin() + RandomNumber);
    }
    cout << "Ward: " << genWards() << endl;
    return "Generated";
}

/*
Generates 5 random items based on the vector elements
*/
string genItemsADC(){
    vector<string> items = {"Blade of the Ruined King", "Essence Reaver", "Guinsoo's Rageblade", "Infinity Edge", "Lord Dominik's Regards /  Mortal Reminder", "Mercurial Scimitar", "Phantom Dancer", "Rapid Firecannon", "Runaan's Hurricane", "Statikk Shiv", "Stormrazor", "The Bloodthirster", "Wit's End", "Youmuu's Ghostblade"};
    srand(time(NULL));
    int RandomNumber;
    cout << "Your list of items: " << endl;
    genBoots();
    for(int i = 0; i < 5; i++){
        RandomNumber = rand() % items.size();
        cout << "Item " << randomItemNumber() << ": "  << items[RandomNumber] << endl;
        items.erase(items.begin() + RandomNumber);
    }
    cout << "Ward: " << genWards() << endl;
    return "Generated";
}

/*
Generates 5 random items based on the vector elements
*/
string genItemsSupport(){
    vector<string> items = { "Ardent Censer", "Athene's Unholy Grail", "Mikael's Crucible", "Redemption", "Shurelya's Reverie", "Knight's Vow", "Locket of the Iron Solari", "Zeke's Convergence"};
    srand(time(NULL));
    int RandomNumber;
    cout << "Your list of items: " << endl;
    genBoots();
    for(int i = 0; i < 5; i++){
        RandomNumber = rand() % items.size();
        cout << "Item " << randomItemNumber() << ": "  << items[RandomNumber] << endl;
        items.erase(items.begin() + RandomNumber);
    }
    cout << "Ward: " << genWards() << endl;
    return "Generated";
}

string genChampion(){
    vector<string> champions = {"Aatrox", "Ahri", "Akali", "Alistar", "Amumu", "Anivia", "Annie", "Aphelios", "Ashe", "Aurelion Sol", "Azir", "Bard", "Blitzcrank", "Brand", "Braum", "Caitlyn", "Camille", "Cassiopeia", "Cho'Gath", "Corki", "Darius", "Diana", "Dr. Mundo", "Draven", "Ekko", "Elise", "Evelynn", "Ezreal", "Fiddlesticks", "Fiora", "Fizz", "Galio", "Gangplank", "Garen", "Gnar", "Gragas", "Graves", "Hecarim", "Heimerdinger", "Illaoi", "Ivern", "Irelia x", "Janna", "Jarvan IV", "Jax", "Jayce", "Jhin", "Jinx", "Kai’Sa", "Kalista", "Karma", "Karthus", "Kassadin", "Katarina", "Kayle", "Kayn", "Kennen", "Kha'Zix", "Kindred", "Kled", "Kog'Maw", "LeBlanc", "Lee Sin", "Leona", "Lissandra", "Lucian", "Lulu", "Lux", "Malphite", "Malzahar", "Maokai", "Master Yi", "Miss Fortune", "Mordekaiser", "Morgana", "Nami", "Nasus", "Nautilus", "Neeko", "Nidalee", "Nocturne", "Nunu", "Olaf", "Orianna", "Ornn", "Pantheon", "Poppy", "Pyke", "Qiyana", "Quinn", "Rakan", "Rammus", "Rek'Sai", "Renekton", "Rengar", "Riven", "Rumble", "Ryze", "Sejuani", "Senna", "Sett", "Shaco", "Shen", "Shyvana", "Singed", "Sion", "Sivir", "Skarner", "Sona", "Soraka", "Swain", "Sylas", "Syndra", "Tahm Kench", "Taliyah", "Talon", "Taric", "Teemo", "Thresh", "Tristana", "Trundle", "Tryndamere", "Twisted Fate", "Twitch", "Udyr", "Urgot", "Varus", "Vayne", "Veigar", "Vel'Koz", "Vi", "Viktor", "Vladimir", "Volibear", "Warwick", "Wukong", "Xayah", "Xerath", "Xin Zhao", "Yasuo", "Yorick", "Yuumi", "Zac", "Zed", "Ziggs", "Zilean", "Zoe", "Zyra"};
    srand(time(NULL));
    int RandomNumber;
    RandomNumber = rand() % champions.size();
    cout << champions[RandomNumber] << endl;
    champions.erase(champions.begin() + RandomNumber);
    
    return "";
}

int main() {
    string role;
    string champion;

    
    cout << "Which role are you playing?" << endl;
    cin >> role;

    while(champion != "yes" && champion != "no"){
        cout << "Have you chosen a champion?" << endl;
        cin >> champion;
    }

    for(int i = 0; i < role.length(); i++){
        role[i] = tolower(role[i]);
    }

    cout << "===============================" << endl;
    if(champion == "no"){
        cout << "Champion: " << genChampion();
    }
    if(role == "top" || role == "bruiser" || role == "tank"){
            genItemsTop();
    }
    if(role == "jungle" || role == "jung" || role == "jg" || role == "jungler"){
        genItemsJungle();
    } 
    if(role == "mid" || role == "middle" || role == "apc"){
        genItemsMiddle();
    }
    if(role == "bot" || role == "adc" || role == "bottom" || role == "ad" || role == "ad carry"){
        genItemsADC();
    }
    if(role == "supp" || role == "support"){
        genItemsSupport();
    }
    
    

}