#include "scene_manager.h"
#include "relay_driver.h"

static int currentScene = 0;

void initScenes(){ currentScene = 0; }

void applySceneLogic(){
    if(currentScene == 1){
        setRelay(0,0);
    }
}
