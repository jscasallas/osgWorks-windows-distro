/*************** <auto-copyright.pl BEGIN do not edit this line> **************
 *
 * osgWorks is (C) Copyright 2009-2011 by Kenneth Mark Bryden
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 *************** <auto-copyright.pl END do not edit this line> ***************/

#ifndef __OSGWTOOLS_READ_FILE__
#define __OSGWTOOLS_READ_FILE__ 1


#include "osgwTools/Export.h"
#include <osg/Node>
#include <osg/Group>

#include <string>


namespace osgwTools
{


/** \defgroup ReadFile OSG plugin utilities
*/
/*@{*/

/** Alternate interface to osgDB::readNodeFiles. Takes
a string of space-separated files names, loads each
as a child of a Group, and returns the Group pointer. */
OSGWTOOLS_EXPORT osg::Node* readNodeFiles( const std::string& fileNames );

/*@}*/


// namespace osgwTools
}

// __OSGWTOOLS_READ_FILE__
#endif
