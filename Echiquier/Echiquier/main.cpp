/*INITIALISATION MODELE SDL (note � moi-m�me):
* Ne pas oublier de mettre dans le dossier de la solution les dossiers suivants :
* ->SDL2
* ->SDL2_image-2.0.5
* ->SDL2_mixer-2.0.4
* ->SDL2_ttf-2.0.15
* 
* Ne pas non plus oublier de changer la configuration en x64 dans le Gestionnaire des Configurations
*/

#include "MainScene.h"

int main(int argc, char* argv[]) {
	std::shared_ptr<WindowManager> window(new WindowManager("Echiquier SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, { 255, 255, 255, 255 }));
	std::shared_ptr<MainScene> scene(new MainScene(window));
	
	while (window->GetRunState()) {
		scene->Events();
		scene->Update();
		scene->Draw();
		scene->SoundEffects();
		scene->Delay();
	}
	scene->Clear();

	return 0;
}