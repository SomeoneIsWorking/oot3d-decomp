// OoT3D decomp @ 0035a050  name=FUN_0035a050  size=712

void FUN_0035a050(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;

  uVar5 = (uint)*(byte *)(DAT_0035a32c + param_2);
  if (param_3 != 0) {
    if (*(short *)(param_1 + 0x23a) == 0) {
      fVar7 = (float)FUN_00371e50(DAT_0035a330);
      uVar8 = DAT_0035a334;
      *(short *)(param_1 + 0x23a) = (short)(int)fVar7 + 0x1e;
      fVar7 = (float)FUN_00371e50(uVar8);
      *(short *)(param_1 + 0x23e) = (short)(int)fVar7;
    }
    fVar7 = (float)FUN_00371e50(DAT_0035a338);
    *(short *)(param_1 + 0x232) = (short)(int)fVar7 + 5;
    uVar5 = (uint)*(short *)(param_1 + 0x23e);
  }
  uVar2 = DAT_0035a348;
  uVar8 = DAT_0035a344;
  uVar1 = (undefined2)DAT_0035a33c;
  switch(uVar5) {
  case 0:
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    if (*(short *)(param_1 + 0x23c) == 0) {
      *(undefined2 *)(param_1 + 0x23c) = 1;
      FUN_00375bcc(param_1,DAT_0035a340);
    }
    break;
  case 1:
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    goto LAB_0035a180;
  case 2:
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    if (*(short *)(param_1 + 0x246) == 0) {
      *(undefined2 *)(param_1 + 0x246) = uVar1;
    }
    break;
  case 3:
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    if (*(short *)(param_1 + 0x242) == 0) {
      *(undefined2 *)(param_1 + 0x242) = uVar1;
    }
    break;
  case 4:
    *(short *)(param_1 + 0x232) = *(short *)(param_1 + 0x232) + 1;
    uVar8 = uVar2;
LAB_0035a180:
    *(undefined4 *)(param_1 + 0x250) = uVar8;
  }
  if (8 < *(short *)(param_1 + 0x232)) {
    *(undefined2 *)(param_1 + 0x232) = 8;
  }
  if (*(short *)(param_1 + 0x232) != 0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_0035a34c;
    uVar8 = DAT_0035a354;
    if ((*(short *)(param_1 + 0x232) == 8) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
      *(undefined4 *)(param_1 + 100) = DAT_0035a350;
      FUN_00375bcc(param_1,uVar8);
    }
    FUN_00373500(*(undefined4 *)(param_1 + 0x250),DAT_0035a35c,DAT_0035a358,param_1 + 0x1e8);
    FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x242),5,1000,0);
    FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x246),5,1000);
    iVar3 = DAT_0035a360;
    iVar6 = (int)*(short *)(param_1 + 0x242);
    if ((iVar6 != 0) &&
       (fVar7 = (float)VectorSignedToFloat(*(short *)(param_1 + 0xbc) - iVar6,
                                           (byte)(in_fpscr >> 0x15) & 3),
       (int)ABS(fVar7) < DAT_0035a360)) {
      fVar7 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x242) = (short)(int)-fVar7;
    }
    iVar6 = (int)*(short *)(param_1 + 0x246);
    if ((iVar6 != 0) &&
       (fVar7 = (float)VectorSignedToFloat(*(short *)(param_1 + 0xc0) - iVar6,
                                           (byte)(in_fpscr >> 0x15) & 3), (int)ABS(fVar7) < iVar3))
    {
      fVar7 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x246) = (short)(int)-fVar7;
    }
    if ((*(short *)(param_1 + 0x23c) != 0) &&
       (sVar4 = *(short *)(param_1 + 0xbe) + 0x1000, *(short *)(param_1 + 0xbe) = sVar4, sVar4 == 0)
       ) {
      *(undefined2 *)(param_1 + 0x23c) = 0;
    }
    if (((short)(int)*(float *)(param_1 + 0x1e4) == 0xb) ||
       ((short)(int)*(float *)(param_1 + 0x1e4) == 0x11)) {
      FUN_00375bcc(param_1,DAT_0035a364);
    }
    FUN_00370734(param_1 + 0x1a8);
    return;
  }
  return;
}
