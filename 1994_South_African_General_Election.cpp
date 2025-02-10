l#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "The Property of Afrique Youth Election Observers. All rights reserved\n";
    cout << "=========================================1994 SOUTH AFRICAN GENERAL ELECTION=========================================\n\n";

    double percent = 100.0;
    
    // Get total number of published centers
    int Totalpublishedcenters;
    cout << "Enter Total published centers:";
    cin >> Totalpublishedcenters;
    
    // Get the total number of registered votes
    int TotalRegisteredvotes;
    cout << "Enter Total Registered Voters/Turnout:";
    cin >> TotalRegisteredvotes;
    
    // Get total number of Votes Cast
    int Totalvotescast;
    cout << "Enter Total Votes Cast/Total Votes:";
    cin >> Totalvotescast;
    
    // Get total number of Null & Void votes
    int Nullandvoid;
    cout << "Enter Total Null_&_Void Votes/Invalid Votes:";
    cin >> Nullandvoid;
    
    // Get Total Valid Votes
    int Totalvalidvotes;
    cout << "Enter Total Valid Votes:";
    cin >> Totalvalidvotes;
    
    // Get Valid Votes for each party
    int Totalvalidvotesfor_African_National_Congress;
    cout << "Enter Total Valid Votes for African National Congress:";
    cin >> Totalvalidvotesfor_African_National_Congress;
    
    int Totalvalidvotesfor_National_Party;
    cout << "Enter Total Valid Votes for National Party:";
    cin >> Totalvalidvotesfor_National_Party;
    
    int Totalvalidvotesfor_Inkatha_Freedom_Party;
    cout << "Enter Total Valid Votes for Inkatha Freedom Party:";
    cin >> Totalvalidvotesfor_Inkatha_Freedom_Party;
    
    int Totalvalidvotesfor_Freedom_Front;
    cout << "Enter Total Valid Votes for Freedom Front:";
    cin >> Totalvalidvotesfor_Freedom_Front;
    
    int Totalvalidvotesfor_Democratic_Party;
    cout << "Enter Total Valid Votes for Democratic Party:";
    cin >> Totalvalidvotesfor_Democratic_Party;
    
    int Totalvalidvotesfor_Pan_African_Congress;
    cout << "Enter Total Valid Votes for Pan African Congress:";
    cin >> Totalvalidvotesfor_Pan_African_Congress;
    
    int Totalvalidvotesfor_African_Christian_Democratic_Party;
    cout << "Enter Total Valid Votes for African Christian Democratic Party:";
    cin >> Totalvalidvotesfor_African_Christian_Democratic_Party;
    
    int Totalvalidvotesfor_Africa_Muslim_Party;
    cout << "Enter Total Valid Votes for Africa Muslim Party:";
    cin >> Totalvalidvotesfor_Africa_Muslim_Party;
    
    int Totalvalidvotesfor_African_Moderates_Congress_Party;
    cout << "Enter Total Valid Votes for African Moderates Congress Party:";
    cin >> Totalvalidvotesfor_African_Moderates_Congress_Party;
    
    int Totalvalidvotesfor_Dikwankwetla_Party;
    cout << "Enter Total Valid Votes for Dikwankwetla Party:";
    cin >> Totalvalidvotesfor_Dikwankwetla_Party;
    
    int Totalvalidvotesfor_Federal_Party;
    cout << "Enter Total Valid Votes for Federal Party:";
    cin >> Totalvalidvotesfor_Federal_Party;
    
    int Totalvalidvotesfor_Minolity_Party;
    cout << "Enter Total Valid Votes for Minolity Party:";
    cin >> Totalvalidvotesfor_Minolity_Party;
    
    int Totalvalidvotesfor_Sport_Organisation_for_Collective_Contribution_and_Equal_Rights;
    cout << "Enter Total Valid Votes for Sport Organisation for Collective Contribution and Equal Rights:";
    cin >> Totalvalidvotesfor_Sport_Organisation_for_Collective_Contribution_and_Equal_Rights;
    
    int Totalvalidvotesfor_Africa_Democratic_Movement;
    cout << "Enter Total Valid Votes for Africa Democratic Movement:";
    cin >> Totalvalidvotesfor_Africa_Democratic_Movement;
    
    int Totalvalidvotesfor_Women_Rights_Peace_Party;
    cout << "Enter Total Valid Votes for Women's Rights Peace Party:";
    cin >> Totalvalidvotesfor_Women_Rights_Peace_Party;
    
    int Totalvalidvotesfor_Ximoko_Progresive_Party;
    cout << "Enter Total Valid Votes for Ximoko Progresive Party:";
    cin >> Totalvalidvotesfor_Ximoko_Progresive_Party;
    
    int Totalvalidvotesfor_Keep_it_Straight_and_Simple_Party;
    cout << "Enter Total Valid Votes for Keep it Straight and Simple Party:";
    cin >> Totalvalidvotesfor_Keep_it_Straight_and_Simple_Party;
    
    int Totalvalidvotesfor_Workers_List_Party;
    cout << "Enter Total Valid Votes for Workers List Party:";
    cin >> Totalvalidvotesfor_Workers_List_Party;
    
    int Totalvalidvotesfor_Luso_South_Africa_Party;
    cout << "Enter Total Valid Votes for Luso South Africa Party:";
    cin >> Totalvalidvotesfor_Luso_South_Africa_Party;

    // Decision Making
    if (Totalvalidvotesfor_African_National_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African National Congress For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_National_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the National Party For Winning 1999 Election\n\n";
    } else if (Totalvalidvotesfor_Inkatha_Freedom_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Inkatha Freedom Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Freedom_Front > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Freedom Front For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Democratic_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Democratic Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Pan_African_Congress > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Pan African Congress For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_African_Christian_Democratic_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African Christian Democratic Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Africa_Muslim_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Africa Muslim Party you're a winner of 1994 election\n\n";
    } else if (Totalvalidvotesfor_African_Moderates_Congress_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the African Moderates Congress Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Dikwankwetla_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Dikwankwetla Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Federal_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Federal Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Minolity_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Minolity Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Sport_Organisation_for_Collective_Contribution_and_Equal_Rights > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Sport Organisation for Collective Contribution and Equal Rights For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Africa_Democratic_Movement > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Africa Democratic Movement For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Women_Rights_Peace_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Women Rights Peace Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Ximoko_Progresive_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Ximoko Progressive Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Keep_it_Straight_and_Simple_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Keep it Straight and Simple Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Workers_List_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Workers List Party For Winning 1994 Election\n\n";
    } else if (Totalvalidvotesfor_Luso_South_Africa_Party > Totalvalidvotes / 2 + 1) {
        cout << "Congratulations to the Luso South Africa Party For Winning 1994 Election\n\n";
    } else {
        cout << "No majority winner was found. RUNOFF may be required\n";
    }

    cout << "__________________________________________________________ELECTION STATISTICS__________________________________________________________\n";

    // Calculating percentage
    cout << fixed << setprecision(2);

    // Calculating percentage for total votes cast
    cout << "Total Votes Cast in percentage = " << (Totalvalidvotes * percent) / Totalvalidvotes << "%\n";
    // Calculating percentage for total valid votes for all candidates
    cout << "Total Valid Votes for all candidates in percentage = " << (Totalvalidvotes * percent) / Totalvotescast << "%\n";
    // Calculating percentage for null_&_void votes
    cout << "Total Null_&_Void votes in percentage = " << (Nullandvoid * percent) / Totalvalidvotes << "%\n";
    // Calculating percentage for Total Registered voters/turnout
    cout << "Total Registered voters/turnout in percentage = " << (Totalvotescast * percent) / TotalRegisteredvotes << "%\n";

    // Calculating percentage for individual parties
    cout << "Total Valid Votes for African National Congress in Percentage = " << (Totalvalidvotesfor_African_National_Congress * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for National Party in Percentage = " << (Totalvalidvotesfor_National_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Inkatha Freedom Party in Percentage = " << (Totalvalidvotesfor_Inkatha_Freedom_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Freedom Front in Percentage = " << (Totalvalidvotesfor_Freedom_Front * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Democratic Party in Percentage = " << (Totalvalidvotesfor_Democratic_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Pan African Congress in Percentage = " << (Totalvalidvotesfor_Pan_African_Congress * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for African Christian Democratic Party in Percentage = " << (Totalvalidvotesfor_African_Christian_Democratic_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Africa Muslim Party in Percentage = " << (Totalvalidvotesfor_Africa_Muslim_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for African Moderates Congress Party in Percentage = " << (Totalvalidvotesfor_African_Moderates_Congress_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Dikwankwetla Party in Percentage = " << (Totalvalidvotesfor_Dikwankwetla_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Federal Party in Percentage = " << (Totalvalidvotesfor_Federal_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Minolity Party in Percentage = " << (Totalvalidvotesfor_Minolity_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Sport Organisation for Collective Contribution and Equal Rights in Percentage = " << (Totalvalidvotesfor_Sport_Organisation_for_Collective_Contribution_and_Equal_Rights * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Africa Democratic Movement in Percentage = " << (Totalvalidvotesfor_Africa_Democratic_Movement * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Women Rights Peace Party in Percentage = " << (Totalvalidvotesfor_Women_Rights_Peace_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Ximoko Progressive Party in Percentage = " << (Totalvalidvotesfor_Ximoko_Progresive_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Keep it Straight and Simple Party in Percentage = " << (Totalvalidvotesfor_Keep_it_Straight_and_Simple_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Workers List Party in Percentage = " << (Totalvalidvotesfor_Workers_List_Party * percent) / Totalvalidvotes << "%\n";
    cout << "Total Valid Votes for Luso South Africa Party in Percentage = " << (Totalvalidvotesfor_Luso_South_Africa_Party * percent) / Totalvalidvotes << "%\n";
    
    cout << "=========================================================================================================================\n\n\n"; 

    return 0;
}
