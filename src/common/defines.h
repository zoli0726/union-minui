#ifndef __DEFINES_H__
#define __DEFINES_H__

#define CODE_UP			0x5A
#define CODE_DOWN		0x5B
#define CODE_LEFT		0x5C
#define CODE_RIGHT		0x5D
#define CODE_A			0x5E
#define CODE_B			0x5F
#define CODE_X			0x60
#define CODE_Y			0x61
#define CODE_START		0x62
#define CODE_SELECT		0x63
#define CODE_L1			0x64
#define CODE_R1			0x65
#define CODE_L2			0x66
#define CODE_R2			0x67
#define CODE_MENU		0x68
#define CODE_PLUS		0x6C
#define CODE_MINUS		0x6D
#define CODE_POWER		0x74

#define	BUTTON_UP		SDLK_KATAKANA
#define	BUTTON_RIGHT	SDLK_KATAKANAHIRAGANA
#define	BUTTON_DOWN		SDLK_HIRAGANA
#define	BUTTON_LEFT		SDLK_HENKAN
#define	BUTTON_A		SDLK_MUHENKAN
#define	BUTTON_B		SDLK_KP_JPCOMMA
#define	BUTTON_X		SDLK_KP_ENTER
#define	BUTTON_Y		SDLK_RCTRL
#define	BUTTON_L1		SDLK_RALT
#define	BUTTON_L2		SDLK_HOME
#define	BUTTON_R1		SDLK_BREAK
#define	BUTTON_R2		SDLK_UP
#define	BUTTON_SELECT	SDLK_PRINT
#define	BUTTON_START	SDLK_KP_DIVIDE
#define	BUTTON_MENU		SDLK_PAGEUP
#define	BUTTON_PLUS		SDLK_DOWN
#define	BUTTON_MINUS	SDLK_PAGEDOWN
#define	BUTTON_POWER	SDLK_UNKNOWN

#define VOLUME_MIN 		0
#define VOLUME_MAX 		20
#define BRIGHTNESS_MIN 	0
#define BRIGHTNESS_MAX 	10

#define MAX_PATH 512

#define SDCARD_PATH "/mnt/sdcard"
#define ROMS_PATH SDCARD_PATH "/Roms"
#define ROOT_SYSTEM_PATH SDCARD_PATH "/.system/"
#define SYSTEM_PATH SDCARD_PATH "/.system/" PLATFORM
#define RES_PATH SDCARD_PATH "/.system/res"
#define FONT_PATH RES_PATH "/BPreplayBold-unhinted.otf"
#define USERDATA_PATH SDCARD_PATH "/.userdata/" PLATFORM
#define PAKS_PATH SYSTEM_PATH "/paks"
#define RECENT_PATH USERDATA_PATH "/.minui/recent.txt"
#define FAUX_RECENT_PATH SDCARD_PATH "/Recently Played"
#define COLLECTIONS_PATH SDCARD_PATH "/Collections"

#define LAST_PATH "/tmp/last.txt" // transient
#define CHANGE_DISC_PATH "/tmp/change_disc.txt"
#define RESUME_SLOT_PATH "/tmp/resume_slot.txt"
#define AUTO_RESUME_PATH USERDATA_PATH "/.minui/auto_resume.txt"
#define AUTO_RESUME_SLOT 9

#define TRIAD_WHITE 		0xff,0xff,0xff
#define TRIAD_BLACK 		0x00,0x00,0x00
#define TRIAD_LIGHT_GRAY 	0x7f,0x7f,0x7f
#define TRIAD_GRAY 			0x99,0x99,0x99
#define TRIAD_DARK_GRAY 	0x26,0x26,0x26

#define TRIAD_LIGHT_TEXT 	0xcc,0xcc,0xcc
#define TRIAD_DARK_TEXT 	0x66,0x66,0x66

#define COLOR_WHITE			(SDL_Color){TRIAD_WHITE}
#define COLOR_GRAY			(SDL_Color){TRIAD_GRAY}
#define COLOR_BLACK			(SDL_Color){TRIAD_BLACK}
#define COLOR_LIGHT_TEXT	(SDL_Color){TRIAD_LIGHT_TEXT}
#define COLOR_DARK_TEXT		(SDL_Color){TRIAD_DARK_TEXT}
#define COLOR_BUTTON_TEXT	(SDL_Color){TRIAD_GRAY}

#define BASE_WIDTH 320
#define BASE_HEIGHT 240

#define SCREEN_WIDTH 	640
#define SCREEN_HEIGHT 	480
#define SCREEN_SCALE 	2 // SCREEN_HEIGHT / BASE_HEIGHT

#define SCREEN_DEPTH 	16
#define SCREEN_BPP 		2
#define SCREEN_PITCH 	(SCREEN_WIDTH * SCREEN_BPP)

// all before scale
#define PILL_SIZE 30
#define BUTTON_SIZE 20
#define BUTTON_MARGIN 5 // ((PILL_SIZE - BUTTON_SIZE) / 2)
#define BUTTON_PADDING 12
#define SETTINGS_SIZE 4
#define SETTINGS_WIDTH 80

#define CLOCK_SIZE 100
#define MAIN_ROW_COUNT 6 // SCREEN_HEIGHT / (PILL_SIZE * SCREEN_SCALE) - 2 (floor and subtract 1 if not an integer)
#define PADDING 10 // PILL_SIZE / 3 (or non-integer part of the previous calculatiom divided by three)

#define FONT_LARGE 16 	// menu
#define FONT_MEDIUM 14 	// single char button label
#define FONT_SMALL 12 	// button hint
#define FONT_TINY 10  	// multi char button label

///////////////////////////////

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) < (b) ? (a) : (b)
#define CEIL_DIV(a,b) ((a) + (b) - 1) / (b)

#define SCALE1(a) ((a)*SCREEN_SCALE)
#define SCALE2(a,b) ((a)*SCREEN_SCALE),((b)*SCREEN_SCALE)
#define SCALE4(a,b,c,d) ((a)*SCREEN_SCALE),((b)*SCREEN_SCALE),((c)*SCREEN_SCALE),((d)*SCREEN_SCALE)


#endif