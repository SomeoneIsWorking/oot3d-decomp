// OoT3D decomp @ 001f33a0  name=FUN_001f33a0  size=1464

/* WARNING: Removing unreachable block (ram,0x001f362c) */
/* WARNING: Removing unreachable block (ram,0x001f3650) */

void FUN_001f33a0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;

  uVar5 = DAT_001f3704;
  iVar12 = DAT_001f3700;
  uVar4 = DAT_001f36fc;
  if (*(short *)(param_1 + 0x66c) != 0) {
    *(short *)(param_1 + 0x66c) = *(short *)(param_1 + 0x66c) + -1;
  }
  if ((*(byte *)(param_1 + 0x680) & 2) != 0) {
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfd;
    FUN_0036e734(param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined2 *)(param_1 + 0x66a) = 0xf;
    *(undefined2 *)(param_1 + 0x66c) = 0x2d;
    *(int *)(param_1 + 0x664) = iVar12;
  }
  iVar7 = DAT_001f370c;
  uVar6 = DAT_001f3708;
  bVar14 = *(char *)(param_1 + 0xb7) != '\0';
  bVar1 = 0;
  if (bVar14) {
    bVar1 = *(byte *)(param_1 + 0x681);
  }
  if (bVar14 && (bVar1 & 2) != 0) {
    *(byte *)(param_1 + 0x681) = bVar1 & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x688,1);
    cVar2 = *(char *)(param_1 + 0xb9);
    bVar14 = cVar2 == '\0';
    if (bVar14) {
      cVar2 = *(char *)(param_1 + 0xb8);
    }
    if (!bVar14 || cVar2 != '\0') {
      iVar11 = FUN_00375eb8(param_1);
      if (iVar11 == 0) {
        FUN_00375bcc(param_1,DAT_001f3710);
        FUN_00375b70(param_2,param_1);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
      uVar8 = DAT_001f371c;
      iVar11 = DAT_001f3714;
      cVar2 = *(char *)(param_1 + 0xb9);
      if (cVar2 == '\x01') {
        if (*(int *)(param_1 + 0x664) != DAT_001f3714) {
          *(undefined4 *)(param_1 + 0x70) = uVar4;
          *(undefined2 *)(param_1 + 0x66a) = 0x78;
          *(undefined4 *)(param_1 + 0x6c) = uVar5;
          *(undefined1 *)(param_1 + 0x694) = 0;
          FUN_00375ed8(param_1,0,0x96,0x200000,0x50);
          FUN_00375bcc(param_1,DAT_001f3718);
          *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfe;
          *(int *)(param_1 + 0x664) = iVar11;
        }
      }
      else if (cVar2 == '\x0f') {
        if (*(int *)(param_1 + 0x664) == DAT_001f3714) {
LAB_001f379c:
          FUN_0036e734(param_1 + 0x1a4,3);
          *(undefined2 *)(param_1 + 0x66a) = 0x1e;
          *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfe;
          *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) & 0xfe;
          *(undefined4 *)(param_1 + 0x6c) = uVar5;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
          FUN_00375ed8(param_1,0x400000,200,0x200000,0x14);
          *(undefined4 *)(param_1 + 0x664) = uVar8;
        }
        else {
          FUN_00375ed8(param_1,0x400000,200,0x200000,10);
          if (*(char *)(param_1 + 0xb7) == '\0') {
            *(undefined2 *)(param_1 + 0x1c) = 1;
          }
          FUN_0036e734(param_1 + 0x1a4,2);
          *(undefined4 *)(param_1 + 0x6c) = uVar5;
          *(undefined4 *)(param_1 + 100) = uVar4;
          *(undefined2 *)(param_1 + 0x66a) = 0xf;
          *(undefined2 *)(param_1 + 0x66c) = 0x2d;
          *(int *)(param_1 + 0x664) = iVar12;
        }
      }
      else if (cVar2 == '\x02') {
        FUN_0036e734(param_1 + 0x1a4,3);
        *(undefined2 *)(param_1 + 0x66a) = 0x1e;
        *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfe;
        *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) & 0xfe;
        *(undefined4 *)(param_1 + 0x6c) = uVar5;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        FUN_00375ed8(param_1,0x400000,200,0x200000,0x14);
        *(undefined4 *)(param_1 + 0x664) = uVar8;
        *(undefined2 *)(param_1 + 0x66a) = 3;
      }
      else {
        if (cVar2 == '\x03') {
          if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
            *(undefined4 *)(param_1 + 0x70) = uVar4;
          }
          *(undefined4 *)(param_1 + 100) = uVar5;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if (cVar2 != '\x0e') goto LAB_001f379c;
        if ((int)*(float *)(param_1 + 0x1e0) != 0) {
          FUN_0036e734(param_1 + 0x1a4,0);
        }
        sVar9 = FUN_00367358(param_1,*(int *)(param_1 + 0x678) + 0x108);
        *(short *)(param_1 + 0x36) = sVar9 + -0x8000;
        uVar10 = FUN_0036e10c(param_1,*(int *)(param_1 + 0x678) + 0x108);
        *(undefined2 *)(param_1 + 0x34) = uVar10;
        *(undefined4 *)(param_1 + 0x6c) = uVar6;
        *(int *)(param_1 + 0x664) = iVar7;
      }
      if ((DAT_001f3a34 & **(uint **)(param_1 + 0x6ac)) != 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      }
    }
  }
  (**(code **)(param_1 + 0x664))(param_1,param_2);
  if (*(int *)(param_1 + 0x664) == DAT_001f3a38) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x664);
  sVar9 = (short)(int)*(float *)(param_1 + 0x1e0);
  iVar11 = (int)sVar9;
  if (iVar13 == iVar12) {
    iVar12 = (int)(short)(3 - sVar9);
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    iVar13 = ((iVar12 + 5) / 8) * 8;
    iVar12 = (iVar12 + 5) % 8;
  }
  else {
    iVar12 = iVar11 >> 1;
    if (iVar13 == DAT_001f3a3c) {
      if (iVar11 < 10) {
        if (3 < iVar12) {
          iVar12 = 3;
        }
      }
      else {
        if (iVar11 < 0x13) {
          sVar9 = 0x11 - sVar9;
          if (sVar9 < 0) {
            sVar9 = 0;
          }
          *(char *)(param_1 + 0x668) = (char)(sVar9 >> 1);
          goto LAB_001f38f0;
        }
        if (iVar11 < 0x25) {
          lVar3 = (longlong)DAT_001f3a40 * (longlong)(0x24 - iVar11);
          iVar13 = (int)lVar3;
          iVar12 = (int)((ulonglong)lVar3 >> 0x20);
          iVar12 = (iVar12 - (iVar12 >> 0x1f)) + 2;
        }
        else {
          iVar12 = 0x28 - iVar11 >> 1;
        }
      }
    }
  }
  *(char *)(param_1 + 0x668) = (char)iVar12;
LAB_001f38f0:
  iVar12 = FUN_003736fc(DAT_001f3a48,DAT_001f3a44,param_1 + 0x1a4,iVar13);
  if (iVar12 != 0) {
    iVar11 = *(int *)(param_1 + 0x664);
    bVar14 = iVar11 == DAT_001f3a4c;
    iVar12 = DAT_001f3a4c;
    if (!bVar14) {
      iVar12 = DAT_001f3a50;
    }
    iVar13 = iVar12;
    if (!bVar14 && iVar11 != iVar12) {
      iVar13 = DAT_001f3a54;
    }
    if (((bVar14 || iVar11 == iVar12) || iVar11 == iVar13) || iVar11 == iVar7) {
      bVar14 = *(char *)(param_1 + 0x669) == '\0';
      if (!bVar14) {
        FUN_00375bcc(param_1,DAT_001f3a58);
      }
      *(bool *)(param_1 + 0x669) = bVar14;
    }
  }
  if (*(int *)(param_1 + 0x664) == iVar7) {
    FUN_0033bd9c();
  }
  else {
    FUN_00376864(param_1);
  }
  FUN_00376340(uVar6,*(undefined4 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x6b4),param_2,
               param_1,7);
  FUN_0037632c(param_1,param_1 + 0x670);
  if (((*(byte *)(param_1 + 0x680) & 1) != 0) && (*(short *)(param_1 + 0x66c) == 0)) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x670);
  }
  if ((*(byte *)(param_1 + 0x681) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x670);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x670);
  FUN_0037322c(uVar5,param_1);
  return;
}
