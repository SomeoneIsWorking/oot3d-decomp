// OoT3D decomp @ 0019f354  name=FUN_0019f354  size=364

void FUN_0019f354(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];

  iVar2 = *(int *)(DAT_0019f4c0 + param_2);
  if (*(short *)(param_1 + 0x1bc) == 0) {
    *(undefined2 *)(param_1 + 0x1bc) = 0xf;
    fVar8 = ABS(*(float *)(iVar2 + 0x2c) - *(float *)(param_1 + 0x2c));
    bVar7 = SBORROW4((int)fVar8,(int)DAT_0019f4c4);
    bVar5 = (int)fVar8 - (int)DAT_0019f4c4 < 0;
    bVar6 = fVar8 == DAT_0019f4c4;
    if ((int)fVar8 <= (int)DAT_0019f4c4) {
      fVar8 = *(float *)(param_1 + 0x98);
      fVar9 = *(float *)(param_1 + 0x1c0);
      bVar5 = fVar8 < fVar9;
      bVar6 = fVar8 == fVar9;
      bVar7 = NAN(fVar8) || NAN(fVar9);
    }
    if (bVar6 || bVar5 != bVar7) {
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      uVar1 = DAT_0019f4c8;
      iVar3 = (int)*(short *)(param_1 + 0x1a8);
      iVar4 = (int)*(short *)(param_1 + 0x1aa);
      bVar6 = SBORROW4(iVar3,iVar4);
      iVar2 = iVar3 - iVar4;
      bVar5 = iVar3 == iVar4;
      if (iVar4 < iVar3) {
        iVar3 = (int)*(short *)(param_1 + 0x1ae);
        iVar4 = (int)*(short *)(param_1 + 0x1b0);
        bVar6 = SBORROW4(iVar3,iVar4);
        iVar2 = iVar3 - iVar4;
        bVar5 = iVar3 == iVar4;
      }
      if (!bVar5 && iVar2 < 0 == bVar6) {
        local_2c = (float)FUN_003738a8(DAT_0019f4c8);
        local_2c = local_2c + *(float *)(param_1 + 0x28);
        local_28 = *(float *)(param_1 + 0x2c) + DAT_0019f4cc;
        local_24 = (float)FUN_003738a8(uVar1);
        local_24 = local_24 + *(float *)(param_1 + 0x30);
        local_28 = (float)FUN_0036e81c(param_2 + 0xa98,auStack_20,auStack_1c,param_1,&local_2c);
        if (((uint)local_28 < DAT_0019f4d0) &&
           (iVar2 = FUN_0036aa20(local_2c,local_28,local_24,param_2 + 0x208c,param_1,param_2,0x1b,0,
                                 0,0,0xffffffff), iVar2 != 0)) {
          *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + 1;
          *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + 1;
        }
      }
    }
    else {
      *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
    }
  }
  return;
}
