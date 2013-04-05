/*
    read_dcd : c++ class + main file example for reading a CHARMM dcd file
    Copyright (C) 2013  Florent Hedin
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "dcd.hpp"

#ifndef DCD_R_HPP
#define	DCD_R_HPP

class DCD_R : public DCD
{

private:
    //no private attributes
    //private methods
    void alloc_crd();
    
public:
    
    // no public attributes
    // public methods
    DCD_R(const char filename[]); //constructor
    
    void read_header();
    void read_oneFrame();
    void printHeader();
    
    int getNFILE() const;
    const float* getZ() const;
    const float* getY() const;
    const float* getX() const;
    const int* getFREEAT() const;
    int getLNFREAT() const;
    int getNATOM() const;
    int getCHARMV() const;
    int getQCRYS() const;
    int getDELTA4() const;
    int getFROZAT() const;
    int getNDEGF() const;
    int getNSTEP() const;
    int getNSAVC() const;
    int getNPRIV() const;
    const double* getPbc() const;
    const char* getTITLE() const;
    int getNTITLE() const;
    const int* getICNTRL() const;
    const char* getHDR() const;
        
    ~DCD_R();

};

#endif	/* DCD_R_HPP */

