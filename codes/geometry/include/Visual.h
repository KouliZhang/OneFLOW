/*---------------------------------------------------------------------------*\
    OneFLOW - LargeScale Multiphysics Scientific Simulation Environment
	Copyright (C) 2017-2019 He Xin and the OneFLOW contributors.
-------------------------------------------------------------------------------
License
    This file is part of OneFLOW.

    OneFLOW is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OneFLOW is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OneFLOW.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/


#pragma once
#include "HXDefine.h"
#include <fstream>
using namespace std;

BeginNameSpace( ONEFLOW )

class NodeMesh;
class FaceMesh;
class CellMesh;
class Mesh;

class Visual
{
public:
	Visual();
	~Visual();
public:
	static int numberOfWords;
public:
	static void SetNumberOfWords( int numberOfWords );
	static void Show( Mesh * mesh );
public:
	static void DumpTitle( fstream & file, Mesh * mesh );
	static void DumpCoordinate( fstream & file, Mesh * mesh );
	static void DumpCoordinate( fstream & file, RealField & coordinate );
	static void DumpFaceNodesLink( fstream & file, Mesh * mesh );
	static void DumpFaceElementLink( fstream & file, Mesh * mesh );
	static void DumpFaceElementLink( fstream & file, Int nFace, Int numberOfElements, IntField & faceElementIndex );
};


EndNameSpace