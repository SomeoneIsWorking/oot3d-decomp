// OoT3D decomp @ 0037d360  name=FUN_0037d360  size=536

void FUN_0037d360(int param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [12];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [48];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;

  piVar2 = DAT_0037d580;
  iVar4 = (int)*(short *)(param_1 + DAT_0037d578);
  sVar1 = *(short *)(*DAT_0037d580 + 0x14ca);
  fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_0037d57c;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037d580 + 0x14d0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + -0x40;
  fVar6 = (float)FUN_00338f60(iVar4);
  fVar6 = DAT_0037d584 - fVar6;
  local_40 = FUN_00338f60((int)sVar1);
  uVar3 = DAT_0037d588;
  local_3c = DAT_0037d588;
  local_38 = FUN_002cfca0((int)sVar1);
  fVar7 = (float)FUN_00338f60((int)(short)(sVar1 + -0x4000));
  fVar8 = (float)FUN_002cfca0(iVar4);
  fVar9 = (float)FUN_002cfca0((int)(short)(sVar1 + -0x4000));
  FUN_00372224(auStack_70,param_1 + 0x148);
  FUN_003625f8(ABS(fVar5),&local_a0,&local_40);
  FUN_0036c174(auStack_70,auStack_70,&local_a0);
  FUN_003713fc(fVar7 * fVar10 * fVar6,fVar8 * fVar10,fVar9 * fVar10 * fVar6,auStack_70,1);
  iVar4 = FUN_00366738(param_2);
  if (iVar4 == 0) {
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(DAT_0037d590 / fVar5 + DAT_0037d594) <=
        (int)(uint)*(ushort *)(DAT_0037d58c + (int)param_2)) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(uint)*(ushort *)(DAT_0037d58c + (int)param_2) <=
          (int)(DAT_0037d598 / fVar5 + DAT_0037d594)) {
        local_94 = uVar3;
        local_90 = DAT_0037d59c;
        local_8c = uVar3;
        local_7c = uVar3;
        local_78 = DAT_0037d5a0;
        local_74 = DAT_0037d5a4;
        FUN_003735ac(auStack_88,param_1 + 0x148,&local_7c);
        local_a0 = 1;
        uStack_9c = 0x1e;
        FUN_00330768(DAT_0037d5a8,param_2,auStack_88,&local_94,5);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x210),auStack_70);
  FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
  return;
}
