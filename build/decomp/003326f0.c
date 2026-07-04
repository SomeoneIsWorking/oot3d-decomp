// OoT3D decomp @ 003326f0  name=FUN_003326f0  size=100

void FUN_003326f0(int param_1,float *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  
  sVar2 = FUN_003758b0(param_2[2] - *(float *)(param_1 + 0x30),*param_2 - *(float *)(param_1 + 0x28)
                      );
  sVar1 = *(short *)(param_1 + 0x36);
  sVar2 = sVar2 - sVar1;
  if (param_3 < sVar2) {
    *(short *)(param_1 + 0x36) = sVar1 + (short)param_3;
  }
  else {
    if ((int)sVar2 < -param_3) {
      sVar2 = -(short)param_3;
    }
    *(short *)(param_1 + 0x36) = sVar2 + sVar1;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}

