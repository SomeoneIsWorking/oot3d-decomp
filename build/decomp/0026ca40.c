// OoT3D decomp @ 0026ca40  name=FUN_0026ca40  size=1040

void FUN_0026ca40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;

  iVar2 = DAT_0026cdec;
  if ((*(byte *)(param_1 + 0x949) & 2) != 0) {
    *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) & 0xfd;
    cVar1 = *(char *)(param_1 + 0xb9);
    bVar10 = cVar1 == '\0';
    if (bVar10) {
      cVar1 = *(char *)(param_1 + 0xb8);
    }
    if (!bVar10 || cVar1 != '\0') {
      iVar6 = FUN_00375eb8(param_1);
      if (iVar6 == 0) {
        FUN_00375b70(param_2,param_1);
        FUN_00375bcc(param_1,DAT_0026cdf0);
      }
      else {
        FUN_00375bcc(param_1,DAT_0026cdf4);
      }
      FUN_00374a58(DAT_0026cdf8,param_1 + 0x1a4,4);
      if ((**(uint **)(param_1 + 0x974) & DAT_0026cdfc) == 0) {
        sVar5 = FUN_0036e800(param_1,*(undefined4 *)(param_1 + 0x940));
        *(short *)(param_1 + 0x36) = sVar5 + -0x8000;
      }
      else {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x940) + 0x36);
      }
      *(undefined4 *)(param_1 + 0x6c) = DAT_0026ce00;
      *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) & 0xfc;
      FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
      *(int *)(param_1 + 0x8f4) = iVar2;
    }
  }
  (**(code **)(param_1 + 0x8f4))(param_1,param_2);
  uVar12 = DAT_0026ce04;
  iVar6 = param_2 + 0x5c78;
  if (*(short *)(param_1 + 0x8fe) != 0) {
    sVar5 = *(short *)(param_1 + 0x8fe) + -1;
    *(short *)(param_1 + 0x8fe) = sVar5;
    if ((*(byte *)(param_1 + 0x9a0) & 2) == 0) {
      if (0x1d < sVar5) {
        iVar7 = FUN_003705a0(DAT_0026ce10,DAT_0026ce0c,param_1 + 0x90c);
        if (iVar7 != 0) {
          fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x8fc));
          fVar3 = DAT_0026ce14;
          *(float *)(param_1 + 0x910) = *(float *)(param_1 + 0x910) + fVar11 * DAT_0026ce14;
          fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x8fc));
          *(float *)(param_1 + 0x918) = *(float *)(param_1 + 0x918) + fVar11 * fVar3;
        }
        *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_1 + 0x910);
        *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_1 + 0x914);
        *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_1 + 0x918);
        FUN_003761f0(param_2,iVar6,param_1 + 0x990);
        goto LAB_0026cc2c;
      }
    }
    else {
      *(byte *)(param_1 + 0x9a0) = *(byte *)(param_1 + 0x9a0) & 0xfd;
      *(undefined2 *)(param_1 + 0x8fe) = 0x1d;
    }
    FUN_003705a0(uVar12,DAT_0026ce08,param_1 + 0x90c);
  }
LAB_0026cc2c:
  iVar4 = DAT_0026ce1c;
  iVar7 = DAT_0026ce18;
  iVar8 = *(int *)(param_1 + 0x8f4);
  if ((iVar8 == DAT_0026ce18 || iVar8 == iVar2) || iVar8 == DAT_0026ce1c) {
    FUN_00376864(param_1);
  }
  if (*(int *)(param_1 + 0x8f4) == DAT_0026ce20) {
    return;
  }
  FUN_0037322c(DAT_0026ce24,param_1);
  FUN_00376340(uVar12,DAT_0026ce2c,DAT_0026ce28,param_2,param_1,4);
  if (*(int *)(param_1 + 0x8f4) == iVar7) {
    uVar9 = *(byte *)(param_1 + 0x900) + 5;
    if (0x50 < uVar9) {
      uVar9 = 0x50;
    }
    *(char *)(param_1 + 0x900) = (char)uVar9;
    uVar9 = *(byte *)(param_1 + 0x901) + 5;
    if (0xff < uVar9) {
      uVar9 = 0xff;
    }
    *(char *)(param_1 + 0x901) = (char)uVar9;
    uVar9 = *(byte *)(param_1 + 0x902) + 5;
    if (0xe1 < uVar9) {
      uVar9 = 0xe1;
    }
    goto LAB_0026cd6c;
  }
  if (*(int *)(param_1 + 0x8f4) == iVar2) {
    if ((*(ushort *)(param_1 + 0x11a) & 2) == 0) {
      *(undefined1 *)(param_1 + 0x900) = 0x50;
      *(undefined1 *)(param_1 + 0x901) = 0xff;
      *(undefined1 *)(param_1 + 0x902) = 0xe1;
    }
    else {
      *(undefined1 *)(param_1 + 0x900) = 0;
      *(undefined1 *)(param_1 + 0x901) = 0;
      *(undefined1 *)(param_1 + 0x902) = 0;
    }
    goto LAB_0026cd70;
  }
  uVar9 = *(byte *)(param_1 + 0x900) + 5;
  if (0xff < uVar9) {
    uVar9 = 0xff;
  }
  *(char *)(param_1 + 0x900) = (char)uVar9;
  uVar9 = *(byte *)(param_1 + 0x901) + 5;
  if (0xff < uVar9) {
    uVar9 = 0xff;
  }
  *(char *)(param_1 + 0x901) = (char)uVar9;
  uVar9 = (uint)*(byte *)(param_1 + 0x902);
  if (uVar9 < 0xd3) {
    uVar9 = uVar9 + 5;
    if (0xd2 < uVar9) goto LAB_0026cd58;
  }
  else {
    uVar9 = uVar9 - 5;
    if ((int)uVar9 < 0xd2) {
LAB_0026cd58:
      uVar9 = 0xd2;
    }
  }
LAB_0026cd6c:
  *(char *)(param_1 + 0x902) = (char)uVar9;
LAB_0026cd70:
  if ((*(int *)(param_1 + 0x8f4) == iVar4) && (*(int *)(param_1 + 0x1e0) < DAT_0026ce30)) {
    cVar1 = (char)(int)(*(float *)(param_1 + 0x1e0) * DAT_0026ce34) + '7';
    *(char *)(param_1 + 0x906) = cVar1;
    *(char *)(param_1 + 0x905) = cVar1;
    *(char *)(param_1 + 0x904) = cVar1;
    uVar12 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1e0) * DAT_0026ce38,3);
    *(char *)(param_1 + 0x907) = (char)uVar12;
    FUN_0037632c(param_1);
    FUN_003762a4(param_2,iVar6,param_1 + 0x938);
    if ((*(byte *)(param_1 + 0x949) & 1) == 0) {
      return;
    }
    FUN_00376168(param_2,iVar6,param_1 + 0x938);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
