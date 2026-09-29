// OoT3D decomp @ 00176cdc  name=FUN_00176cdc  size=76

void FUN_00176cdc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = FUN_0036adf4();
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1c2) = 0x1e;
    sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00176d28 + param_2) * 4 + 0xa54));
    *(short *)(param_1 + 0x36) = sVar1 + 0x4000;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00176d2c;
  }
  return;
}
