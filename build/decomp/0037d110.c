// OoT3D decomp @ 0037d110  name=FUN_0037d110  size=540

void FUN_0037d110(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 auStack_a4 [3];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [48];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;

  piVar3 = DAT_0037d334;
  if (*(ushort *)(param_2 + 0x8ae) < 0x321) {
    iVar5 = (int)*(short *)(DAT_0037d32c + param_1);
    sVar1 = *(short *)(*DAT_0037d334 + 0x14ce);
    sVar2 = *(short *)(*DAT_0037d334 + 0x14c8);
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * DAT_0037d330;
    *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + -0x40;
    fVar11 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)FUN_00338f60(iVar5);
    fVar7 = DAT_0037d338 - fVar7;
    local_44 = FUN_00338f60((int)(short)(sVar2 + 0x4000));
    uVar4 = DAT_0037d33c;
    local_40 = DAT_0037d33c;
    local_3c = FUN_002cfca0((int)(short)(sVar2 + 0x4000));
    fVar8 = (float)FUN_00338f60((int)sVar2);
    fVar9 = (float)FUN_002cfca0(iVar5);
    fVar10 = (float)FUN_002cfca0((int)sVar2);
    FUN_00372224(auStack_74,param_1 + 0x148);
    FUN_003625f8(ABS(fVar6),auStack_a4,&local_44);
    FUN_0036c174(auStack_74,auStack_74,auStack_a4);
    FUN_003713fc(fVar8 * fVar11 * fVar7,fVar9 * fVar11,fVar10 * fVar11 * fVar7,auStack_74,1);
    iVar5 = FUN_00366738(param_2);
    if (iVar5 == 0) {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0037d340 / fVar6 + DAT_0037d344) <= (int)(uint)*(ushort *)(param_2 + 0x8ae)) {
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(uint)*(ushort *)(param_2 + 0x8ae) <= (int)(DAT_0037d348 / fVar6 + DAT_0037d344)) {
          local_98 = uVar4;
          local_94 = DAT_0037d34c;
          local_90 = uVar4;
          local_80 = DAT_0037d350;
          local_7c = DAT_0037d354;
          local_78 = DAT_0037d358;
          FUN_003735ac(auStack_8c,param_1 + 0x148,&local_80);
          auStack_a4[0] = 0x1e;
          FUN_00330768(DAT_0037d35c,param_2,auStack_8c,&local_98,5,0);
        }
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x210),auStack_74);
    FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
  }
  return;
}
