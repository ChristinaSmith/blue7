# 
# Synthesis run script generated by Vivado
# 

set_param iopl.termPlaceClean 1
read_verilog {
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SyncResetA.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SyncFIFO.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SyncBit.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/ResetInverter.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/rtl/mkCRC32.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SyncHandshake.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/FIFO2.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkGMAC.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/TriState.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SyncRegister.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/SizedFIFO.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/MakeResetA.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/FIFO1.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/Counter.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/Verilog/BRAM1Load.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkQBGMAC.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkLCDController.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkOCCP.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkLCDWorker.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkGbeQABS.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkEDCPAdapter.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/mkFTop_kc705.v
  /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.srcs/sources_1/imports/blue7cp/fpgaTop_kc705.v
}
set_property webtalk.parent_dir /home/cms/projects/blue7/blue7cp/blue7cp/blue7cp.data/wt [current_project]
synth_design -top fpgaTop -part xc7k325tffg900-1
write_checkpoint fpgaTop.dcp
report_utilization -file fpgaTop_utilization_synth.rpt