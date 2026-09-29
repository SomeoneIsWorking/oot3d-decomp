// OoT3D decomp @ 00194708  name=FUN_00194708  size=260

void FUN_00194708(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d;
  iVar3 = param_1 + uVar1 * 4;
  if (*(int *)(iVar3 + 0x2b0) == 0) {
    return;
  }
  fVar5 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1d6),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1d5),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1d4),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003695cc(fVar7 * DAT_0019480c,fVar6 * DAT_0019480c,fVar5 * DAT_0019480c,DAT_00194814,
               *(int *)(iVar3 + 0x2b0),(int)*(char *)(DAT_00194810 + uVar1),4,0);
  if (-1 < *(char *)((*(ushort *)(param_1 + 0x1c) & 7) * 5 + DAT_00194818 + uVar1)) {
    iVar2 = param_1 + uVar1 * 0x98;
    *(undefined4 *)(iVar2 + 0x2d0) = DAT_0019481c;
    uVar4 = VectorUnsignedToFloat
                      ((uint)*(byte *)(param_1 + 0x1d4) * 0x81 >> 0xf,(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_00194820 == 0) {
      *(undefined4 *)(iVar2 + 0x2cc) = uVar4;
      FUN_003586ec();
    }
    FUN_00373bec(iVar2 + 0x2c4);
  }
  FUN_003721e0(*(undefined4 *)(iVar3 + 0x2b0),param_1 + 0x148);
  *(undefined1 *)(*(int *)(iVar3 + 0x2b0) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(iVar3 + 0x2b0),0);
  return;
}
