// OoT3D decomp @ 003f5500  name=FUN_003f5500  size=140

void FUN_003f5500(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x140) = DAT_003f558c;
    if ((*(byte *)(param_1 + 0x1b5) & 2) == 0) {
      FUN_0037632c(param_1,param_1 + 0x1a4);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
      return;
    }
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_003f5590);
    *(undefined2 *)(param_1 + 0x1fc) = 0x3c;
    *(undefined4 *)(param_1 + 0x200) = DAT_003f5594;
  }
  return;
}
