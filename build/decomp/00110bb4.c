// OoT3D decomp @ 00110bb4  name=FUN_00110bb4  size=204

void FUN_00110bb4(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = DAT_00110c80;
  iVar3 = (int)*(short *)(param_1 + 0x1c);
  uVar1 = (uint)(iVar3 << 0x19) >> 0x1d;
  if (uVar1 == 0) {
    iVar3 = FUN_0036e864(param_2,(uint)(iVar3 << 0x12) >> 0x1a);
    if (iVar3 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    *(undefined2 *)(param_1 + 0x1c4) = 0x96;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff7f;
    return;
  }
  if (uVar1 == 1) {
    if ((((((*(byte *)(param_1 + 0x1e9) & 2) == 0) || ((*(byte *)(param_1 + 0x1d7) & 2) != 0)) ||
         (*(int *)(param_1 + 0x1e0) == 0)) ||
        ((int)(short)(*(short *)(*(int *)(param_1 + 0x1e0) + 0x36) - *(short *)(param_1 + 0xbe)) +
         0x5000U < 0xa001)) && (-1 < iVar3 << 0x18)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00110c80;
    *(undefined2 *)(param_1 + 0x1c4) = 0x96;
    FUN_0036a308(param_1,param_2);
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff7f;
    return;
  }
  return;
}
