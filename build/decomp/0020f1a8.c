// OoT3D decomp @ 0020f1a8  name=FUN_0020f1a8  size=228

void FUN_0020f1a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0020f28c + param_2);
  if ((*(int *)(param_1 + 0xab8) == 3) &&
     ((int)*(float *)(param_1 + 0x1e0) == 6 || (int)*(float *)(param_1 + 0x1e0) == 0xf)) {
    FUN_00375bcc(param_1,DAT_0020f290);
  }
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xa4c);
  (**(code **)(param_1 + 0xa48))(param_1,param_2);
  if ((*(uint *)(param_1 + 0xb00) & 2) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(iVar1 + 0x44);
  if ((*(uint *)(param_1 + 0xb00) & 4) == 0) {
    FUN_0034c664(param_1,param_1 + 0xb08,0,2);
    return;
  }
  FUN_0034c664(param_1,param_1 + 0xb08,0,4);
  return;
}

