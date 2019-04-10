/****************************************
 *
 *   INSERT-PROJECT-NAME-HERE - INSERT-GENERIC-NAME-HERE
 *   Copyright (C) 2019 Victor Tran
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * *************************************/
#ifndef DISPLAYPOSITIONWIDGET_H
#define DISPLAYPOSITIONWIDGET_H

#include <QWidget>

namespace Ui {
    class DisplayPositionWidget;
}

struct DisplayPositionWidgetPrivate;
class DisplayPositionWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit DisplayPositionWidget(QWidget *parent = nullptr);
        ~DisplayPositionWidget();

    public slots:
        void loadDisplays();
        void reloadDisplays();

    signals:
        void repositionDisplays(QPoint origin);
        void setDefault();
        void showDisplayPanel();

    private slots:
        void on_setButton_clicked();

    private:
        Ui::DisplayPositionWidget *ui;

        DisplayPositionWidgetPrivate* d;
        bool eventFilter(QObject* watched, QEvent* event);
        void changeEvent(QEvent* event);
};

#endif // DISPLAYPOSITIONWIDGET_H
