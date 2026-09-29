// OoT3D decomp @ 001109a4  name=FUN_001109a4  size=198

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001109a4(int param_1,undefined4 param_2)

{
  uint uVar1;

  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x1a) >> 0x1e;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      if (((*(byte *)(param_1 + 0x1b9) & 2) == 0) || ((*(byte *)(param_1 + 0x22a) & 2) != 0))
      goto LAB_00110a64;
      goto LAB_00110a48;
    }
    if (uVar1 != 2) {
      if ((uVar1 == 3) && ((*(byte *)(param_1 + 0x1b9) & 2) != 0)) {
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00110a6c;
        *(undefined2 *)(param_1 + 0x21a) = 0x96;
        FUN_0036a84c(param_1,param_2);
        FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
        return;
      }
      goto LAB_00110a64;
    }
  }
  if ((*(byte *)(param_1 + 0x1b9) & 2) == 0) {
LAB_00110a64:
    _DAT_00000098 = (short)param_1;
    return;
  }
LAB_00110a48:
  *(undefined4 *)(param_1 + 0x1a4) = uRam00110a68;
  *(undefined2 *)(param_1 + 0x21a) = 0x96;
  *(undefined2 *)(param_1 + 0x218) = 0;
  *(undefined2 *)(param_1 + 0x21c) = 0;
  FUN_0036a84c(param_1,param_2);
  return;
}
