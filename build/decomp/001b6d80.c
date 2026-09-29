// OoT3D decomp @ 001b6d80  name=FUN_001b6d80  size=1252

void FUN_001b6d80(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;

  iVar9 = *(int *)(DAT_001b7204 + param_2);
  if ((*(byte *)(param_1 + 0xa1d) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x945) & 2) == 0) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0xb58) + 0x16);
      uVar7 = (ushort)bVar1;
      bVar10 = (bVar1 & 2) == 0;
      if (bVar10) {
        uVar7 = *(ushort *)(param_1 + 0x8fc);
      }
      if (bVar10 && uVar7 == 0) goto LAB_001b70e8;
    }
    *(byte *)(param_1 + 0x945) = *(byte *)(param_1 + 0x945) & 0xfd;
    if (4 < *(int *)(param_1 + 0x8ec)) {
      if (*(char *)(param_1 + 0xb9) == '\0') goto LAB_001b70f4;
      if (*(char *)(param_1 + 0xb9) == '\x05') {
        return;
      }
      uVar8 = *(uint *)(DAT_001b7208 + 0x3d4);
      bVar10 = (uVar8 & 1) == 0;
      if (bVar10) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x1c);
      }
      if (bVar10 && uVar8 == 0) goto LAB_001b70f4;
      if (((*(uint *)(iVar9 + 0x1714) & 0x80) != 0) && (*(int *)(iVar9 + 0x124) == param_1)) {
        *(uint *)(iVar9 + 0x1714) = *(uint *)(iVar9 + 0x1714) & 0xffffff7f;
        *(undefined4 *)(iVar9 + 0x124) = 0;
        uVar2 = DAT_001b720c;
        *(undefined2 *)(iVar9 + 0x2238) = 200;
        FUN_00374bb8(uVar2,uVar2,param_2,param_1,(int)*(short *)(param_1 + 0x36));
      }
      *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_1 + 0xb9);
      *(undefined2 *)(param_1 + 0x902) = 0;
      *(undefined2 *)(param_1 + 0x8fc) = 0;
      FUN_00375fd0(param_1,param_1 + 0x94c,0);
      uVar2 = DAT_001b7210;
      if (*(char *)(param_1 + 0xb9) == '\x01' || *(char *)(param_1 + 0xb9) == '\x06') {
        if (*(int *)(param_1 + 0x8ec) != 5) {
          FUN_00375eb8(param_1);
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          *(undefined4 *)(param_1 + 0x8ec) = 5;
          FUN_00375ed8(param_1,0,0x78,0,0x50);
          if (*(char *)(param_1 + 0x1e0) == '\x06') {
            *(undefined2 *)(param_1 + 0x8f4) = 0x3c;
          }
          else {
            if (*(short *)(param_1 + 0x1c) != 0) {
              FUN_0037422c(uVar2,param_1 + 0x1e4,9);
            }
            FUN_00375bcc(param_1,DAT_001b7214);
          }
          *(undefined4 *)(param_1 + 0x8f0) = DAT_001b7218;
        }
      }
      else {
        FUN_00375eb8();
        FUN_00375ed8(param_1,0x400000,0xfa,0,0xc);
        uVar5 = DAT_001b7238;
        uVar4 = DAT_001b7234;
        uVar3 = DAT_001b7220;
        if (*(short *)(param_1 + 0x1c) == 0) {
          if (*(char *)(param_1 + 0xb7) == '\0') {
            FUN_00374a58(DAT_001b721c,param_1 + 0x1e4,0x16);
            *(undefined4 *)(param_1 + 0x8ec) = 1;
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            uVar2 = DAT_001b7224;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            *(undefined4 *)(param_1 + 0x978) = uVar2;
            *(undefined4 *)(param_1 + 0x974) = DAT_001b7228;
            *(undefined2 *)(param_1 + 0x8f6) = 0x2d;
            FUN_00375bcc(param_1,uVar3);
            *(undefined4 *)(param_1 + 0x8f0) = DAT_001b722c;
          }
          else {
            FUN_00373d40(param_1 + 0x1e4,0x12);
            *(undefined4 *)(param_1 + 0x8ec) = 3;
            *(undefined2 *)(param_1 + 0x8f6) = 0xe;
            *(undefined2 *)(param_1 + 0x8fa) = 0xe;
            FUN_00375bcc(param_1,uVar3);
            *(undefined4 *)(param_1 + 0x8f0) = DAT_001b7230;
          }
        }
        else {
          uVar8 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4000;
          if (*(char *)(param_1 + 0xb7) == '\0') {
            if (uVar8 < 0x8001) {
              FUN_00374a58(DAT_001b721c,param_1 + 0x1e4,0xb);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
            else {
              FUN_00374a58(DAT_001b721c,param_1 + 0x1e4,0xb);
              *(undefined4 *)(param_1 + 0x6c) = uVar5;
            }
            *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
            *(undefined2 *)(param_1 + 0x8f6) = 0x2d;
            *(undefined4 *)(param_1 + 0x8ec) = 0;
            FUN_00375bcc(param_1,uVar3);
            *(undefined4 *)(param_1 + 0x8f0) = DAT_001b723c;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          }
          else {
            if (uVar8 < 0x8001) {
              FUN_00374a58(DAT_001b721c,param_1 + 0x1e4,9);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
            else {
              FUN_00374a58(DAT_001b721c,param_1 + 0x1e4,10);
              *(undefined4 *)(param_1 + 0x6c) = uVar5;
            }
            *(undefined2 *)(param_1 + 0x8f6) = 8;
            *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
            *(undefined4 *)(param_1 + 0x8ec) = 0;
            FUN_00375bcc(param_1,uVar3);
            *(undefined4 *)(param_1 + 0x8f0) = DAT_001b7240;
          }
        }
      }
    }
  }
  else {
    *(byte *)(param_1 + 0xa1d) = *(byte *)(param_1 + 0xa1d) & 0x7d;
    *(byte *)(param_1 + 0x945) = *(byte *)(param_1 + 0x945) & 0xfd;
  }
LAB_001b70e8:
  if (*(char *)(param_1 + 0xb9) == '\x05') {
    return;
  }
LAB_001b70f4:
  (**(code **)(param_1 + 0x8f0))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001b7248,DAT_001b7248,DAT_001b7244,param_2,param_1,0x1d);
  FUN_0037322c(*(float *)(param_1 + 0x54) * DAT_001b724c,param_1);
  FUN_0037632c(param_1);
  if (*(char *)(param_1 + 0xb7) == '\0') {
    fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar6 = DAT_001b7250;
    *(float *)(param_1 + 0x980) =
         *(float *)(param_1 + 0x980) + *(float *)(param_1 + 0x58) * fVar11 * DAT_001b7250;
    fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x988) =
         *(float *)(param_1 + 0x988) + *(float *)(param_1 + 0x58) * fVar11 * fVar6;
  }
  iVar9 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar9,param_1 + 0x934);
  if ((4 < *(int *)(param_1 + 0x8ec)) &&
     ((*(short *)(param_1 + 0x1c) == 0 || (*(int *)(param_1 + 0x8ec) != 10)))) {
    FUN_00376168(param_2,iVar9,param_1 + 0x934);
    FUN_00376168(param_2,iVar9,param_1 + 0xb3c);
  }
  if (0 < *(short *)(param_1 + 0x902)) {
    bVar10 = *(int *)(param_1 + 0x8ec) == 5;
    if (*(int *)(param_1 + 0x8ec) < 6) {
      bVar10 = *(short *)(param_1 + 0x8fc) == 0;
    }
    if ((bVar10) || (FUN_00376168(param_2,iVar9,param_1 + 0xa0c), 0 < *(short *)(param_1 + 0x902)))
    {
      FUN_003761f0(param_2,iVar9,param_1 + 0x98c);
      return;
    }
  }
  return;
}
