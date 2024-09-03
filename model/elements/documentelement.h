#ifndef DOCUMENTELEMENT_H
#define DOCUMENTELEMENT_H

#include "flowchartelement.h"

class DocumentElement : public FlowchartElement
{
private:
    virtual void paintChart(QPainter & p);
    virtual void updateMagPointInfo();

public:
    DocumentElement(QWidget *parent = nullptr, PaintChartType type = PaintChartType::DOCUMENTELEMENT) : FlowchartElement(parent,type){}
    DocumentElement(DocumentElement &cr):FlowchartElement(cr){}
    DocumentElement(int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PaintChartType type = PaintChartType::DIAMOND) : FlowchartElement(x1,y1,x2,y2,parent,type){}
    ~DocumentElement(){}
};

#endif // DOCUMENTELEMENT_H