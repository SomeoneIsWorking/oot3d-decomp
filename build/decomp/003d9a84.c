// OoT3D decomp @ 003d9a84  name=FUN_003d9a84  size=960

void FUN_003d9a84(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  uVar4 = DAT_003d9db8;
  fVar11 = DAT_003d9da0;
  uVar3 = DAT_003d9d9c;
  uVar2 = DAT_003d9d98;
  iVar10 = *(int *)(DAT_003d9d94 + param_2);
  if (*(char *)(param_1 + 0x1c6) == '\x01') {
    FUN_00373500(DAT_003d9da8,DAT_003d9d9c,DAT_003d9da4,param_1 + 0x1d4);
    FUN_00373500(DAT_003d9db0,uVar3,DAT_003d9dac,param_1 + 0x1d8);
    FUN_00373500(DAT_003d9db4,uVar3,uVar2,param_1 + 0x1c8);
    if (*(int *)(param_1 + 0x1c8) != 0x40200000) goto LAB_003d9b80;
    uVar8 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x1c6) != '\x02') goto LAB_003d9b80;
    FUN_00373500(DAT_003d9da0,DAT_003d9d9c,DAT_003d9db8,param_1 + 0x1d0);
    FUN_00373500(fVar11,uVar3,DAT_003d9dbc,param_1 + 0x1d8);
    FUN_00373500(fVar11,uVar3,uVar4,param_1 + 0x1dc);
    FUN_0036fc20(uVar3,uVar2,param_1 + 0x1c8);
    if (*(float *)(param_1 + 0x1c8) != fVar11) goto LAB_003d9b80;
    uVar8 = 0;
  }
  *(undefined1 *)(param_1 + 0x1c6) = uVar8;
LAB_003d9b80:
  uVar5 = DAT_003d9dc8;
  uVar4 = DAT_003d9dc4;
  uVar2 = DAT_003d9dc0;
  if (*(short *)(param_1 + 0x1c0) != 0) {
    if (*(short *)(param_1 + 0x1c0) == 1) {
      FUN_0037547c(DAT_003d9eac,param_1 + 0x28,4,DAT_003d9ea8,DAT_003d9ea8,DAT_003d9ea4);
    }
    else if (*(byte *)(param_2 + 0x7fc6) < 2) {
      FUN_0037547c(DAT_003d9eb0,param_1 + 0x28,4,DAT_003d9ea8,DAT_003d9ea8,DAT_003d9ea4);
      *(char *)(param_2 + 0x7fc6) = *(char *)(param_2 + 0x7fc6) + '\x01';
    }
    FUN_00373500(uVar4,uVar3,*(undefined4 *)(param_1 + 0x6c),param_1 + 0x2c);
    FUN_00373500(uVar5,uVar3,uVar2,param_1 + 0x6c);
    return;
  }
  *(float *)(param_1 + 0x1c8) = fVar11;
  FUN_00373500(uVar4,uVar3,*(undefined4 *)(param_1 + 0x6c),param_1 + 0x2c);
  FUN_00373500(uVar5,uVar3,DAT_003d9dcc,param_1 + 0x6c);
  fVar6 = DAT_003d9dd0;
  bVar1 = *(byte *)(param_1 + 0x1c3);
  if ((bVar1 & 1) == 0) {
    *(short *)(param_1 + 0xc0) =
         *(short *)(param_1 + 0xc0) - (short)(int)(*(float *)(param_1 + 0x6c) * DAT_003d9dd0);
  }
  if ((bVar1 & 2) == 0) {
    *(short *)(param_1 + 0xc0) =
         *(short *)(param_1 + 0xc0) + (short)(int)(*(float *)(param_1 + 0x6c) * fVar6);
  }
  if ((bVar1 & 4) == 0) {
    *(short *)(param_1 + 0xbc) =
         *(short *)(param_1 + 0xbc) + (short)(int)(*(float *)(param_1 + 0x6c) * fVar6);
  }
  if ((bVar1 & 8) == 0) {
    *(short *)(param_1 + 0xbc) =
         *(short *)(param_1 + 0xbc) - (short)(int)(*(float *)(param_1 + 0x6c) * fVar6);
  }
  uVar7 = DAT_003d9de8;
  fVar6 = DAT_003d9de4;
  uVar4 = DAT_003d9de0;
  uVar3 = DAT_003d9ddc;
  if (DAT_003d9dd4 < *(uint *)(param_1 + 0x2c)) {
    if (DAT_003d9dd8 < *(uint *)(iVar10 + 0x2c)) {
      local_50 = fVar11;
      local_58 = fVar11;
      local_44 = fVar11;
      local_48 = fVar11;
      local_4c = fVar11;
      local_54 = uVar2;
      sVar9 = 0;
      do {
        local_40 = (float)FUN_003738a8(uVar3);
        local_40 = local_40 + *(float *)(param_1 + 0x28);
        local_3c = (float)FUN_00371e50(uVar4);
        local_3c = local_3c + fVar6;
        local_38 = (float)FUN_003738a8(uVar3);
        local_38 = local_38 + *(float *)(param_1 + 0x30);
        fVar11 = (float)FUN_00371e50(uVar7);
        fVar12 = (float)FUN_00371e50(uVar5);
        FUN_00365d20(param_2,&local_40,&local_4c,&local_58,DAT_003d9dec + -4,DAT_003d9dec,
                     (int)(short)((short)(int)fVar12 + 0xfa),5,
                     (int)(short)((short)(int)fVar11 + 0xf));
        sVar9 = sVar9 + 1;
      } while (sVar9 < 0x1e);
      FUN_003f87ac(param_2,10,0xf);
      FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_003d9df0);
    }
    FUN_00374428(param_1);
    return;
  }
  return;
}
