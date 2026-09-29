// OoT3D decomp @ 00267560  name=FUN_00267560  size=868

void FUN_00267560(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;

  iVar5 = DAT_002678c8;
  uVar4 = DAT_002678c4;
  uVar3 = DAT_002678c0;
  uVar2 = DAT_002678bc;
  uVar8 = DAT_002678b8;
  if (*(short *)(param_1 + 0x1c) == 10) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c1) & 2) == 0) {
    if ((*(char *)(param_1 + 0xb6) != -1) || (*(char *)(DAT_002678e8 + param_2) == '\0'))
    goto LAB_002677b0;
  }
  else {
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x1c8,1);
    iVar9 = DAT_002678dc;
    if (*(char *)(param_1 + 0xb6) == '2') {
      cVar1 = *(char *)(param_1 + 0xb9);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_002677b0;
      }
      else {
        if (cVar1 == '\x01') {
          if (*(int *)(param_1 + 0x1a4) != DAT_002678dc) {
            FUN_00370350(uVar8,param_1 + 0x208,*(undefined4 *)(iVar5 + 4));
            uVar8 = DAT_002678e0;
            *(undefined2 *)(param_1 + 0x1aa) = 8;
            *(undefined4 *)(param_1 + 0x6c) = uVar8;
            uVar8 = DAT_002678e4;
            *(int *)(param_1 + 0x1a4) = iVar9;
            FUN_00375bcc(param_1,uVar8);
            sVar7 = FUN_0036ae14(param_1 + 0x208,*(undefined4 *)(iVar5 + 4));
            FUN_00375ed8(param_1,0,0xff,0,(int)(short)(sVar7 * *(short *)(param_1 + 0x1aa)));
          }
          goto LAB_002677b0;
        }
        if (cVar1 == '\x02') {
          FUN_00330254(param_2,param_1,param_1 + 0x28,0x28,0x32);
        }
      }
      FUN_00374a58(uVar8,param_1 + 0x208,*(undefined4 *)(iVar5 + 4));
      if ((**(uint **)(param_1 + 0x1ec) & DAT_002678cc) == 0) {
        sVar7 = FUN_0036e800(param_1,*(undefined4 *)(param_1 + 0x1b8));
        *(short *)(param_1 + 0x36) = sVar7 + -0x8000;
      }
      else {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x1b8) + 0x36);
      }
      *(undefined4 *)(param_1 + 0x6c) = DAT_002678d0;
      *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_002678d4;
      FUN_00375bcc(param_1,uVar2);
      FUN_00375bcc(param_1,DAT_002678d8);
      uVar8 = FUN_0036ae14(param_1 + 0x208,*(undefined4 *)(iVar5 + 4));
      FUN_00375ed8(param_1,0x400000,0xff,0,uVar8);
      iVar9 = FUN_00375eb8(param_1);
      if (iVar9 == 0) {
        FUN_00375b70(param_2,param_1);
      }
      goto LAB_002677b0;
    }
  }
  FUN_00374a58(uVar8,param_1 + 0x208,*(undefined4 *)(iVar5 + 0x10));
  *(undefined4 *)(param_1 + 500) = uVar3;
  *(undefined1 *)(param_1 + 0xb6) = 0x32;
  FUN_00375bcc(param_1,uVar2);
  *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
LAB_002677b0:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  fVar6 = DAT_002678ec;
  FUN_00376340(DAT_002678ec,*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),param_2,
               param_1,0x1d);
  FUN_0037632c(param_1,param_1 + 0x1b0);
  if ((*(byte *)(param_1 + 0x1c1) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x1a4) == DAT_002678f0) {
    FUN_0037322c(*(undefined4 *)(param_1 + 0x244),param_1);
    return;
  }
  if (*(int *)(param_1 + 0x1a4) != DAT_002678f4) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + fVar6;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x38);
    return;
  }
  fVar10 = *(float *)(param_1 + 0x244);
  uVar8 = FUN_0036ae14(param_1 + 0x208,*(undefined4 *)(iVar5 + 8));
  fVar11 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037322c(fVar6 - (fVar10 * fVar6) / fVar11,param_1);
  return;
}
