Dynamic Billing & Customer Discount System in C

A terminal-based automated checkout simulator that applies multi-tiered pricing reductions based on cart amounts and premium membership variables. This application demonstrates robust functional separation, parameter tracking, and condition trees.

## ⚙️ Core Logic Architecture
* **Tiered Discount Structures:** Computes tiered discounts dynamically (`0%`, `10%`, `20%`, or `25%`) according to billing parameters.
* **Membership Verification:** Integrates switchable verification branches evaluating character flag keys (`'y'` or `'n'`) to assign enhanced rewards to loyal platform customers.
* **Modular Code Structure:** Uses a separate computational execution system (`calc_bill`) split clean from the master thread loop (`main`).

## 🛠️ Technical Implementation Details
* Formatted Console I/O processing (`printf`, `scanf`)
* Local floating-point data validation metrics (`float`)
* Nested control execution states (`if`, `else if`, `else`)
* Pass-by-value functional definitions
