// OoT3D decomp @ 002c3adc  name=FUN_002c3adc  size=160

void FUN_002c3adc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0036055c(param_2,param_1,DAT_002c3b7c,1);
  uVar1 = DAT_002c3b8c;
  iVar2 = DAT_002c3b80 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
  if (param_3 == 0) {
    FUN_00360190(DAT_002c3b88,DAT_002c3b8c,DAT_002c3b8c,DAT_002c3b84,param_1 + 0x254,param_2,
                 *(undefined4 *)(iVar2 + 0x2d0),0);
  }
  else {
    FUN_00360190(DAT_002c3b88,DAT_002c3b8c,DAT_002c3b8c,DAT_002c3b84,param_1 + 0x254,param_2,
                 *(undefined4 *)(iVar2 + 0x2e8),0);
  }
  *(undefined2 *)(DAT_002c3b90 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x2254) = uVar1;
  return;
}

