// OoT3D decomp @ 002b08f4  name=FUN_002b08f4  size=1240

void FUN_002b08f4(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;

  uVar2 = DAT_002b0c54;
  uVar5 = DAT_002b0c44;
  fVar12 = DAT_002b0c40;
  fVar8 = DAT_002b0c3c;
  fVar11 = DAT_002b0c30;
  iVar4 = *(int *)(DAT_002b0c2c + param_2);
  local_90 = DAT_002b0c30;
  local_8c = DAT_002b0c30;
  local_88 = DAT_002b0c30;
  local_9c = *(float *)(iVar4 + 0x28);
  local_94 = *(float *)(iVar4 + 0x30);
  local_98 = *(float *)(iVar4 + 0x2c) + DAT_002b0c34;
  if (*(short *)(param_1 + 0x1c) == -5) {
    pfVar7 = (float *)(param_1 + 0x564);
    if (*(float *)(param_1 + 0x6c) == DAT_002b0c30) {
      fVar12 = *pfVar7 - *(float *)(param_1 + 8);
      fVar8 = *(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x10);
      uVar5 = FUN_003758b0(SQRT(fVar12 * fVar12 + fVar8 * fVar8),
                           *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x568));
      uVar6 = FUN_003758b0(*(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x10),
                           *pfVar7 - *(float *)(param_1 + 8));
      fVar8 = (float)FUN_002cfca0(uVar5);
      fVar8 = fVar8 * *(float *)(param_1 + 0x550);
      fVar12 = (float)FUN_00338f60(uVar5);
      fVar12 = fVar12 * *(float *)(param_1 + 0x550);
      FUN_00375a18(param_1 + 0x36,uVar6,1,1000,0);
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      fVar9 = fVar9 * fVar12;
      fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      fVar10 = fVar10 * fVar12;
      if (fVar9 < fVar11) {
        fVar9 = -fVar9;
      }
      FUN_0036e168(*(undefined4 *)(param_1 + 0x564),uVar2,fVar9,fVar11,param_1 + 8);
      if (fVar8 < fVar11) {
        fVar8 = -fVar8;
      }
      FUN_0036e168(*(undefined4 *)(param_1 + 0x568),uVar2,fVar8,fVar11,param_1 + 0xc);
      if (fVar10 < fVar11) {
        fVar10 = -fVar10;
      }
      FUN_0036e168(*(undefined4 *)(param_1 + 0x56c),uVar2,fVar10,fVar11,param_1 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    fVar9 = (float)FUN_0036e168(param_1 + 0x6c);
    if (fVar9 == fVar11) {
      uVar3 = FUN_003758b0(*(float *)(param_1 + 0x56c) - *(float *)(param_1 + 0x30),
                           *pfVar7 - *(float *)(param_1 + 0x28));
      *(undefined2 *)(param_1 + 0xbe) = uVar3;
      *(undefined2 *)(param_1 + 0x36) = uVar3;
    }
  }
  else {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000,0);
    fVar9 = local_9c - *(float *)(param_1 + 0x28);
    fVar11 = local_94 - *(float *)(param_1 + 0x30);
    uVar6 = FUN_003758b0(SQRT(fVar9 * fVar9 + fVar11 * fVar11),*(float *)(param_1 + 0x2c) - local_98
                        );
    FUN_00375a18(param_1 + 0xbc,uVar6,1,4000,0);
  }
  FUN_003731e0(param_1 + 0x1a4);
  iVar4 = FUN_00340698(*(undefined4 *)(param_1 + 0x548));
  if (iVar4 <= DAT_002b0ffc) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  local_78 = *(undefined4 *)(param_1 + 8);
  local_68 = *(undefined4 *)(param_1 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 0x10);
  local_80 = 0;
  local_84 = 0x3f800000;
  local_7c = 0;
  local_74 = 0;
  uStack_70 = 0x3f800000;
  local_60 = 0;
  uStack_5c = 0x3f800000;
  local_6c = 0;
  local_64 = 0;
  FUN_0036e88c(&local_84,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),0,1);
  FUN_00371234(*(undefined4 *)(param_1 + 0x548),&local_84,1);
  local_8c = *(float *)(param_1 + 0x54c);
  FUN_003735ac(&local_9c,&local_84,&local_90);
  fVar11 = DAT_002b1000;
  FUN_0036e168(local_9c,uVar2,*(float *)(param_1 + 0x548) * DAT_002b1000,param_1 + 0x28);
  FUN_0036e168(local_98,uVar2,*(float *)(param_1 + 0x548) * fVar11,param_1 + 0x2c);
  FUN_0036e168(local_94,uVar2,*(float *)(param_1 + 0x548) * fVar11,param_1 + 0x30);
  *(float *)(param_1 + 0x548) =
       *(float *)(param_1 + 0x548) + (*(float *)(param_1 + 0x558) + DAT_002b1004) * fVar8 * fVar12;
  iVar4 = FUN_00373bc0(param_2,param_1 + 0x580);
  if ((iVar4 != 0) ||
     (sVar1 = *(short *)(param_1 + 0x542) + -1, *(short *)(param_1 + 0x542) = sVar1, sVar1 == 0)) {
    *(short *)(param_1 + 0x53c) = *(short *)(param_1 + 0x53c) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0x53c) == 0) {
    FUN_0036e168(DAT_002b1018,uVar2,uVar5,param_1 + 0x55c);
    FUN_0036e168(DAT_002b101c,uVar2,uVar5,param_1 + 0x560);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x534) + -1;
    *(int *)(param_1 + 0x534) = iVar4;
    if (iVar4 == 0) {
      *(undefined2 *)(param_1 + 0x53c) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_0036e168(param_1 + 0x55c);
    FUN_0036e168(param_1 + 0x560);
  }
  if ((int)*(float *)(param_1 + 0x1e0) == 5) {
    FUN_00375bcc(param_1,DAT_002b1020);
  }
  if ((int)*(float *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
