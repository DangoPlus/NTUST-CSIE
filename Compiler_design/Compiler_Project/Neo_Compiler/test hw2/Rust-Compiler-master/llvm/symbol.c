#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "symbol.h"

static bool symbol_is_valid(Symbol x);

// *** Symbols ***

Symbol symbol_ctor(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_CTOR, q};
}

Symbol symbol_type(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_TYPE, q};
}

Symbol symbol_var(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_VAR, q};
}

Symbol symbol_field(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_FIELD, q};
}

Symbol symbol_return(void) {
      GQuark q = g_quark_from_string("$return");
      return (Symbol){SYMBOL_VAR, q};
}

Symbol symbol_main(void) {
      GQuark q = g_quark_from_string("main");
      return (Symbol){SYMBOL_VAR, q};
}

static bool symbol_is_valid(Symbol x) {
      return x.kind == SYMBOL_CTOR
            || x.kind == SYMBOL_TYPE
            || x.kind == SYMBOL_VAR
            || x.kind == SYMBOL_FIELD;
}

const char* symbol_to_str(Symbol x) {
      assert(symbol_is_valid(x));
      return g_quark_to_string(x.value);
}
