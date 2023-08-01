// In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.
// There are 2 choices in the menu:
// Choice 1 is to find the area of a circle having radius "r"
// Choice 2 is to find the area of a rectangle having dimensions "l" and "b"

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch(ch){
		// for area of circle PI*r^2
		case 1: return M_PI*a[0]*a[0];
				break;
		case 2: return a[0]*a[1];
	}
}
