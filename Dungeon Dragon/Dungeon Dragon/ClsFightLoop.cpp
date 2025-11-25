#include "ClsFightLoop.h"

void ClsFightLoop::PlayFightLoop() {
    system("cls");
    //keyinput = getch();
    char input;
    std::cout << "\nQue voulez vous faire attaquer (a),fuir (f) ou aller au terrain d'entrainement(t) ?\n";
    std::cout << "\->";
    std::cin >> input;

    switch (input) {
    case 'a':
        function = Gamefunction::fight;
        break;
    case 'f':
        function = Gamefunction::leave;
    case 't':
        function = Gamefunction::training;
        break;
    default:
        std::cout << "Entrée invalide.\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        function = Gamefunction::play;
        break;
    }
    return;
}
void ClsFightLoop::FightLoop()
{
    system("cls");
    ResetCharacters();
    turn = 1;
    //condition pour 1 enemie a faire
    while (!warrior->isdead() && !wizard->isdead() && !archer->isdead() && !goblin->isdead() && !skeleton->isdead() && !ghost->isdead())
    {
        std::cout << "Classe :" << warrior->GetName() << "\n";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "LVL :" << warrior->GetLv() << "\n";
        std::cout << "HP :" << warrior->GetcurrentHp() << "/" << warrior->GetMaxHp() << "\n";
        std::cout << "ATQ :" << warrior->GetDmg() << "\n";
        std::cout << "SPD :" << warrior->GetSpeed() << "\n";
        std::cout << "\n";
        std::cout << "\n";
        if (turn == 1)
        {
            if (warrior->GetLv() > goblin->GetLv())
            {
                goblin->lvup();
            }
            std::cout << "Vous ete tombez sur un " << goblin->GetName() << " sauvage de niveau " << goblin->GetLv() << ".\n";
        }
        std::cout << "\n//  Tour " << turn++ << "  //\n";
        std::cout << "Choisissez votre competence :\n";
        std::cout << "Attaquer(a)      Esquiver(d)\n";
        std::cout << "/->";
        std::cin >> input;
        system("cls");
        switch (input)
        {
        case'a':
            if (warrior->speed > goblin->speed)
            {
                warrior->attack(*goblin);
                goblin->attack(*warrior);
            }
            else
            {
                goblin->attack(*warrior);
                warrior->attack(*goblin);
            }
            std::cout << goblin->GetName() << " a maintenant " << goblin->GetcurrentHp() << "/" << goblin->GetMaxHp() << "\n";
            break;
        case 'd':
            goblin->attack(*warrior);
            std::cout << warrior->GetName() << " esquive l'attaque.\n";
            warrior->SetDodge(true);
            break;
        default:
                turn--;
            std::cout << "Erreur veuillez saisir un des caractere donne !!!";
        }

        if (goblin->isdead())           //win loose
        {
            std::cout << goblin->GetName() << " est mort.\n";
            std::cout << warrior->GetName() << " a gagne.\n";
            std::cout << "Warrior à gagner 50 exp.\n";
            warrior->SetCurrentExp(50);
            ResetCharacters();
            function = Gamefunction::winInLoop;
            return;
        }
        else if (warrior->isdead())
        {
            std::cout << warrior->GetName() << " est mort.\n";
            function = Gamefunction::loose;
            return;
        }
    }
}
void ClsFightLoop::ResetCharacters() {
    warrior->SetCurrentHp();
    goblin->SetCurrentHp();
}
    