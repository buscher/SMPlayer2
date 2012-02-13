/*  smplayer2, GUI front-end for mplayer2.
    Copyright (C) 2006-2010 Ricardo Villalba <rvm@escomposlinux.org>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _TRANSLATOR_H_
#define _TRANSLATOR_H_

#include <QString>
#include <QTranslator>

class Translator
{

public:
    Translator();
    ~Translator();

    void load(QString locale);

protected:
    static bool loadCatalog(QTranslator &t, QString name, QString locale, QString dir);

    QTranslator app_trans;
    QTranslator qt_trans;
};

#endif
