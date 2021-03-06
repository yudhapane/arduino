/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkQtChartExport.h.in

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/*-------------------------------------------------------------------------
  Copyright 2008 Sandia Corporation.
  Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
  the U.S. Government retains certain rights in this software.
-------------------------------------------------------------------------*/

/// \file vtkQtChartExport.h
/// \brief
///   Used to switch between dll import and export on windows.
/// \date February 1, 2008

#ifndef __vtkQtChartExport_h
#define __vtkQtChartExport_h

#include "vtkABI.h"

#define VTKQTCHART_BUILD_SHARED_LIBS

#if defined(VTKQTCHART_BUILD_SHARED_LIBS)
# if defined(vtkQtChart_EXPORTS)
#   define VTKQTCHART_EXPORT VTK_ABI_EXPORT
# else
#   define VTKQTCHART_EXPORT VTK_ABI_IMPORT
# endif
#else
# define VTKQTCHART_EXPORT
#endif

#endif

