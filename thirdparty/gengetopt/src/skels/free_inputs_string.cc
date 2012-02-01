/*
 * File automatically generated by
 * gengen 1.0 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "free_inputs_string.h"

void
free_inputs_string_gen_class::generate_free_inputs_string(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  stream << "for (i = 0; i < ";
  generate_string (structure, stream, indent + indent_str.length ());
  stream << "->inputs_num; ++i)";
  stream << "\n";
  stream << indent_str;
  stream << "  free (";
  generate_string (structure, stream, indent + indent_str.length ());
  stream << "->inputs [i]);";
  stream << "\n";
  stream << indent_str;
  stream << "\n";
  stream << indent_str;
  stream << "if (";
  generate_string (structure, stream, indent + indent_str.length ());
  stream << "->inputs_num)";
  stream << "\n";
  stream << indent_str;
  stream << "  free (";
  generate_string (structure, stream, indent + indent_str.length ());
  stream << "->inputs);";
  stream << "\n";
  stream << indent_str;
}