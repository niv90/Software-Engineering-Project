#include <iostream>
#include "../ConsoleEventsHandler/ConsoleEventsHandler.h"
#include <string>
#include <vector>
#include "../Panel/Panel.h"
#include "../TextBox/TextBox.h"
#include "../CheckList/CheckList.h"
#include "../RadioBox/RadioBox.h"
#include "../NumericBox/NumericBox.h"
#include "../MessageBoxs/MessageBoxs.h"
#include "../ComoBox/Comobox.h"

using namespace std;

int main(void) {

	vector<string> stringsA = { "Good", "Day", "Whats", "Up" };
	vector<string> strings = { "option A", "option B", "option C", "option D" };

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

	MessageBoxs mb(15, 30);
	mb.SetBackground(BackgroundColor::Purple);

	Comobox comobox(15, 20, strings);
	comobox.SetBackground(BackgroundColor::Blue);

	panel.AddControl(&radioBox, 19, 2);
	panel.AddControl(&tb, 43, 20);
	panel.AddControl(&checkList, 2, 2);
	panel.AddControl(&nb, 2, 20);
	panel.AddControl(&mb, 36, 2);
	panel.AddControl(&comobox, 20, 20);

	panel.setVisible(true);
	
	panel.setCursorVisiblity(true);
	ConsoleEventsHandler consoleEventsHandler(&panel);
	consoleEventsHandler.listenToEvents();
	return 0;
}