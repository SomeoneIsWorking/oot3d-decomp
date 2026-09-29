// OoT3D decomp @ 0018b514  name=FUN_0018b514  size=532

void FUN_0018b514(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  ushort uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  FUN_00372d4c(DAT_0018b730,DAT_0018b728,param_1 + 0xbc,DAT_0018b72c);
  FUN_00372f38(param_1,param_2,param_1 + 0x990,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,4,param_1 + 0x280,param_1 + 0x5f4,0x11);
  FUN_0036e734(param_1 + 0x1fc,7);
  FUN_0035c358(param_1 + 0x994,param_1 + 0x1fc,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018b734);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_0018b738,param_1);
  if (*(short *)(param_2 + 0x104) == 0x5a) {
    *(undefined4 *)(param_1 + 0xfc) = DAT_0018b73c;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = DAT_0018b740;
  }
  uVar2 = DAT_0018b74c;
  iVar1 = DAT_0018b748;
  fVar5 = (float)VectorSignedToFloat(*(short *)(param_1 + 0x38) + 1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x980) = fVar5 * DAT_0018b744;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  uVar4 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    FUN_00369674(param_1,0);
    uVar4 = *(ushort *)(iVar1 + 0xfe);
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        FUN_00369674(param_1,8);
        *(undefined4 *)(param_1 + 0x13c) = DAT_0018b750;
        *(undefined4 *)(param_1 + 0x98c) = DAT_0018b754;
        *(undefined1 *)(param_1 + 0x1f) = 6;
      }
      goto LAB_0018b670;
    }
    FUN_00369674(param_1,7);
    uVar4 = *(ushort *)(iVar1 + 0xfe);
  }
  if ((~uVar4 & 0xf) == 0) {
    *(undefined4 *)(param_1 + 0x13c) = uVar2;
    *(undefined1 *)(param_1 + 0x1f) = 6;
  }
LAB_0018b670:
  *(undefined4 *)(param_1 + 0x74) = DAT_0018b758;
  fVar3 = DAT_0018b760;
  *(undefined4 *)(param_1 + 0x70) = DAT_0018b75c;
  *(undefined2 *)(param_1 + 0x978) = 0;
  *(undefined1 *)(param_1 + 0x988) = 0;
  fVar5 = DAT_0018b764;
  *(undefined2 *)(param_1 + 0x97a) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x986) = 0;
  *(undefined1 *)(param_1 + 0x98a) = 0;
  iVar1 = (uint)(*(ushort *)(param_1 + 0x1c) >> 8) * 10;
  fVar6 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar1 == 0) {
    fVar5 = fVar6 * fVar3 * fVar5 - fVar5;
  }
  else {
    fVar5 = fVar5 + fVar6 * fVar3 * fVar5;
  }
  *(short *)(param_1 + 0x984) = (short)(int)fVar5;
  return;
}
