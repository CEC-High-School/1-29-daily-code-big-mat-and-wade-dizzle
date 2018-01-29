#include<allegro5\allegro_font.h>
#include<iostream>
#include<allegro5\allegro_ttf.h>
using namespace std;
int age;
int main()
{


	cout << "what is your age?" << endl;
	cin >> age;

	ALLEGRO_DISPLAY *AGE = NULL;
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_FONT *font = al_load_ttf_font("StayWildy.ttf", 72, 0);
	AGE = al_create_display(600, 480);
	al_set_window_position(AGE, 200, 200);
	

	al_clear_to_color(al_map_rgb(255, 255, 255));

	
		al_draw_textf(font, al_map_rgb(200, 40, 200), 300, 200, ALLEGRO_ALIGN_CENTRE, "Happy %d th Birthday", age);

		al_flip_display();

		al_rest(5);

		al_destroy_display(AGE);





}