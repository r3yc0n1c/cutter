#ifndef VERSIONINFODIALOG_H
#define VERSIONINFODIALOG_H

#include <QDialog>
#include <memory>

#include "core/Cutter.h"

namespace Ui {
class VersionInfoDialog;
}

class VersionInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VersionInfoDialog(QWidget *parent = nullptr);
    ~VersionInfoDialog();

private slots:
    void CopyTreeWidgetSelection(QTreeWidget *t);

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

private:
    std::unique_ptr<Ui::VersionInfoDialog> ui;
    CutterCore *core;

    void fillVersionInfo();
};

#endif // VERSIONINFODIALOG_H
