// OoT3D decomp @ 00291060  name=FUN_00291060  size=720

void FUN_00291060(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined1 auStack_2c [4];
  float fStack_28;

  uVar2 = DAT_00291334;
  iVar8 = *(int *)(DAT_00291330 + param_2);
  *(short *)(param_1 + 0x60c) = *(short *)(param_1 + 0x60c) + 1;
  if (*(short *)(param_1 + 0x5d4) != 0) {
    *(short *)(param_1 + 0x5d4) = *(short *)(param_1 + 0x5d4) + -1;
  }
  if (*(short *)(param_1 + 0x5d8) != 0) {
    *(short *)(param_1 + 0x5d8) = *(short *)(param_1 + 0x5d8) + -1;
  }
  if (*(short *)(param_1 + 0x5da) != 0) {
    *(short *)(param_1 + 0x5da) = *(short *)(param_1 + 0x5da) + -1;
  }
  if (*(short *)(param_1 + 0x5de) != 0) {
    *(short *)(param_1 + 0x5de) = *(short *)(param_1 + 0x5de) + -1;
  }
  if (*(short *)(param_1 + 0x5e0) != 0) {
    *(short *)(param_1 + 0x5e0) = *(short *)(param_1 + 0x5e0) + -1;
  }
  if (*(short *)(param_1 + 0x5dc) != 0) {
    *(short *)(param_1 + 0x5dc) = *(short *)(param_1 + 0x5dc) + -1;
  }
  if (*(short *)(param_1 + 0x5e2) != 0) {
    *(short *)(param_1 + 0x5e2) = *(short *)(param_1 + 0x5e2) + -1;
  }
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  (**(code **)(param_1 + 0x5d0))(param_1,param_2);
  FUN_00376340(DAT_0029133c,DAT_0029133c,DAT_00291338,param_2,param_1,0x1d);
  if (*(int *)(param_1 + 0x5d0) == DAT_00291340) {
    FUN_0033bd9c();
  }
  else {
    FUN_00376864(param_1);
  }
  uVar2 = DAT_00291348;
  if (DAT_00291344 <= *(uint *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x90);
  bVar9 = (*(ushort *)(param_1 + 0x90) & 0x20) == 0;
  uVar1 = param_1;
  if (!bVar9) {
    uVar6 = *(uint *)(param_1 + 0x5d0);
    uVar1 = DAT_0029134c;
  }
  if (bVar9 || uVar6 == uVar1) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_00291354 <= *(float *)(param_1 + 0x94)) << 0x1d;
    if ((!SUB41(uVar6 >> 0x1d,0)) &&
       (iVar7 = *(int *)(param_1 + 0x124), *(int *)(iVar7 + 0x13c) != 0 && iVar7 != 0)) {
      uVar5 = *(ushort *)(iVar7 + 0x5ea);
      bVar9 = uVar5 == 0;
      if (bVar9) {
        uVar5 = (ushort)*(byte *)(DAT_00291358 + iVar8);
      }
      if (bVar9 && uVar5 == 0) {
        FUN_00368fc0(DAT_0029135c,DAT_00291348,param_2,param_1,(int)*(short *)(param_1 + 0x36),0x10)
        ;
        *(undefined2 *)(iVar7 + 0x5ea) = 0x46;
      }
    }
    uVar2 = DAT_0029136c;
    fVar3 = DAT_00291364;
    piVar4 = DAT_00291360;
    if (*(short *)(param_1 + 0x5de) == 0) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00291360 + 0x110),
                                          (byte)(uVar6 >> 0x15) & 3);
      *(short *)(param_1 + 0x5de) = (short)(int)(DAT_00291368 / fVar10 + DAT_00291364);
      FUN_00375bcc(param_1,uVar2);
    }
    uVar2 = DAT_00291374;
    if (*(short *)(param_1 + 0x5e0) == 0) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(uVar6 >> 0x15) & 3
                                         );
      *(short *)(param_1 + 0x5e0) = (short)(int)(DAT_00291370 / fVar10 + fVar3);
      FUN_00375bcc(param_1,uVar2);
      return;
    }
  }
  else {
    FUN_0036df4c(auStack_2c,param_1 + 0x28);
    fStack_28 = fStack_28 + *(float *)(param_1 + 0x88);
    FUN_0036e670(param_2,auStack_2c,0,0);
    fVar3 = DAT_00291350;
    *(undefined4 *)(param_1 + 0x660) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 0x65c) = uVar2;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(param_1 + 0x650) = fVar10 - fVar3;
    *(uint *)(param_1 + 0x5d0) = uVar1;
  }
  return;
}
