
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name TopLys -dir "/home/mads/Xilinx_Projects/MyFPGAProject/PWM - VHDL-saw/PWM - VHDL/TopLys/planAhead_run_2" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/mads/Xilinx_Projects/MyFPGAProject/PWM - VHDL-saw/PWM - VHDL/TopLys/TopLys.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/mads/Xilinx_Projects/MyFPGAProject/PWM - VHDL-saw/PWM - VHDL/TopLys} }
set_property target_constrs_file "UCFmap.ucf" [current_fileset -constrset]
add_files [list {UCFmap.ucf}] -fileset [get_property constrset [current_run]]
link_design
