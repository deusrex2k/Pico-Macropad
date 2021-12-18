/** CONFIG
 * 
 * this file saves the different shortcuts, saving them in structs
 * 
 * created by zauberwild on 16.08.2021
 * 
 */

#ifndef config_h
#define config_h
#include "Arduino.h"

//* define colors here
// when defining colors you can either just use the index or
// use #define to give each index a name
const int color_table[][3] = {
	{0, 0, 0},
	{255, 0, 0},
	{255, 64, 0},
	{255, 127, 0},
	{255, 191, 0},
	{255, 255, 0},
	{191, 255, 0},
	{127, 255, 0},
	{64, 255, 0},
	{0, 255, 0},
	{0, 255, 64},
	{0, 255, 127},
	{0, 255, 191},
	{0, 255, 255},
	{0, 191, 255},
	{0, 127, 255},
	{0, 64, 255},
	{0, 0, 255},
	{64, 0, 255},
	{127, 0, 255},
	{191, 0, 255},
	{255, 0, 255},
	{255, 0, 191},
	{255, 0, 127},
	{255, 0, 64},
};

namespace Config
{

	//* data structures
	/** Button Struct
	 * saves name, shortcut and color of an Button
	 */
	struct Button
	{
		char name[5];
		char shortcut[64];
		int color;
	};

	/** App Struct
	 * saves a name of the app and Button(struct) for all the 16 buttons
	 */
	struct App
	{
		char name[21];
		Button buttons[16];
	};

	//* variables

	App apps[24];

	//* functions
	/** @brief set up all the config data. Apps and their shortcuts are hardcoded in here
	 */
	void begin()
	{

		struct Button emptyButton = {"-", "", 0};

		//* CREATE APPS AND SHORTCUTS HERE
		//--SOF_ShortcutDefintion--

		// MAIN
		struct App MAIN = {"MAIN",
						   {
							   {"MIC", "$F240#0.", 5},
							   {"LOCK", "$F240#1.", 3},
							   {"StBy", "$F240#2.", 2},
							   {"Off", "$F240#3.", 1},
							   {"Min", "$F240#4.", 14},
							   {"Max", "$F240#5.", 14},
							   {"Prev", "$F240#6.", 4},
							   {"Next", "$F240#7.", 4},
							   {"<-", "$F240#8.", 0},
							   {"->", "$F240#9.", 0},
							   {"", "$F240#10.", 0},
							   {"", "$F240#11.", 0},
							   {"Win1", "$F240#12.", 17},
							   {"Win2", "$F240#13.", 17},
							   {"Win3", "$F240#14.", 17},
							   {"Win4", "$F240#15.", 17},

						   }};

		// QuickStart
		struct App QuickStart = {"QuickStart",
								 {
									 {"AbiV", "$F241#0.", 19},
									 {"HA_V", "$F241#1.", 19},
									 {"NB_V", "$F241#2.", 19},
									 {"Obdn", "$F241#3.", 19},
									 {"Typo", "$F241#4.", 12},
									 {"Notn", "$F241#5.", 12},
									 {"Word", "$F241#6.", 17},
									 {"Excl", "$F241#7.", 9},
									 {"", "$F241#8.", 0},
									 {"", "$F241#9.", 0},
									 {"", "$F241#10.", 0},
									 {"", "$F241#11.", 0},
									 {"Sblm", "$F241#12.", 3},
									 {"VSCo", "$F241#13.", 15},
									 {"Ardu", "$F241#14.", 12},
									 {"ViSt", "$F241#15.", 20},

								 }};

		// Firefox
		struct App Firefox = {"Firefox",
							  {
								  {"NTab", "$F242#0.", 8},
								  {"NWin", "$F242#1.", 8},
								  {"CTab", "$F242#2.", 3},
								  {"CWin", "$F242#3.", 1},
								  {"Srch", "$F242#4.", 23},
								  {"Wiki", "$F242#5.", 23},
								  {"Leo", "$F242#6.", 23},
								  {"SrPg", "$F242#7.", 23},
								  {"Mute", "$F242#8.", 4},
								  {"Z0", "$F242#9.", 14},
								  {"Z-", "$F242#10.", 14},
								  {"Z+", "$F242#11.", 14},
								  {"Home", "$F242#12.", 16},
								  {"Refr", "$F242#13.", 16},
								  {"<T<", "$F242#14.", 17},
								  {">T>", "$F242#15.", 17},

							  }};

		// VS_Code
		struct App VS_Code = {"VS-Code",
							  {
								  {"", "$F243#0.", 0},
								  {"", "$F243#1.", 0},
								  {"", "$F243#2.", 0},
								  {"", "$F243#3.", 0},
								  {"", "$F243#4.", 0},
								  {"", "$F243#5.", 0},
								  {"", "$F243#6.", 0},
								  {"", "$F243#7.", 0},
								  {"", "$F243#8.", 0},
								  {"", "$F243#9.", 0},
								  {"", "$F243#10.", 0},
								  {"", "$F243#11.", 0},
								  {"", "$F243#12.", 0},
								  {"", "$F243#13.", 0},
								  {"", "$F243#14.", 0},
								  {"", "$F243#15.", 0},

							  }};

		// Obsidian
		struct App Obsidian = {"Obsidian",
							   {
								   {"Expl", "$F244#0.", 6},
								   {"OFil", "$F244#1.", 8},
								   {"Ostd", "$F244#2.", 11},
								   {"Tags", "$F244#3.", 14},
								   {"Srch", "$F244#4.", 6},
								   {"Mode", "$F244#5.", 17},
								   {"", "$F244#6.", 0},
								   {"Outl", "$F244#7.", 14},
								   {"Grph", "$F244#8.", 6},
								   {"", "$F244#9.", 0},
								   {"", "$F244#10.", 0},
								   {"Todo", "$F244#11.", 14},
								   {"PDF", "$F244#12.", 6},
								   {"Corr", "$F244#13.", 4},
								   {"Corr", "$F244#14.", 5},
								   {"Tabl", "$F244#15.", 14},

							   }};

		// Fusion360
		struct App Fusion360 = {"Fusion 360",
								{
									{"", "$F245#0.", 0},
									{"", "$F245#1.", 0},
									{"", "$F245#2.", 0},
									{"", "$F245#3.", 0},
									{"", "$F245#4.", 0},
									{"", "$F245#5.", 0},
									{"", "$F245#6.", 0},
									{"", "$F245#7.", 0},
									{"", "$F245#8.", 0},
									{"", "$F245#9.", 0},
									{"", "$F245#10.", 0},
									{"", "$F245#11.", 0},
									{"", "$F245#12.", 0},
									{"", "$F245#13.", 0},
									{"", "$F245#14.", 0},
									{"", "$F245#15.", 0},

								}};

		// Aseprite
		struct App Aseprite = {"Aseprite",
							   {
								   {"", "$F246#0.", 0},
								   {"", "$F246#1.", 0},
								   {"", "$F246#2.", 0},
								   {"", "$F246#3.", 0},
								   {"", "$F246#4.", 0},
								   {"", "$F246#5.", 0},
								   {"", "$F246#6.", 0},
								   {"", "$F246#7.", 0},
								   {"", "$F246#8.", 0},
								   {"", "$F246#9.", 0},
								   {"", "$F246#10.", 0},
								   {"", "$F246#11.", 0},
								   {"", "$F246#12.", 0},
								   {"", "$F246#13.", 0},
								   {"", "$F246#14.", 0},
								   {"", "$F246#15.", 0},

							   }};

		apps[0] = MAIN;
		apps[1] = QuickStart;
		apps[2] = Firefox;
		apps[3] = VS_Code;
		apps[4] = Obsidian;
		apps[5] = Fusion360;
		apps[6] = Aseprite;

		//--EOF_ShortcutDefintion--

		//debug
		// Serial.println("[Config::begin] ### ### ### ### ### ### ### ###");
		// Serial.print("0.name: ");Serial.println(apps[0].name);
		// Serial.print("0.buttons.6.name: '");Serial.print(apps[0].buttons[6].name); Serial.println("'");
		// Serial.println("[Config::begin] END ### ### ### ### ### ### ###");
	}

}

#endif