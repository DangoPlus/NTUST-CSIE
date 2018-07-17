extern struct symbol * Symbol;
extern  Table table( Table tp, int level);
extern  struct symbol * install(char *name, Table *tpp, int level, int sclass);
extern  struct symbol * lookup(char *name, Table tp);
extern Symbol makeSym( char *text );
