% Simulink.importExternalCTypes('mcuEQ4.h');
def = legacy_code('initialize');
def.SFunctionName = 'sfun_mcuEQ4api';
def.SourceFiles = {'mcuEQ4.c'};
def.HeaderFiles = {'mcuEQ4.h'};
% def.OutputFcnSpec = ['void udpParse(uint8 u1[1500],uint32 u2[1], uint8 y1[1],SPI_EQ4_APP_BUS y2[1], SPI_EQ4_COM_BUS y3[1],SPI_EQ4_FS_BUS y4[1],SPI_EQ4_SD_BUS y5[1],SPI_EQ4_FSPX_BUS y6[1],SPI_EQ4_LA_BUS y7[1],SPI_EQ4_LAP_BUS y8[1],SPI_EQ4_LH_BUS y9[1],SPI_EQ4_LRE_BUS y10[1],SPI_EQ4_OBJ_BUS y11[1],SPI_EQ4_TFL_SPOTS_BUS y12[1],SPI_EQ4_TFL_STRUCT_BUS y13[1],SPI_EQ4_TSR_BUS y14[1]);'];
def.OutputFcnSpec = ['void udpParse(uint8 u1[1500],uint32 u2[1], uint8 y1[1],SPI2SOC_VISIONS_BUS y2[1]);'];
legacy_code('generate_for_sim',def);