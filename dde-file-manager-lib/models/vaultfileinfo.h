/*
 * Copyright (C) 2019 Deepin Technology Co., Ltd.
 *
 * Author:     Gary Wang <wzc782970009@gmail.com>
 *
 * Maintainer: Gary Wang <wangzichong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "dabstractfileinfo.h"

class VaultFileInfoPrivate;
class VaultFileInfo : public DAbstractFileInfo
{
public:
    VaultFileInfo(const DUrl &url);
    ~VaultFileInfo();

    bool exists() const override;

    DUrl parentUrl() const override;
    QString iconName() const override;
    QString genericIconName() const override;

    DUrl mimeDataUrl() const override;

    bool canRedirectionFileUrl() const override;
    DUrl redirectedFileUrl() const override;
    bool canIteratorDir() const Q_DECL_OVERRIDE;

    QString subtitleForEmptyFloder() const override;

    DUrl getUrlByNewFileName(const QString &fileName) const override;

    // 右键菜单
    QVector<MenuAction> menuActionList(MenuType type = SingleFile) const override;
    QMap<MenuAction, QVector<MenuAction> > subMenuActionList(MenuType type = SingleFile) const override;

    QString fileDisplayName() const override;

    bool canRename() const override;

    qint64 size() const override;

    static void setVaultSize(qint64 size);

private:
    bool isRootDirectory() const;

    static qint64 m_vaultSize;

    Q_DECLARE_PRIVATE(VaultFileInfo)
};
