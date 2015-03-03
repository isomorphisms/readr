// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count_char_from_file
std::map<char,int> count_char_from_file(std::string x, int n = 30, int skip = 0, std::string comment_ = "", std::string quote_ = "\"", bool backslash_escape = false, bool double_escape = false, bool include_alpha = false, bool include_num = false);
RcppExport SEXP fastread_count_char_from_file(SEXP xSEXP, SEXP nSEXP, SEXP skipSEXP, SEXP comment_SEXP, SEXP quote_SEXP, SEXP backslash_escapeSEXP, SEXP double_escapeSEXP, SEXP include_alphaSEXP, SEXP include_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< std::string >::type comment_(comment_SEXP);
    Rcpp::traits::input_parameter< std::string >::type quote_(quote_SEXP);
    Rcpp::traits::input_parameter< bool >::type backslash_escape(backslash_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type double_escape(double_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_alpha(include_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type include_num(include_numSEXP);
    __result = Rcpp::wrap(count_char_from_file(x, n, skip, comment_, quote_, backslash_escape, double_escape, include_alpha, include_num));
    return __result;
END_RCPP
}
// count_char_from_string
std::map<char,int> count_char_from_string(std::string x, int n = 30, int skip = 0, std::string comment_ = "", std::string quote_ = "\"", bool backslash_escape = false, bool double_escape = false, bool include_alpha = false, bool include_num = false);
RcppExport SEXP fastread_count_char_from_string(SEXP xSEXP, SEXP nSEXP, SEXP skipSEXP, SEXP comment_SEXP, SEXP quote_SEXP, SEXP backslash_escapeSEXP, SEXP double_escapeSEXP, SEXP include_alphaSEXP, SEXP include_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< std::string >::type comment_(comment_SEXP);
    Rcpp::traits::input_parameter< std::string >::type quote_(quote_SEXP);
    Rcpp::traits::input_parameter< bool >::type backslash_escape(backslash_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type double_escape(double_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type include_alpha(include_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type include_num(include_numSEXP);
    __result = Rcpp::wrap(count_char_from_string(x, n, skip, comment_, quote_, backslash_escape, double_escape, include_alpha, include_num));
    return __result;
END_RCPP
}
// empty_cols
std::vector<bool> empty_cols(std::string x);
RcppExport SEXP fastread_empty_cols(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    __result = Rcpp::wrap(empty_cols(x));
    return __result;
END_RCPP
}
// read_lines
CharacterVector read_lines(SEXP input, int n = 0);
RcppExport SEXP fastread_read_lines(SEXP inputSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(read_lines(input, n));
    return __result;
END_RCPP
}
// count_lines
int count_lines(SEXP input);
RcppExport SEXP fastread_count_lines(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP);
    __result = Rcpp::wrap(count_lines(input));
    return __result;
END_RCPP
}
// parse_text
SEXP parse_text(CharacterVector x, List parser);
RcppExport SEXP fastread_parse_text(SEXP xSEXP, SEXP parserSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type parser(parserSEXP);
    __result = Rcpp::wrap(parse_text(x, parser));
    return __result;
END_RCPP
}
// flip
List flip(ListOf<CharacterVector> x);
RcppExport SEXP fastread_flip(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type x(xSEXP);
    __result = Rcpp::wrap(flip(x));
    return __result;
END_RCPP
}
// readFile
void readFile(std::string path);
RcppExport SEXP fastread_readFile(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    readFile(path);
    return R_NilValue;
END_RCPP
}
// readString
void readString(CharacterVector x);
RcppExport SEXP fastread_readString(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    readString(x);
    return R_NilValue;
END_RCPP
}
// tokenizeString
std::vector<std::string> tokenizeString(CharacterVector x);
RcppExport SEXP fastread_tokenizeString(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(tokenizeString(x));
    return __result;
END_RCPP
}
// parseNumbers
NumericVector parseNumbers(CharacterVector x);
RcppExport SEXP fastread_parseNumbers(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(parseNumbers(x));
    return __result;
END_RCPP
}
// is_double
bool is_double(CharacterVector x);
RcppExport SEXP fastread_is_double(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(is_double(x));
    return __result;
END_RCPP
}
// is_int
bool is_int(CharacterVector x);
RcppExport SEXP fastread_is_int(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(is_int(x));
    return __result;
END_RCPP
}
// parse_delimited_fields
std::vector<std::string> parse_delimited_fields(std::string x, std::string delim_ = ",", std::string quote_ = "\"", bool collapse = false, bool backslash_escape = false, bool double_escape = false, bool strict = false);
RcppExport SEXP fastread_parse_delimited_fields(SEXP xSEXP, SEXP delim_SEXP, SEXP quote_SEXP, SEXP collapseSEXP, SEXP backslash_escapeSEXP, SEXP double_escapeSEXP, SEXP strictSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim_(delim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type quote_(quote_SEXP);
    Rcpp::traits::input_parameter< bool >::type collapse(collapseSEXP);
    Rcpp::traits::input_parameter< bool >::type backslash_escape(backslash_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type double_escape(double_escapeSEXP);
    Rcpp::traits::input_parameter< bool >::type strict(strictSEXP);
    __result = Rcpp::wrap(parse_delimited_fields(x, delim_, quote_, collapse, backslash_escape, double_escape, strict));
    return __result;
END_RCPP
}
// parse_fixed_fields
CharacterVector parse_fixed_fields(std::string x, IntegerVector start, IntegerVector end);
RcppExport SEXP fastread_parse_fixed_fields(SEXP xSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end(endSEXP);
    __result = Rcpp::wrap(parse_fixed_fields(x, start, end));
    return __result;
END_RCPP
}
// parse_lines_from_string
std::vector<std::string> parse_lines_from_string(std::string x, int skip = 0, int n = 0, std::string delim_ = "\n", std::string comment_ = "");
RcppExport SEXP fastread_parse_lines_from_string(SEXP xSEXP, SEXP skipSEXP, SEXP nSEXP, SEXP delim_SEXP, SEXP comment_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim_(delim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type comment_(comment_SEXP);
    __result = Rcpp::wrap(parse_lines_from_string(x, skip, n, delim_, comment_));
    return __result;
END_RCPP
}
// parse_lines_from_file
std::vector<std::string> parse_lines_from_file(std::string x, int skip = 0, int n = 0, std::string delim_ = "\n", std::string comment_ = "");
RcppExport SEXP fastread_parse_lines_from_file(SEXP xSEXP, SEXP skipSEXP, SEXP nSEXP, SEXP delim_SEXP, SEXP comment_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim_(delim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type comment_(comment_SEXP);
    __result = Rcpp::wrap(parse_lines_from_file(x, skip, n, delim_, comment_));
    return __result;
END_RCPP
}
// read_csv_from_file
List read_csv_from_file(std::string path, List parser_spec, CharacterVector col_names, int n = 0, int skip = 0);
RcppExport SEXP fastread_read_csv_from_file(SEXP pathSEXP, SEXP parser_specSEXP, SEXP col_namesSEXP, SEXP nSEXP, SEXP skipSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< List >::type parser_spec(parser_specSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    __result = Rcpp::wrap(read_csv_from_file(path, parser_spec, col_names, n, skip));
    return __result;
END_RCPP
}
// read_csv_from_connection
List read_csv_from_connection(SEXP conn, List parser_spec, CharacterVector col_names, int n = 0, int skip = 0);
RcppExport SEXP fastread_read_csv_from_connection(SEXP connSEXP, SEXP parser_specSEXP, SEXP col_namesSEXP, SEXP nSEXP, SEXP skipSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type conn(connSEXP);
    Rcpp::traits::input_parameter< List >::type parser_spec(parser_specSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    __result = Rcpp::wrap(read_csv_from_connection(conn, parser_spec, col_names, n, skip));
    return __result;
END_RCPP
}
// read_file
String read_file(const std::string& path);
RcppExport SEXP fastread_read_file(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP);
    __result = Rcpp::wrap(read_file(path));
    return __result;
END_RCPP
}
