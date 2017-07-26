#include <iostream>
#include "../ConsoleEventsHandler/ConsoleEventsHandler.h"
#include <string>
#include <vector>
#include "../Panel/Panel.h"
#include "../TextBox/TextBox.h"


using namespace std;

int main(void) {

	Panel panel(60, 75);
	panel.setLocationX(2);
	panel.setLocationY(2);

	TextBox tb(20);
	tb.SetBackground(BackgroundColor::Teal);
	tb.SetForeground(ForegroundColor::White);

	panel.AddControl(&tb, 43, 20);
	
	panel.setVisible(true);
	
	panel.setCursorVisiblity(true);
	ConsoleEventsHandler consoleEventsHandler(&panel);
	consoleEventsHandler.listenToEvents();
	return 0;
}