// OoT3D decomp @ 002942e0  name=FUN_002942e0  size=1596

void FUN_002942e0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 uVar15;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;

  uVar15 = DAT_0029466c;
  if ((*(byte *)(param_1 + 0xa80) & 2) != 0) {
    *(byte *)(param_1 + 0xa80) = *(byte *)(param_1 + 0xa80) & 0xfd;
    FUN_00370350(uVar15,param_1 + 0x1a4,2);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92) + -0x8000;
    if (*(char *)(param_1 + 0x9e0) != '\0') {
      *(undefined1 *)(param_1 + 0xa84) = 3;
      *(byte *)(param_1 + 0xa81) = *(byte *)(param_1 + 0xa81) & 0xfb;
    }
    *(undefined4 *)(param_1 + 0x9dc) = DAT_00294670;
  }
  iVar3 = DAT_0029467c;
  fVar14 = DAT_00294678;
  uVar2 = DAT_00294674;
  if ((*(byte *)(param_1 + 0xa81) & 2) != 0) {
    *(byte *)(param_1 + 0xa81) = *(byte *)(param_1 + 0xa81) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0xa88,1);
    if (*(char *)(param_1 + 0x9e1) != '\0') {
      *(short *)(*(int *)(param_1 + 0x124) + 0x9e8) =
           *(short *)(*(int *)(param_1 + 0x124) + 0x9e8) + -1;
      FUN_00375bcc(param_1,uVar2);
      FUN_00370170(param_1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (*(char *)(param_1 + 0xa84) == '\t') {
LAB_00294440:
      iVar12 = 1;
      if (*(char *)(param_1 + 0x9e0) == '\0') {
        *(undefined2 *)(param_1 + 0x118) = 0;
      }
LAB_00294594:
      if ((*(char *)(param_1 + 0x9e0) != '\0') || (iVar12 == 3)) goto LAB_00294628;
    }
    else {
      cVar1 = *(char *)(param_1 + 0xb9);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_00294440;
      }
      else if (cVar1 == '\x0f') {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
        *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 2;
        FUN_0034c050(param_1,param_2);
        iVar12 = 0;
        goto LAB_00294594;
      }
      if ((*(char *)(param_1 + 0x9e0) != '\0' || cVar1 != '\x0e') ||
         (*(int *)(param_1 + 0x9dc) != DAT_00294684)) {
        iVar12 = 0;
        if (*(char *)(param_1 + 0xb8) != '\0') {
          iVar12 = 2;
        }
        iVar8 = FUN_00375eb8(param_1);
        if (iVar8 == 0) {
          FUN_00375b70(param_2,param_1);
          FUN_00375bcc(param_1,DAT_0029468c);
        }
        else {
          FUN_00375bcc(param_1,DAT_00294688);
        }
        FUN_00374a58(uVar15,param_1 + 0x1a4,4);
        if (*(int *)(param_1 + 0xa78) != 0) {
          if ((**(uint **)(param_1 + 0xaac) & DAT_00294690) == 0) {
            sVar7 = FUN_0036e800(param_1);
            *(short *)(param_1 + 0x36) = sVar7 + -0x8000;
          }
          else {
            *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0xa78) + 0x36);
          }
        }
        if (*(char *)(param_1 + 0x9e0) != '\0') {
          *(float *)(param_1 + 0x6c) = fVar14;
        }
        *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xf4;
        FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
        *(int *)(param_1 + 0x9dc) = iVar3;
        goto LAB_00294594;
      }
      iVar12 = 0;
      if (*(short *)(param_1 + 0x9e8) == 0) {
        *(undefined2 *)(param_1 + 0x9e8) = 0xffbc;
      }
    }
    local_4c = VectorSignedToFloat((int)*(short *)(param_1 + 0xa96),(byte)(in_fpscr >> 0x15) & 3);
    local_44 = VectorSignedToFloat((int)*(short *)(param_1 + 0xa9a),(byte)(in_fpscr >> 0x15) & 3);
    local_48 = VectorSignedToFloat((int)*(short *)(param_1 + 0xa98),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0xaac),iVar12 != 2,&local_4c,0);
    if (iVar12 == 1) {
      FUN_00375f90(param_2,&local_4c,8);
    }
  }
LAB_00294628:
  iVar8 = DAT_0029469c;
  iVar12 = DAT_00294698;
  uVar4 = DAT_00294694;
  if ((*(byte *)(param_1 + 0x9e5) & 4) != 0) {
    if ((*(char *)(param_1 + 0x114) == '\0') || (*(char *)(param_1 + 0x9ed) != -1)) {
      *(undefined1 *)(param_1 + 0x9e3) = 0x1e;
      if ((*(char *)(param_1 + 0x9ed) == '\0') && (*(short *)(param_1 + 0x9e8) != 0)) {
        *(short *)(param_1 + 0x9e8) = *(short *)(param_1 + 0x9e8) + -1;
      }
    }
    else if (*(char *)(param_1 + 0x9e3) != '\0') {
      *(char *)(param_1 + 0x9e3) = *(char *)(param_1 + 0x9e3) + -1;
    }
    iVar9 = *(int *)(param_1 + 0x9dc);
    if ((iVar9 != iVar12 && iVar9 != iVar8) && iVar9 != iVar3) {
      if (*(char *)(param_1 + 0x9e3) == '\0') {
        uVar10 = FUN_0036ae14(param_1 + 0x1a4,1);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_00294a30,uVar4,uVar10,uVar15,param_1 + 0x1a4,1,2);
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        *(undefined2 *)(param_1 + 0x9e8) = 0x96;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
        *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xfa;
        FUN_00375bcc(param_1,DAT_00294a34);
        FUN_00375bcc(param_1,uVar2);
        *(undefined4 *)(param_1 + 0x9dc) = DAT_00294a38;
      }
      else {
        uVar6 = *(ushort *)(param_1 + 0x9e8);
        bVar13 = uVar6 == 0;
        if (bVar13) {
          uVar6 = (ushort)*(byte *)(param_1 + 0x9ed);
        }
        if (bVar13 && uVar6 == 0) {
          FUN_0034c050(param_1,param_2);
        }
      }
    }
  }
  (**(code **)(param_1 + 0x9dc))(param_1,param_2);
  iVar3 = DAT_00294a3c;
  if ((*(byte *)(param_1 + 0x9e5) & 0x1f) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x9e5) & 8) != 0) {
    if (*(int *)(param_1 + 0x9dc) == DAT_00294a44) {
      fVar14 = *(float *)(param_1 + 0xc);
    }
    else {
      fVar14 = DAT_00294a48;
      if (*(char *)(param_1 + 0x9e0) == '\0' || *(char *)(param_1 + 0x9e0) == '\x03') {
        fVar14 = *(float *)(*(int *)(DAT_00294a40 + param_2) + 0x2c) + DAT_00294a4c;
      }
    }
    FUN_00373500(fVar14,DAT_00294a54,DAT_00294a50,param_1 + 0x2c);
    if (*(char *)(param_1 + 0x9e2) == '\0') {
      *(undefined1 *)(param_1 + 0x9e2) = 0x30;
    }
    *(char *)(param_1 + 0x9e2) = *(char *)(param_1 + 0x9e2) + -1;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00376864(param_1);
  if ((*(byte *)(param_1 + 0x9e5) & 0x10) == 0) {
    local_40 = *(undefined4 *)(param_1 + 0x28);
    local_3c = *(float *)(param_1 + 0x2c) + fVar14;
    local_38 = *(undefined4 *)(param_1 + 0x30);
    uVar15 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,&local_44,param_1,&local_40);
    *(undefined4 *)(param_1 + 0x84) = uVar15;
  }
  else {
    FUN_00376340(DAT_00294a6c,DAT_00294a6c,uVar4,param_2,param_1,5);
  }
  FUN_0037632c(param_1,param_1 + 0xa70);
  iVar9 = *(int *)(param_1 + 0x9dc);
  if (iVar9 == iVar8 || iVar9 == iVar12) {
    bVar5 = *(char *)(param_1 + 0x9e4) + 1;
    uVar11 = (uint)bVar5;
    *(byte *)(param_1 + 0x9e4) = bVar5;
    if (8 < uVar11) {
      uVar11 = 8;
    }
  }
  else {
    if (iVar9 == DAT_00294a70) goto LAB_00294984;
    uVar11 = *(byte *)(param_1 + 0x9e4) - 1;
    if ((int)uVar11 < 1) {
      uVar11 = 1;
    }
  }
  *(char *)(param_1 + 0x9e4) = (char)uVar11;
LAB_00294984:
  iVar12 = param_2 + 0x5c78;
  if (*(int *)(param_1 + 0x9dc) == iVar8) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    FUN_003761f0(param_2,iVar12,param_1 + 0xa70);
  }
  if ((*(byte *)(param_1 + 0x9e5) & 1) != 0) {
    FUN_00376168(param_2,iVar12,param_1 + 0xa70);
  }
  if (*(int *)(param_1 + 0x9dc) != DAT_00294a74) {
    FUN_003762a4(param_2,iVar12,param_1 + 0xa70);
  }
  FUN_0037322c(DAT_00294a78,param_1);
  if (*(int *)(param_1 + 0x9dc) == iVar3) {
    sVar7 = *(short *)(param_1 + 0x36) + -0x8000;
  }
  else {
    if ((*(byte *)(param_1 + 0x9e5) & 2) == 0) {
      return;
    }
    sVar7 = *(short *)(param_1 + 0x36);
  }
  *(short *)(param_1 + 0xbe) = sVar7;
  return;
}
