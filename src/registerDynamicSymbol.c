#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>


/* .C calls */
extern void initmod_bisse();
extern void initmod_hisse();
extern void initmod_hisse_null();
extern void initmod_geosse();
extern void initmod_higeosse();
extern void initmod_musse();
extern void initmod_mussem();

extern void maddison_DE_bisse(void *, void *, void *, void *, void *, void *);
extern void maddison_DE_hisse(void *, void *, void *, void *, void *, void *);
extern void maddison_DE_hisse_null(void *, void *, void *, void *, void *, void *);
extern void classe_geosse_equivalent_derivs(void *, void *, void *, void *, void *, void *);
extern void higeosse_derivs(void *, void *, void *, void *, void *, void *);
extern void notclasse_derivs(void *, void *, void *, void *, void *, void *);
extern void notclasse_more_derivs(void *, void *, void *, void *, void *, void *);

extern void set_birth_bisse_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void set_birth_hisse_null_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void set_birth_hisse_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"initmod_bisse",                   (DL_FUNC) &initmod_bisse,                   0},
    {"initmod_hisse",                   (DL_FUNC) &initmod_hisse,                   0},
    {"initmod_hisse_null",              (DL_FUNC) &initmod_hisse_null,              0},
    {"initmod_geosse",		            (DL_FUNC) &initmod_geosse,                  0},
    {"initmod_higeosse",		        (DL_FUNC) &initmod_higeosse,                0},
    {"initmod_musse",		            (DL_FUNC) &initmod_musse,                   0},
    {"initmod_mussem",		            (DL_FUNC) &initmod_mussem,                  0},
    {"maddison_DE_bisse",               (DL_FUNC) &maddison_DE_bisse,               6},
    {"maddison_DE_hisse",               (DL_FUNC) &maddison_DE_hisse,               6},
    {"maddison_DE_hisse_null",          (DL_FUNC) &maddison_DE_hisse_null,          6},
    {"classe_geosse_equivalent_derivs", (DL_FUNC) &classe_geosse_equivalent_derivs, 6},
    {"higeosse_derivs",                 (DL_FUNC) &higeosse_derivs,                 6},
    {"notclasse_derivs",                (DL_FUNC) &notclasse_derivs,                6},
    {"notclasse_more_derivs",           (DL_FUNC) &notclasse_more_derivs,           6},
    {"set_birth_bisse_void",            (DL_FUNC) &set_birth_bisse_void,           29},
    {"set_birth_hisse_null_void",       (DL_FUNC) &set_birth_hisse_null_void,      54},
    {"set_birth_hisse_void",            (DL_FUNC) &set_birth_hisse_void,           59},
    {NULL, NULL, 0}
};

void R_init_hisse(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
