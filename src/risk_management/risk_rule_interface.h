// Copyright [2020] <Copyright Kevin, kevin.lau.gd@gmail.com>

#ifndef FT_SRC_RISK_MANAGEMENT_RISK_RULE_INTERFACE_H_
#define FT_SRC_RISK_MANAGEMENT_RISK_RULE_INTERFACE_H_

#include <string>

#include "common/order.h"
#include "core/error_code.h"

namespace ft {

class RiskRuleInterface {
 public:
  virtual ~RiskRuleInterface() {}

  virtual int check_order_req(const Order* order) { return NO_ERROR; }

  virtual void on_order_sent(const Order* order) {}

  virtual void on_order_accepted(const Order* order) {}

  virtual void on_order_traded(const Order* order, int this_traded,
                               double traded_price) {}

  virtual void on_order_canceled(const Order* order, int canceled) {}

  virtual void on_order_completed(const Order* order) {}

  virtual void on_order_rejected(const Order* order, int error_code) {}
};

}  // namespace ft

#endif  // FT_SRC_RISK_MANAGEMENT_RISK_RULE_INTERFACE_H_
