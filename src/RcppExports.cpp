// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collage_impl
RawVector collage_impl(List tiles, int width, int height, IntegerVector best_tiles, int size);
RcppExport SEXP collage_collage_impl(SEXP tilesSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP best_tilesSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type tiles(tilesSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type best_tiles(best_tilesSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(collage_impl(tiles, width, height, best_tiles, size));
    return rcpp_result_gen;
END_RCPP
}
// base_mask
RawVector base_mask(NumericVector distances, int width, int height, int size, double min_distance, double max_distance);
RcppExport SEXP collage_base_mask(SEXP distancesSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP sizeSEXP, SEXP min_distanceSEXP, SEXP max_distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type min_distance(min_distanceSEXP);
    Rcpp::traits::input_parameter< double >::type max_distance(max_distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(base_mask(distances, width, height, size, min_distance, max_distance));
    return rcpp_result_gen;
END_RCPP
}
// find_best_tiles
IntegerVector find_best_tiles(RawVector img, int size, DataFrame base);
RcppExport SEXP collage_find_best_tiles(SEXP imgSEXP, SEXP sizeSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(find_best_tiles(img, size, base));
    return rcpp_result_gen;
END_RCPP
}
// add_grid_cpp
RawVector add_grid_cpp(RawVector img, int size, RawVector grid_color);
RcppExport SEXP collage_add_grid_cpp(SEXP imgSEXP, SEXP sizeSEXP, SEXP grid_colorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< RawVector >::type grid_color(grid_colorSEXP);
    rcpp_result_gen = Rcpp::wrap(add_grid_cpp(img, size, grid_color));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"collage_collage_impl", (DL_FUNC) &collage_collage_impl, 5},
    {"collage_base_mask", (DL_FUNC) &collage_base_mask, 6},
    {"collage_find_best_tiles", (DL_FUNC) &collage_find_best_tiles, 3},
    {"collage_add_grid_cpp", (DL_FUNC) &collage_add_grid_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_collage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
