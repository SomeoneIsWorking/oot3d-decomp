// OoT3D decomp @ 001cd984  name=FUN_001cd984  size=384

void FUN_001cd984(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;

  uVar1 = DAT_001cdb0c;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001cdb04 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_001cdb0c,fVar6 * DAT_001cdb08,param_1 + 0x221c);
  uVar4 = DAT_001cdb14;
  if (*(char *)(DAT_001cdb10 + param_1) == '\0') {
    uVar1 = FUN_0034cc78(param_1,param_2);
    *(undefined4 *)(DAT_001cdb18 + 0x24) = uVar1;
    iVar2 = *(int *)(DAT_001cdb1c + param_1);
    iVar3 = DAT_001cdb20;
    if (iVar2 != DAT_001cdb20) {
      iVar3 = DAT_001cdb24;
    }
    if ((iVar2 == DAT_001cdb20 || iVar2 == iVar3) ||
       (iVar3 = FUN_0034b33c(uVar4,param_2,param_1,param_1 + 0x1764), 0 < iVar3)) {
      FUN_0036055c(param_2,param_1,DAT_001cdb28,1);
      return;
    }
  }
  else {
    iVar3 = FUN_0034b33c(DAT_001cdb14,param_2,param_1,param_1 + 0x254);
    if ((iVar3 != 0) && ((0 < iVar3 || (iVar3 = FUN_0036b4ec(param_1 + 0x254,param_2), iVar3 != 0)))
       ) {
      FUN_0036055c(param_2,param_1,DAT_001cdb2c,1);
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x400000;
      FUN_0033f860(param_1);
      uVar5 = *(undefined4 *)(DAT_001cdb30 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 600);
      uVar4 = FUN_003603c0(param_1 + 0x254,uVar5);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(DAT_001cdb34,uVar4,uVar4,uVar1,param_1 + 0x254,param_2,uVar5,2);
      return;
    }
  }
  return;
}
