#include "stdafx.h"
#include <iostream>

#include <glm\glm.hpp>
#include "SETTIGNS.h"
#include "Image.h"

using namespace glm;
using namespace std;


int main()
{
	Image image(SETTINGS::WIDTH, SETTINGS::HEIGHT);
	image.fillImage(vec3(.3f,.6f,.1f));
	image.saveAsPPM(SETTINGS::FILENAME.c_str());
	
	
	system("Pause");
    return 0;
}

