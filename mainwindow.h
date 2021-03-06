#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fgame.h>
#include <fdb.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_chooseGameButton_clicked();

    void refreshUi();

    void on_setNameButton_clicked();

    void on_launchGameButton_clicked();

    void on_chooseExecutableButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

    void resetDatabase();

    void generateGameList();

    void on_actionRefresh_UI_triggered();

    void on_actionRemove_database_2_triggered();

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    FGame *game;
    FDB db;
};

#endif // MAINWINDOW_H
