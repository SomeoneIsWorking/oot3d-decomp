// OoT3D decomp @ 0011e09c  name=FUN_0011e09c  size=1080

void FUN_0011e09c(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  short *psVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  fVar3 = DAT_0011e498;
  fVar2 = DAT_0011e48c;
  local_40 = DAT_0011e48c;
  local_3c = DAT_0011e48c;
  local_38 = DAT_0011e48c;
  local_4c = DAT_0011e48c;
  local_48 = DAT_0011e490;
  local_44 = DAT_0011e48c;
  local_50 = *DAT_0011e494;
  local_5c = DAT_0011e48c;
  local_58 = DAT_0011e48c;
  local_54 = DAT_0011e48c;
  local_68 = DAT_0011e48c;
  local_64 = DAT_0011e498;
  local_60 = DAT_0011e48c;
  iVar4 = *(int *)(param_1 + 0x128);
  if (iVar4 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x9ac);
    uVar8 = *(undefined4 *)(param_1 + 0x9b0);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x9a8);
    *(undefined4 *)(iVar4 + 0x2c) = uVar7;
    *(undefined4 *)(iVar4 + 0x30) = uVar8;
    psVar5 = *(short **)(param_1 + 0x128);
    sVar6 = *psVar5;
    if (sVar6 == 0x10) {
      sVar6 = psVar5[0x136] + 1;
    }
    else {
      if (sVar6 != 0x4c) {
        if (sVar6 == 0xda) {
          *(undefined1 *)((int)psVar5 + 0x1ab) = 1;
          psVar5[0xd4] = psVar5[0xd4] + 1;
        }
        goto LAB_0011e184;
      }
      sVar6 = psVar5[0x136] + 2;
    }
    psVar5[0x136] = sVar6;
  }
LAB_0011e184:
  iVar4 = (int)*(float *)(param_1 + 0x1e0);
  if (iVar4 == 0x1c) {
    FUN_00375bcc(param_1,DAT_0011e49c);
    if (*(int *)(param_1 + 0x128) == 0) {
      if (*(int *)(param_1 + 0x124) != 0) {
        FUN_00374428();
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
    }
    else {
      FUN_00374428();
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  else if (((iVar4 == 0x18) &&
           (sVar6 = *(short *)(param_1 + 0x980) + -1, *(short *)(param_1 + 0x980) = sVar6,
           sVar6 != 0)) &&
          (*(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) + fVar3, fVar12 = DAT_0011e4a4,
          uVar7 = DAT_0011e4a0, *(short *)(param_1 + 0x980) == 0xf)) {
    sVar6 = 10;
    do {
      local_5c = (float)FUN_003738a8(uVar7);
      local_58 = (float)FUN_003738a8(uVar7);
      local_54 = (float)FUN_003738a8(uVar7);
      local_68 = local_5c * fVar12;
      local_64 = local_58 * fVar12;
      local_60 = local_54 * fVar12;
      local_74 = *(float *)(param_1 + 0xc54) + local_5c;
      local_70 = *(float *)(param_1 + 0xc58) + local_58;
      local_6c = *(float *)(param_1 + 0xc5c) + local_54;
      FUN_00365d20(param_2,&local_74,&local_5c,&local_68,param_1 + 0xa38,param_1 + 0xa3c,400,10,10);
      sVar6 = sVar6 + -1;
    } while (-1 < sVar6);
    FUN_00375bcc(param_1,DAT_0011e4a8);
    FUN_00375ed8(param_1,0x400000,0x78,0,8);
  }
  iVar4 = (int)*(float *)(param_1 + 0x1e0);
  if (iVar4 < 0x1c) {
    bVar10 = SBORROW4(iVar4,0x19);
    iVar1 = iVar4 + -0x19;
    bVar9 = iVar4 == 0x19;
    if (iVar4 < 0x1a) {
      iVar4 = (int)*(short *)(param_1 + 0x980);
      bVar10 = SBORROW4(iVar4,0xf);
      iVar1 = iVar4 + -0xf;
      bVar9 = iVar4 == 0xf;
    }
    if (bVar9 || iVar1 < 0 != bVar10) {
      FUN_0036595c(param_1,param_2);
    }
    else {
      local_74 = *(float *)(param_1 + 0x9b4);
      local_70 = *(float *)(param_1 + 0x9b8);
      local_6c = *(float *)(param_1 + 0x9bc);
      FUN_00366150(param_2,&local_74,&local_40,&local_4c,&local_50,&local_50,0x32,5);
      fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      fVar12 = DAT_0011e4ac;
      local_74 = local_74 - fVar11 * DAT_0011e4ac;
      fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      local_6c = local_6c + fVar11 * fVar12;
      FUN_00366150(param_2,&local_74,&local_40,&local_4c,&local_50,&local_50,0x32,5);
      fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      local_74 = *(float *)(param_1 + 0x9b4) + fVar11 * fVar12;
      fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      local_6c = *(float *)(param_1 + 0x9bc) - fVar11 * fVar12;
      FUN_00366150(param_2,&local_74,&local_40,&local_4c,&local_50,&local_50,0x32,5);
    }
  }
  fVar12 = (float)FUN_002cfca0((int)(short)(*(short *)(DAT_0011e4b0 + param_1) << 0xc));
  fVar12 = fVar3 + fVar12 * DAT_0011e4b4;
  *(float *)(param_1 + 0x9c4) = fVar12;
  if ((int)fVar12 < 0x3f800001) {
    fVar12 = fVar3;
  }
  *(float *)(param_1 + 0x9c4) = fVar12;
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x980) == 0) {
    FUN_00374a58(fVar2,param_1 + 0x1a4,10);
    uVar7 = DAT_0011e500;
    *(undefined2 *)(param_1 + 0x980) = 0;
    FUN_00375bcc(param_1,uVar7);
    *(float *)(param_1 + 0x6c) = fVar2;
    *(undefined4 *)(param_1 + 0x978) = 2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x97c) = DAT_0011e504;
  }
  return;
}
