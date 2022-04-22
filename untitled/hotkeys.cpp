#include "hotkeys.h"
#include "ui_hotkeys.h"

HotKeys::HotKeys(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HotKeys)
{
    ui->setupUi(this);

    keys = {Qt::Key_O+Qt::Key_Control,Qt::Key_S+Qt::Key_Control,Qt::Key_N+Qt::Key_Control,Qt::Key_Q+Qt::Key_Control};

    ui->pushButton  ->    setText(tr("Save"));
    ui->pushButton_2->    setText(tr("Exit"));

    setAllLineEdit();

    ui->label_5->setText(tr("Open file"));
    ui->label_6->setText(tr("Save file"));
    ui->label_7->setText(tr("New file"));
    ui->label_8->setText(tr("Exit"));
    ui->label_9->setText(tr("Enter only one symbol in ENG"));

}

HotKeys::~HotKeys()
{
    delete ui;
}

void HotKeys::on_pushButton_2_clicked()
{
   HotKeys::close();
}


void HotKeys::on_pushButton_clicked()
{
    QString temp;

    temp = ui->lineEdit->text().toUpper();
    if(temp.size() == 1)
        if(temp >= 'A' && temp <= 'Z')
            keys[0] = temp[0].toLatin1()+Qt::Key_Control;

    temp = ui->lineEdit_2->text().toUpper();
    if(temp.size() == 1)
        if(temp >= 'A' && temp <= 'Z')
            keys[1] = temp[0].toLatin1()+Qt::Key_Control;

    temp = ui->lineEdit_3->text().toUpper();
    if(temp.size() == 1)
        if(temp >= 'A' && temp <= 'Z')
            keys[2] = temp[0].toLatin1()+Qt::Key_Control;

    temp = ui->lineEdit_4->text().toUpper();
    if(temp.size() == 1)
        if(temp >= 'A' && temp <= 'Z')
            keys[3] = temp[0].toLatin1()+Qt::Key_Control;

    setAllLineEdit();
    HotKeys::close();
}

QVector<quint32> HotKeys::getKeys() const{
    return keys;
}

void HotKeys::setAllLineEdit(){
    ui->lineEdit->  setText(QChar(keys[0]-Qt::Key_Control));
    ui->lineEdit_2->setText(QChar(keys[1]-Qt::Key_Control));
    ui->lineEdit_3->setText(QChar(keys[2]-Qt::Key_Control));
    ui->lineEdit_4->setText(QChar(keys[3]-Qt::Key_Control));
}


void HotKeys::SetLanguage(QTranslator &translater){
    qApp->installTranslator(&translater);
    ui->retranslateUi(this);
}


void HotKeys::RemoveLanguage(QTranslator &translater){
    qApp->removeTranslator(&translater);
    ui->retranslateUi(this);
}
