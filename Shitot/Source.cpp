#include <iostream>
#include "../ConsoleEventsHandler/ConsoleEventsHandler.h"
#include <string>
#include <vector>
#include "../Panel/Panel.h"
#include "../TextBox/TextBox.h"
#include "../CheckList/CheckList.h"
#include "../RadioBox/RadioBox.h"
#include "../NumericBox/NumericBox.h"

using namespace std;

int main(void) {

	vector<string> stringsA = { "Good", "Day", "Whats", "Up" };

	Panel panel(60, 75);
	panel.setLocationX(2);
	panel.setLocationY(2);

	TextBox tb(20);
	tb.SetBackground(BackgroundColor::Teal);
	tb.SetForeground(ForegroundColor::White);

	CheckList checkList(15, 14, stringsA);
	checkList.SetBackground(BackgroundColor::Green);

	RadioBox radioBox(15, 14, stringsA);
	radioBox.SetBackground(BackgroundColor::Red);

	NumericBox nb(15, 1, 5);
	nb.SetBackground(BackgroundColor::Yellow);
	nb.SetForeground(ForegroundColor::Black);

	panel.AddControl(&radioBox, 19, 2);
	panel.AddControl(&tb, 43, 20);
	panel.AddControl(&checkList, 2, 2);
	panel.AddControl(&nb, 2, 20);

	panel.setVisible(true);
	
	panel.setCursorVisiblity(true);
	ConsoleEventsHandler consoleEventsHandler(&panel);
	consoleEventsHandler.listenToEvents();
	return 0;
}