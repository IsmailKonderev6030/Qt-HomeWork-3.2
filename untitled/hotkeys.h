#ifndef HOTKEYS_H
#define HOTKEYS_H

#define ctrl 16777249

#include <QDialog>
#include <QVector>
#include <QChar>
#include <QTranslator>

namespace Ui {
class HotKeys;
}

class HotKeys : public QDialog
{
    Q_OBJECT

public:
    explicit HotKeys(QWidget *parent = nullptr);
    ~HotKeys();

    QVector<quint32> getKeys()const;

    void setAllLineEdit();

    void SetLanguage(QTranslator &translater);

    void RemoveLanguage(QTranslator &translater);

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::HotKeys *ui;

    QVector<quint32> keys; // open,save,new,exit
};

#endif // HOTKEYS_H
