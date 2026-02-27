#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "c_map.h"


int map_uint_bool_add(struct map_uint_bool** map, unsigned int key) {
	bool key_contained = false;

	for (int i = 0; i < (*map)->size && !key_contained; ++i) {
		key_contained = (*map)->struct_uint_bool[i].key == key;
	}

	if (!key_contained) {
		struct map_uint_bool* tmp = *map;
		int new_size = (*map)->size +1;
		*map = realloc(*map,
				sizeof(struct map_uint_bool) + new_size * sizeof(struct struct_uint_bool));
		if (*map == NULL) {
			*map = tmp;
			return 1;
		} else {
			(*map)->size = new_size;
			(*map)->struct_uint_bool[new_size - 1].key = key;
			(*map)->struct_uint_bool[new_size - 1].active = false;
		}
	}

	return 0;
}

int map_uint_bool_remove(struct map_uint_bool** map, unsigned int key) {
	bool key_contained = false;
	int key_idx = 0;

	while (key_idx < (*map)->size && !key_contained) {
		key_contained = (*map)->struct_uint_bool[key_idx].key == key;
		++key_idx;
	}

	if (key_contained) {
		for (int i = key_idx; i < (*map)->size; ++i) {
			(*map)->struct_uint_bool[i - 1].key = (*map)->struct_uint_bool[i].key;
			(*map)->struct_uint_bool[i - 1].active = (*map)->struct_uint_bool[i].active;
			*map = realloc(*map,
					sizeof(struct map_uint_bool) + ((*map)->size - 1) * sizeof(struct struct_uint_bool));
		}
	}

	return 0;
}

bool map_uint_bool_get_value(struct map_uint_bool** map, unsigned int key) {
	bool key_contained = false;
	bool value = false;

	for (int i = 0; i < (*map)->size && !key_contained; ++i) {
		key_contained = (*map)->struct_uint_bool[i].key == key;

		if (key_contained) {
			value = (*map)->struct_uint_bool[i].active;
		}
	}

	return value;
}

int map_uint_bool_set_value(struct map_uint_bool** map, unsigned int key, bool active) {
	bool key_contained = false;

	for (int i = 0; i < (*map)->size && !key_contained; ++i) {
		key_contained = (*map)->struct_uint_bool[i].key == key;

		if (key_contained) {
			(*map)->struct_uint_bool[i].active = active;
		}
	}

	return 0;
}

void free_map_uint_bool(struct map_uint_bool** map) {
	free(*map);
	*map = NULL;
}
