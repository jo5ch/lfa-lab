/*
  LFA Lab - Library to simplify local Fourier analysis.
  Copyright (C) 2018  Hannah Rittich

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along
  with this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef SYSTEM_STENCIL_PROPERTIES
#define SYSTEM_STENCIL_PROPERTIES

#include "Common.h"
#include "MatrixContainer.h"
#include "FoProperties.h"
#include <vector>

namespace lfa {

  class SystemSymbolProperties {
    public:
      SystemSymbolProperties(int rows,
                             int cols,
                             FoProperties element_properties);
    private:
      int m_rows; /// < number of rows
      int m_cols; /// < number of columns
      FoProperties m_element_properties;
  };

  SystemSymbolProperties properties_of_symbol_system(
    MatrixContainer<FoProperties> properties);
}

#endif