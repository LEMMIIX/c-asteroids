#ifndef C_MAP_H
#define C_MAP_H

struct struct_uint_bool {
	unsigned int key;
	bool active;
};
struct map_uint_bool {
	int size;
	struct struct_uint_bool struct_uint_bool[];
};

int map_uint_bool_add(struct map_uint_bool** map, unsigned int key);
int map_uint_bool_remove(struct map_uint_bool** map, unsigned int key);
bool map_uint_bool_get_value(struct map_uint_bool** map, unsigned int key);
int map_uint_bool_set_value(struct map_uint_bool** map, unsigned int key, bool active);

void free_map_uint_bool(struct map_uint_bool** map);

#endif
