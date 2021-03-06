/* 
 * File:   CointegrationGUI.h
 * Author: Piotr Gregor  peter cf16 eu
 *
 * Created on August 25, 2013, 4:31 AM
 */

#ifndef COINTEGRATIONGUI_H
#define	COINTEGRATIONGUI_H

#include <GUI/ui_CointegrationGUI.h>
#include <TradingStrategies/Cointegration.h>
#include <IBAdditions/IB_events.h>
#include <GUI/SubscribeToDataGUI.h>

#include <vector>
#include <boost/shared_ptr.hpp>

class CointegrationGUI : public QDialog {
    Q_OBJECT
public:
    CointegrationGUI();
    virtual ~CointegrationGUI(){}
    
private slots:
    /**
     * open SubscribeToDataGUI dialog
     */
    void subscribeClicked();

    void subscribeToData();
    
private:
    Ui::CointegrationGUI widget_;
    Cointegration cointegration_;
    std::vector<IBAdditions::ContractEvent> observedContracts_;
    
    std::vector<boost::shared_ptr<SubscribeToDataGUI> > subscribeToDataGUI_ptr_;
};

#endif	/* COINTEGRATIONGUI_H */

