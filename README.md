![VHDL](https://img.shields.io/badge/VHDL-Programming-blueviolet?style=flat-square&logo=vhdl)  
![FPGA](https://img.shields.io/badge/FPGA-Digilent%20Basys%202-brightgreen?style=flat-square&logo=xilinx)  
![DTU Project](https://img.shields.io/badge/DTU-Engineering-red?style=flat-square&logo=apachespark)  
![Status](https://img.shields.io/badge/Status-Completed-success?style=flat-square)

# FPGA Calculator – VHDL Project

This project was developed as the final assignment for the **Digital Engineering 30081** course at **DTU**.  
The goal was to design and implement a **programmable calculator** on a **Basys 2 FPGA board** using **VHDL**.

The calculator supports four basic arithmetic operations:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)

It computes expressions in the following form:

RESULT = (InputA Op1 InputB) Op2 InputC

Where **InputA**, **InputB**, and **InputC** are three 8-bit values provided via switches,  
and **Op1** and **Op2** are operators provided via switches and buttons.

---

## 🎥 Demo Video
Watch a demo of the calculator in action:  
[![Demo Video](https://img.youtube.com/vi/NvBr_hBevYs/0.jpg)](https://www.youtube.com/watch?v=NvBr_hBevYs)

---

## 🛠 Features
- **Two-stage arithmetic computation** with three inputs and two operators
- Fully implemented **Finite State Machine (FSM)** to control input and operation flow
- Real-time output displayed on the **7-segment display**
- LED indicators showing the current FSM state
- **Sequential binary division algorithm** built as a custom VHDL component
- Debouncing logic for stable button inputs

---

## ⚙️ Hardware
- **FPGA Board:** Digilent Basys 2  
- **Inputs:**
  - **SW0–SW7:** 8-bit HEX values for operands and operators
  - **BTN0:** Enter value
  - **BTN1:** Navigate between inputs
  - **BTN2:** Start calculation
  - **BTN3:** Reset
- **Outputs:**
  - 7-segment display for results and current values
  - LEDs (LD0–LD7) to indicate FSM state

---

## 🔧 System Architecture
The calculator is built around a **top module** (`Calc_Top`) that connects six submodules:  

- **Calc_Menu** – FSM and user input control (custom-designed)  
- **Calc_Data** – Datapath for arithmetic operations (custom-designed)  
- **Div_Component** – Sequential division logic  
- **Debounce** – Button debouncing  
- **DivClk** – Clock divider for display timing  
- **SevenSeg4** – Controls 7-segment display output  

### Block Diagram
[User Input] -> Calc_Menu -> Calc_Data -> [7-Segment Display + LEDs]

---

## 💻 Implementation Details
### FSM (Calc_Menu)
Manages the sequence of inputs:
1. Enter `Val1`  
2. Enter `Op1`  
3. Enter `Val2`  
4. Enter `Op2`  
5. Enter `Val3`  
6. Perform calculation and display result  

The FSM also generates control signals like **Start**, **Done**, and **RegSel** for the datapath.

### Datapath (Calc_Data)
- Addition, subtraction, and multiplication are computed **in a single clock cycle**.
- Division is computed using a **custom sequential binary division algorithm**, taking 18 clock cycles.
- Output is sent back to the FSM when the operation is complete.

---

## 🧪 Testing
The project was tested using both:
- **VHDL Testbench** simulations  
- Physical testing on the **Basys 2 FPGA board**

**Example test case:**  
Performing the calculation `(8 × 2) / 4` produces the expected result `4`.

---

## 👥 Team
This project was developed by:
- **Mads Vølkers Rudolph**  
- Andreas Skånning Jacobsen  
- Sigurd Hestbech Christiansen  
- Jonas Beck Jensen  

---

## 📖 Documentation
- [Final Report (PDF)](./docs/Report.pdf) – Detailed explanation of modules, FSM, and datapath  
- [Project Assignment (PDF)](./docs/Assignment.pdf) – Original project description  

---

## 🚀 How to Run
1. Open the project in **Xilinx ISE 14.7**.  
2. Load `Calc_Top.vhd` as the top module.  
3. Synthesize and implement the design.  
4. Program the Basys 2 FPGA board using the generated bitstream.  
5. Use the buttons and switches to input values and perform calculations.

---

## 🌟 Result
The calculator met **all functional and hardware requirements**, successfully implementing:
- Complex two-step calculations  
- Real-time display and user interaction  
- Stable and reliable operation confirmed via hardware testing and simulation

