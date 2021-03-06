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
#ifndef LOCALEMODEL_H
#define LOCALEMODEL_H

#include <QLocale>
#include <QAbstractListModel>

struct LocaleModelPrivate;
class LocaleModel : public QAbstractListModel
{
        Q_OBJECT

    public:
        explicit LocaleModel(QObject *parent = nullptr);
        ~LocaleModel() override;

        // Basic functionality:
        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

        QModelIndex indexOf(QLocale::Language language);
        QLocale::Language language(QModelIndex index);

    private:
        LocaleModelPrivate* d;

        static QString textForLanguage(QLocale::Language language);
};

#endif // LOCALEMODEL_H
