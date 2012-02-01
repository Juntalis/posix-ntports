/*
 * File automatically generated by
 * gengen 1.0 by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "file_save_multiple.h"

void
file_save_multiple_gen_class::generate_file_save_multiple(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  if (has_arg)
    {
      stream << "if (args_info->";
      generate_string (opt_var, stream, indent + indent_str.length ());
      stream << "_orig)";
      stream << "\n";
      stream << indent_str;
      stream << "  {";
      stream << "\n";
      stream << indent_str;
      stream << "    for (i = 0; i < args_info->";
      generate_string (opt_var, stream, indent + indent_str.length ());
      stream << "_given; ++i)";
      stream << "\n";
      stream << indent_str;
      stream << "      {";
      stream << "\n";
      stream << indent_str;
      stream << "        if (args_info->";
      generate_string (opt_var, stream, indent + indent_str.length ());
      stream << "_orig [i])";
      stream << "\n";
      stream << indent_str;
      stream << "          {";
      stream << "\n";
      stream << indent_str;
      stream << "            fprintf(outfile, \"%s=\\\"%s\\\"\\n\", \"";
      generate_string (opt_name, stream, indent + indent_str.length ());
      stream << "\", args_info->";
      generate_string (opt_var, stream, indent + indent_str.length ());
      stream << "_orig [i]);";
      stream << "\n";
      stream << indent_str;
      stream << "          }";
      stream << "\n";
      stream << indent_str;
      stream << "      }";
      stream << "\n";
      stream << indent_str;
      stream << "  }";
      stream << "\n";
      stream << indent_str;
    }
  else
    {
      stream << "for (i = 0; i < args_info->";
      generate_string (opt_var, stream, indent + indent_str.length ());
      stream << "_given; ++i)";
      stream << "\n";
      stream << indent_str;
      stream << "  {";
      stream << "\n";
      stream << indent_str;
      indent = 2;
      stream << "  ";
      generate_string (write_cmd, stream, indent + indent_str.length ());
      indent = 0;
      stream << "\n";
      stream << indent_str;
      stream << "  }";
      stream << "\n";
      stream << indent_str;
    }
}