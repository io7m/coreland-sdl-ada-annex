#include "ctxt.h"
#include "install.h"

struct install_item insthier[] = {
  {INST_MKDIR, 0, 0, ctxt_bindir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_incdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_dlibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_slibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_repos, 0, 0, 0755},
  {INST_COPY, "sdl-ada-annex-conf.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "sdl-video-annex.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-video-annex.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "sdl-video-annex.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-video-annex.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-error-annex.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "sdl-video-annex.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-video-annex.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "sdl-ada-annex.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "sdl-ada-annex.a", "libsdl-ada-annex.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "sdl-ada-annex-conf.ld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY_EXEC, "sdl-ada-annex-conf", 0, ctxt_bindir, 0, 0, 0755},
};
unsigned long insthier_len = sizeof(insthier) / sizeof(struct install_item);
