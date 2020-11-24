// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// sort2.cpp
bool c_pali_lt(const std::string word1, const std::string word2);
extern "C" SEXP _tipitaka_c_pali_lt(SEXP word1, SEXP word2) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_pali_lt(cpp11::as_cpp<cpp11::decay_t<const std::string>>(word1), cpp11::as_cpp<cpp11::decay_t<const std::string>>(word2)));
  END_CPP11
}
// sort2.cpp
std::vector<std::string> c_pali_sort(std::vector<std::string> words);
extern "C" SEXP _tipitaka_c_pali_sort(SEXP words) {
  BEGIN_CPP11
    return cpp11::as_sexp(c_pali_sort(cpp11::as_cpp<cpp11::decay_t<std::vector<std::string>>>(words)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _tipitaka_c_pali_lt(SEXP, SEXP);
extern SEXP _tipitaka_c_pali_sort(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_tipitaka_c_pali_lt",   (DL_FUNC) &_tipitaka_c_pali_lt,   2},
    {"_tipitaka_c_pali_sort", (DL_FUNC) &_tipitaka_c_pali_sort, 1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_tipitaka(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}