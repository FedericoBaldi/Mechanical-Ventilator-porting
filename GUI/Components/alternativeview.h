#ifndef MAINDISPLAYCLONE_H
#define MAINDISPLAYCLONE_H

#include <QWidget>
#include "dataadapter.h"
#include "viewif.h"
#include "monitor.h"
#include "plotAxis/plotaxis.h"

namespace Ui {
class AlternativeView;
}

class AlternativeView : public ViewIf
{
  Q_OBJECT

public:
  explicit AlternativeView(DataAdapter *dataAdapater, QWidget *parent = nullptr);
  ~AlternativeView();
  void refresh() override;

private:
  Ui::AlternativeView *ui;
  DataAdapter *m_dataAdapter;
  QList <Monitor*> m_monitorsList;
  PlotAxis * m_plotAxis;
};

#endif // MAINDISPLAYCLONE_H