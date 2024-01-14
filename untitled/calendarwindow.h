#ifndef CALENDARWINDOW_H
#define CALENDARWINDOW_H

#include <QDialog>

namespace Ui {
class CalendarWindow;
}

class CalendarWindow : public CalendarWindow
{
    Q_OBJECT

public:
    explicit CalendarWindow(QWidget *parent = 0);
    ~CalendarWindow();

private:
    Ui::CalendarWindow *ui;
};

#endif // CALENDARWINDOW_H
