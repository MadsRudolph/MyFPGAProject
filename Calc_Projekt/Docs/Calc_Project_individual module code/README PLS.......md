
# ✨ The VHDL Calculator Project – *Slay Edition* 💅

Welcome to the **ultimate FPGA VHDL Calculator Project**, where binary meets boujee 💻💖  
This folder contains the *glamorous guts* of a digital calculator designed for an FPGA, crafted with sass, logic, and ✨ 16-bit precision ✨.  

Whether you’re debugging flip-flops or flexing ALUs, this right here is your **VHDL main stage**.

---

## 📂 The Iconic Files

| File Name | Description |
|-----------|-------------|
| **`Calc_Data_top.vhd`** | Top-level module handling data path connections — basically, the brainiac. 🧠 |
| **`Calc_Menu.vhd`** | User interface logic — the *main menu diva* deciding what happens and when. 💃 |
| **`Calc_Top_Uden_Debounce_TB.vhd`** | Testbench for the top module *without debounce logic* — no delays, all tea, no shade. ⚡ |
| **`Calc_top.vhd`** | The original top-level calculator module — everything connects here, sweetie. It’s the glue and the glam. ✨ |
| **`CalcVal_reg_16bit.vhd`** | A fabulous 16-bit register to store those thicc calculation values. 🍑📏 |
| **`Map.ucf`** | Constraint file where the pins are defined — it tells the FPGA where to plug that sass in. 🎯 |
| **`Std_8bit_Reg.vhd`** | A stylish lil’ 8-bit register, perfect for quick flips and fashionably compact storage. 👜 |
| **`U1_Div_component.vhd`** | The divider unit component — where binary division gets broken down like a drama scene. 💔➗ |
| **`SevenSeg.vhd`** | FUCK OFF! |
| **`Debounce.vhd`** |BITCH!!! |
---

## 🔮 How to Use This Folder (Without Crying)

1. **Open the files** in [Visual Studio Code](https://code.visualstudio.com/) or any VHDL editor of your choice.
2. Simulate the `TB` (Testbench) files to see the magic in motion. 🧙
3. Use the `.ucf` file when implementing on real FPGA hardware — or the FPGA gets confused and throws a tantrum 😤.
4. Don’t forget to compile with Xilinx ISE or your fav toolchain, sweetie!

---

## 💌 Final Note from the VHDL Queen

This project was built with love, logic gates, and a bit of digital drama. If anything breaks — blame the clock signal, not the queen 😘
