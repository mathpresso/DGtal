
/**
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

/**
 * @file dgtalBoard2D-1-points.cpp
 * @ingroup Examples
 * @author Jacques-Olivier Lachaud (\c jacques-olivier.lachaud@univ-savoie.fr )
 * Laboratory of Mathematics (CNRS, UMR 5807), University of Savoie, France
 *
 * @date 2010/11/26
 *
 * An example file named dgtalBoard2D-1-points.
 * 
 */

///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "DGtal/base/Common.h"
#include "DGtal/io/boards/Board3D.h"
#include "DGtal/helpers/StdDefs.h"
///////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace DGtal;
using namespace DGtal::Z3i;

///////////////////////////////////////////////////////////////////////////////

int main()
{
  trace.beginBlock ( "Example dgtalBoard3D-1-points" );


  Point p1( -3, -2, 0 );
  Point p2( 7, 3 , 6);
  Point p3( -1, -1, -1);
  Point p4(-1, -1, 0 );
  Point p5( 5, 2 , 4);
  Point p6(-3, -6, 0 );
  Point p7( 5, 2 , 3);

  Domain domain(p4, p5);
  DigitalSet shape_set( domain );
  shape_set.insertNew(p6);
  shape_set.insertNew(p7);

  
  Board3D board;

  board << SetMode3D(domain.className(), "PavingGrids");
  board << p1 << p2 << p3;
  board << domain;
  board << shape_set;


  board.saveOBJ("dgtalBoard3D-1-points.obj");


  
  trace.endBlock();
  return 0;
}
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
