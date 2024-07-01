#pragma once

/** Generic - all structs which are put into linked lists begin with this. */
typedef struct Link {
  struct Link *next, *prev;
} Link;

/** Simple subclass of Link. Use this when it is not worth defining a custom one. */
typedef struct LinkData {
  struct LinkData *next, *prev;
  void *data;
} LinkData;

/** Never change the size of this! dna_genfile.cc detects pointer_size with it. */
typedef struct ListBase {
  void *first, *last;
} ListBase;

/* 8 byte alignment! */
