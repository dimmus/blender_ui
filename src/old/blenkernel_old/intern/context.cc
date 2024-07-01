#include <cstddef>
#include <cstdlib>
#include <cstring>

#include "MEM_guardedalloc.h"

#include "BKE_context.hh"
#include "BKE_main.hh"
#include "BKE_screen.hh"

struct bContext {
  int thread;

  /* windowmanager context */
  struct {
    wmWindowManager *manager;
    wmWindow *window;
    WorkSpace *workspace;
    bScreen *screen;
    // ScrArea *area;
    // ARegion *region;
    // ARegion *region_popup;
    // wmGizmoGroup *gizmo_group;
    // const bContextStore *store;

    /* Operator poll. */
    /**
     * Store the reason the poll function fails (static string, not allocated).
     * For more advanced formatting use `operator_poll_msg_dyn_params`.
     */
    // const char *operator_poll_msg;
    /**
     * Store values to dynamically to create the string (called when a tool-tip is shown).
     */
    // bContextPollMsgDyn_Params operator_poll_msg_dyn_params;
  } wm;

  /* data context */
  struct {
    Main *main;
    Scene *scene;

    // int recursion;
    /** True if python is initialized. */
    // bool py_init;
    // void *py_context;
    /**
     * If we need to remove members, do so in a copy
     * (keep this to check if the copy needs freeing).
     */
    // void *py_context_orig;
  } data;
};

/* context */

bContext *CTX_create()
{
  bContext *C = MEM_cnew<bContext>(__func__);

  return C;
}