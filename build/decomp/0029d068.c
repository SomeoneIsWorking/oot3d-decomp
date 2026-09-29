// OoT3D decomp @ 0029d068  name=FUN_0029d068  size=384

void FUN_0029d068(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  *(byte *)(param_1 + 0x1c1) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,param_1 + 0x1c8,8,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar2 = FUN_00353fd4(param_1,param_2,0);
    FUN_003532e8(param_1,3);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  else {
    uVar2 = FUN_00353fd4(param_1,param_2,6);
    FUN_003532e8(param_1,0);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  FUN_003510b0(param_1,DAT_0029d1e8);
  cVar1 = FUN_00363c10(param_2 + 0x3a58,0x73);
  *(char *)(param_1 + 0x1c0) = cVar1;
  if ((-1 < cVar1) &&
     ((*(short *)(param_1 + 0x1c) == 0 ||
      (iVar3 = FUN_0036e864(param_2,(int)*(char *)(param_1 + 0x1c1)), iVar3 == 0)))) {
    FUN_0037322c(DAT_0029d1ec,param_1);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0029d1f0;
    *DAT_0029d1f4 = 0;
    return;
  }
  FUN_00374428(param_1);
  return;
}
