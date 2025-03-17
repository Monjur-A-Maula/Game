
int z01_X;
int z01_Y;
int z02_X;
int z02_Y;
int z03X ;
int z03Y;

bool z01_movingRight = true;
bool z02_movingRight = true;
bool z03_movingRight = true;

int speed = 3;

void level2_initialize(){
	z01_X = 455,
	z01_Y = 75;
	z02_X = 677,
	z02_Y = 76;
	z03X = 950,
	z03Y = 318;
}




void zombiePositionChange_level2() {
	// z01 movement
	if (z01_movingRight) {
		z01_X += speed;
		if (z01_X >= 600) {
			z01_movingRight = false;
		}
	}
	else {
		z01_X -= speed;
		if (z01_X <= 455) {
			z01_movingRight = true;
		}
	}

	// z02 movement
	if (z02_movingRight) {
		z02_X += speed;
		if (z02_X >= 750) {  
			z02_movingRight = false;
		}
	}
	else {
		z02_X -= speed;
		if (z02_X <= 677) {
			z02_movingRight = true;
		}
	}

	// z03 movement
	if (z03_movingRight) {
		z03X += speed;
		if (z03X >= 1100) {  
			z03_movingRight = false;
		}
	}
	else {
		z03X -= speed;
		if (z03X <= 880) {
			z03_movingRight = true;
		}
	}
}

void level3_initialize() {
	z01_X = 400;
	z01_Y = 399;
	z02_X = 940;
	z02_Y = 76;
	z03X = 779;
	z03Y = 405;
}

void zombiePositionChange_level3() {
	// z01 movement (adjusted range)
	if (z01_movingRight) {
		z01_X += speed;
		if (z01_X >= 450) {  
			z01_movingRight = false;
		}
	}
	else {
		z01_X -= speed;
		if (z01_X <= 270) {  
			z01_movingRight = true;
		}
	}

	// z02 movement (adjusted range)
	if (z02_movingRight) {
		z02_X += speed;
		if (z02_X >= 990) {  
			z02_movingRight = false;
		}
	}
	else {
		z02_X -= speed;
		if (z02_X <= 870) { 
			z02_movingRight = true;
		}
	}

	// z03 movement (adjusted range)
	if (z03_movingRight) {
		z03X += speed;
		if (z03X >= 860) {  
			z03_movingRight = false;
		}
	}
	else {
		z03X -= speed;
		if (z03X <= 630) {  
			z03_movingRight = true;
		}
	}
}
