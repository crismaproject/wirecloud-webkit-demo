/*
 * about_dialog.h
 * 
 * declares the about dialog
 * 
 * Autor: Oliver Maurhart, <oliver.maurhart@ait.ac.at>
 *
 * Copyright (C) 2013 AIT Austrian Institute of Technology
 * AIT Austrian Institute of Technology GmbH
 * Donau-City-Strasse 1 | 1220 Vienna | Austria
 * http://www.ait.ac.at
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 
#ifndef __ABOUT_DIALOG_H_
#define __ABOUT_DIALOG_H_


// ------------------------------------------------------------
// incs

// Qt
#include <QDialog>


// ------------------------------------------------------------
// decl


namespace crisma {
    
/**
 * This dialog show what this is all about
 */
class about_dialog : public QDialog {
    

    Q_OBJECT
    
    
public:


    /**
     * ctor
     * 
     * @param   cParent     parent widget
     */
    about_dialog(QWidget * cParent = nullptr);
    
    
    /**
     * dtor
     */
    virtual ~about_dialog() {};


private:    
    
    
    /**
     * setup the widget
     */
    void setup_widget();
};


}



#endif
