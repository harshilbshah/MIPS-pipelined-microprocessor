

 
 
 

 



window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"

      waveform add -signals /PM_tb/status
      waveform add -signals /PM_tb/PM_synth_inst/bmg_port/CLKA
      waveform add -signals /PM_tb/PM_synth_inst/bmg_port/ADDRA
      waveform add -signals /PM_tb/PM_synth_inst/bmg_port/ENA
      waveform add -signals /PM_tb/PM_synth_inst/bmg_port/DOUTA

console submit -using simulator -wait no "run"