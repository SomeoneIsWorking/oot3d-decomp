// OoT3D decomp @ 00266148  name=FUN_00266148  size=1576

void FUN_00266148(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;

  fVar3 = DAT_0026650c;
  uVar2 = DAT_00266508;
  if ((((*(byte *)(param_1 + 0xad4) & 2) != 0) || ((*(byte *)(param_1 + 0xb2c) & 2) != 0)) ||
     ((*(byte *)(param_1 + 0xa64) & 2) != 0)) {
    *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) & 0xfd;
    *(byte *)(param_1 + 0xb2c) = *(byte *)(param_1 + 0xb2c) & 0xfd;
    *(byte *)(param_1 + 0xa64) = *(byte *)(param_1 + 0xa64) & 0xfd;
    sVar6 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36);
    if (sVar6 < 0x4001) {
      if (sVar6 < 1) {
        if (sVar6 < -0x4000) {
          sVar6 = (short)DAT_00266514;
        }
        else {
          sVar6 = (short)DAT_00266510;
        }
      }
      else {
        sVar6 = 0x6000;
      }
    }
    else {
      sVar6 = 0x4000;
    }
    FUN_00374bb8(DAT_0026651c,DAT_00266518,param_2,param_1,
                 (int)(short)(*(short *)(param_1 + 0x36) + sVar6));
    if (*(int *)(param_1 + 0xa48) == DAT_00266520) {
      FUN_00375c08(DAT_00266524,fVar3,fVar3,uVar2,param_1 + 0x1a4,0);
      *(undefined1 *)(param_1 + 0xa4d) = 1;
      *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0xbe) + -0x8000;
      *(ushort *)(param_1 + 0xa52) = (ushort)*(byte *)(param_1 + 0xa4c) << 9;
      *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfe;
      *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
      *(undefined4 *)(param_1 + 0xa48) = DAT_00266528;
      *(undefined2 *)(param_1 + 0xa4e) = 0x3c;
    }
    else if ((*(int *)(param_1 + 0xa48) == DAT_0026652c) &&
            (0 < (int)(short)*(char *)(param_1 + 0xa4c) * (int)sVar6)) {
      *(char *)(param_1 + 0xa4c) = -*(char *)(param_1 + 0xa4c);
      *(short *)(param_1 + 0xa4e) = *(short *)(param_1 + 0xa4e) + 6;
    }
  }
  iVar5 = DAT_00266530;
  if ((*(byte *)(param_1 + 0xa65) & 2) != 0) {
    *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfd;
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_002663dc:
        iVar4 = FUN_0036f18c(param_1,0x4000);
        if (iVar4 == 0) {
          iVar4 = FUN_00375eb8(param_1);
          if (iVar4 == 0) {
            FUN_00375bcc(param_1,DAT_0026654c);
            FUN_00375b70(param_2,param_1);
          }
          else {
            FUN_00375bcc(param_1,DAT_00266550);
          }
          FUN_00374a58(uVar2,param_1 + 0x1a4,3);
          *(undefined2 *)(param_1 + 0xa4e) = 0x24;
          *(undefined2 *)(param_1 + 0xa52) = 0;
          *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) & 0xfe;
          FUN_00375ed8(param_1,0x400000,0xff,0,0x18);
          *(undefined4 *)(param_1 + 0xa48) = DAT_00266554;
        }
      }
    }
    else if (cVar1 == '\x01') {
      if (*(int *)(param_1 + 0xa48) != iVar5) {
        FUN_00374a58(uVar2,param_1 + 0x1a4,2);
        *(undefined2 *)(param_1 + 0xa4e) = 0x78;
        *(undefined2 *)(param_1 + 0xa52) = 0;
        uVar2 = DAT_00266534;
        *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
        FUN_00375bcc(param_1,uVar2);
        if ((**(uint **)(*(int *)(param_1 + 0xa70) + 0x24) & 1) == 0) {
          *(undefined1 *)(param_1 + 0xa4d) = 0;
          *(undefined2 *)(param_1 + 0xa4e) = 0x78;
        }
        else {
          *(undefined1 *)(param_1 + 0xa4d) = 1;
          *(undefined2 *)(param_1 + 0xa4e) = 0x1e;
        }
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xa4e),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(param_1 + 0xa4e) < 1) {
          fVar8 = fVar8 * DAT_00266538 * DAT_0026653c - DAT_00266540;
        }
        else {
          fVar8 = DAT_00266540 + fVar8 * DAT_00266538 * DAT_0026653c;
        }
        FUN_00375ed8(param_1,0,0xff,0,(int)(short)(int)fVar8);
        *(int *)(param_1 + 0xa48) = iVar5;
      }
    }
    else {
      if (cVar1 != '\x0f') goto LAB_002663dc;
      *(undefined2 *)(param_1 + 0xa4e) = 0x18;
      iVar4 = DAT_00266544;
      *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) & 0xfe;
      uVar2 = DAT_00266548;
      *(undefined2 *)(iVar4 + param_1) = 0;
      *(undefined4 *)(param_1 + 0xa48) = uVar2;
    }
  }
  (**(code **)(param_1 + 0xa48))(param_1,param_2);
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_00370378(*(int *)(param_1 + 0x124) + 0x36,(int)*(short *)(param_1 + 0xa52),0x10);
  }
  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar4 = *(int *)(param_1 + 0xa70);
  *(float *)(iVar4 + 0x38) =
       *(float *)(iVar4 + 0x28) * fVar9 + *(float *)(iVar4 + 0x30) * fVar8 +
       *(float *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0xa70);
  *(float *)(iVar4 + 0x40) =
       (*(float *)(param_1 + 0x30) + *(float *)(iVar4 + 0x30) * fVar9) -
       *(float *)(iVar4 + 0x28) * fVar8;
  iVar4 = DAT_002667c0;
  *(float *)(*(int *)(param_1 + 0xa70) + 0x3c) =
       *(float *)(param_1 + 0x2c) + *(float *)(*(int *)(param_1 + 0xa70) + 0x2c);
  fVar11 = *(float *)(iVar4 + 0x34);
  fVar10 = *(float *)(iVar4 + 0x2c);
  *(float *)(param_1 + 0xb10) = fVar11 * fVar8 + fVar10 * fVar9 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0xb18) = (*(float *)(param_1 + 0x30) + fVar11 * fVar9) - fVar10 * fVar8;
  *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_1 + 0x2c);
  fVar10 = *(float *)(iVar4 + 0x6c);
  fVar11 = *(float *)(iVar4 + 100);
  *(float *)(param_1 + 0xb68) = fVar10 * fVar8 + fVar11 * fVar9 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0xb70) = (*(float *)(param_1 + 0x30) + fVar10 * fVar9) - fVar11 * fVar8;
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_1 + 0x2c);
  FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x34);
  FUN_0036762c(*(undefined4 *)(param_2 + 0xa54),4);
  if ((*(byte *)(param_1 + 0xad4) & 1) == 0) {
LAB_002666dc:
    if ((*(byte *)(param_1 + 0xa65) & 1) != 0) {
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xa54);
      goto LAB_00266724;
    }
  }
  else {
    iVar4 = 0;
    if (*(int *)(param_1 + 0xa48) == iVar5) {
      do {
        FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + iVar4 * 0x58 + 0xac4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    else {
      do {
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + iVar4 * 0x58 + 0xac4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    }
    iVar5 = 0;
    do {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + iVar5 * 0x58 + 0xac4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    if ((*(byte *)(param_1 + 0xa65) & 1) != 0) {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xa54);
      goto LAB_002666dc;
    }
  }
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0xa54);
LAB_00266724:
  FUN_0037322c(*(float *)(param_1 + 0x58) * DAT_002667c4,param_1);
  local_34 = *(undefined4 *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
  local_30 = *(float *)(param_1 + 0xc) + DAT_002667c8;
  local_2c = *(undefined4 *)(param_1 + 0x30);
  if (*(uint *)(DAT_002667cc + param_2) +
      (uint)((ulonglong)DAT_002667d0 * (ulonglong)*(uint *)(DAT_002667cc + param_2) +
             (ulonglong)DAT_002667d0 >> 0x21) * -7 == 0) {
    bVar7 = fVar3 <= fVar8;
    if (!bVar7 || fVar8 == fVar3) {
      bVar7 = (uint)DAT_002667d4 <= (uint)fVar8;
    }
    if (!bVar7) {
      FUN_00362068(param_2,&local_34,800,DAT_002667d8,0);
    }
  }
  return;
}
