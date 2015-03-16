#ifndef _Player_h_
#define _Player_h_

#include "Sprite.h"
#include "Vector2.h"

#include <gba_types.h>

struct GBFS_FILE;

typedef enum Direction
{
	WEST = 4, SOUTH = 5, EAST = 6, NORTH = 7
} Direction;

typedef struct Player 
{
	Sprite sprite;
	Vector2 velocity;
	Direction heading;
} Player;

void Player_construct(
	Player* self,
	const struct GBFS_FILE* dat,
	const char* image, 
	const char* pal, 
	const char* anims,
	int palette,
	int slot
	);

void Player_update(Player* self, FIXED dt);

void Player_draw(Player* self, int offset_x, int offset_y);

void Player_destroy(Player* self);

#endif