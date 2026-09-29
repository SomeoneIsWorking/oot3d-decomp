// OoT3D decomp @ 0020f700  name=FUN_0020f700  size=1248

void FUN_0020f700(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;

  iVar11 = DAT_0020fa34;
  iVar12 = DAT_0020fa30;
  uVar5 = DAT_0020fa2c;
  fVar4 = DAT_0020fa28;
  iVar3 = DAT_0020fa24;
  if ((*(byte *)(param_1 + 0x801) & 2) != 0) {
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x808,1);
    cVar1 = *(char *)(param_1 + 0xb9);
    bVar13 = cVar1 == '\0';
    if (bVar13) {
      cVar1 = *(char *)(param_1 + 0xb8);
    }
    if (!bVar13 || cVar1 != '\0') {
      iVar9 = FUN_00375eb8(param_1);
      if (iVar9 == 0) {
        FUN_00375b70(param_2,param_1);
        FUN_00375bcc(param_1,DAT_0020fa38);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
      uVar8 = DAT_0020fa44;
      fVar7 = DAT_0020fa40;
      uVar6 = DAT_0020fa3c;
      if (*(int *)(param_1 + 0x810) == 0x19) {
        if (*(char *)(param_1 + 0xb8) == '\0') {
          *(undefined4 *)(param_1 + 0x6c) = DAT_0020fa3c;
          FUN_00373d40(param_1 + 0x1a4,1);
          *(undefined4 *)(param_1 + 0x810) = 0xffcfffff;
          uVar6 = DAT_0020fa48;
          *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x30);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;
          *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
          *(undefined4 *)(param_1 + 0xcc) = uVar6;
          uVar6 = DAT_0020fa50;
          *(undefined4 *)(param_1 + 0xc4) = DAT_0020fa4c;
          FUN_00375bcc(param_1,uVar6);
          FUN_0036e670(param_2,param_1 + 0x28,0,0,1,700);
          *(int *)(param_1 + 0x7dc) = iVar3;
        }
        else {
          *(undefined2 *)(param_1 + 0x7e0) = 0x1e;
          FUN_00375ed8(param_1,0x400000,200,0,0x28);
          iVar9 = *(int *)(param_1 + 0x810);
joined_r0x0020faa8:
          if (iVar9 == 0x19) {
            *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - fVar7;
          }
          else {
            *(float *)(param_1 + 0x6c) = fVar7;
            FUN_00370350(uVar8,param_1 + 0x1a4,2);
          }
          *(undefined4 *)(param_1 + 0x810) = 0xffcfffff;
          *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
          *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
          *(int *)(param_1 + 0x7dc) = iVar12;
        }
      }
      else if (*(char *)(param_1 + 0xb9) == '\x01') {
        if (*(int *)(param_1 + 0x7dc) != iVar11) {
          FUN_00375c08(DAT_0020fa58,DAT_0020fa3c,DAT_0020fa3c,DAT_0020fa54,param_1 + 0x1a4,4,0);
          uVar8 = DAT_0020fa5c;
          *(undefined4 *)(param_1 + 0x6c) = uVar6;
          *(undefined4 *)(param_1 + 0x70) = uVar8;
          *(undefined4 *)(param_1 + 100) = uVar6;
          *(undefined2 *)(param_1 + 0x7e0) = 0x78;
          *(float *)(param_1 + 0x834) = *(float *)(DAT_0020fa60 + 0x24) + DAT_0020fa64;
          FUN_00375ed8(param_1,0,200,0,0x50);
          *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
          FUN_00375bcc(param_1,DAT_0020fa68);
          *(int *)(param_1 + 0x7dc) = iVar11;
        }
      }
      else {
        if (*(char *)(param_1 + 0xb7) == '\0') {
          *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(DAT_0020fa60 + 0x24);
          *(undefined2 *)(param_1 + 0x7e0) = 0x1e;
          FUN_00375ed8(param_1,0x400000,200,0,0x28);
          iVar9 = *(int *)(param_1 + 0x810);
          goto joined_r0x0020faa8;
        }
        FUN_00375bcc(param_1,DAT_0020fa6c);
        *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x2c);
        FUN_00375c08(fVar4,uVar6,uVar6,uVar8,param_1 + 0x1a4,3,0);
        *(undefined2 *)(param_1 + 0x7e0) = 0x3c;
        *(undefined4 *)(param_1 + 0x6c) = uVar5;
        *(undefined4 *)(param_1 + 0x70) = uVar6;
        *(undefined4 *)(param_1 + 100) = uVar6;
        FUN_00375ed8(param_1,0x400000,200,0,0x28);
        *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
        *(int *)(param_1 + 0x7dc) = DAT_0020fa70;
      }
    }
  }
  (**(code **)(param_1 + 0x7dc))(param_1,param_2);
  bVar13 = *(short *)(param_1 + 0x34) != 0;
  iVar9 = 0;
  if (bVar13) {
    iVar9 = *(int *)(param_1 + 0x7dc);
  }
  if (bVar13 && iVar9 != iVar11) {
    FUN_0033bd9c(param_1);
  }
  else {
    FUN_00376864();
  }
  iVar10 = *(int *)(param_1 + 0x7dc);
  bVar13 = iVar10 == DAT_0020fc30;
  iVar9 = DAT_0020fc30;
  if (!bVar13) {
    iVar9 = DAT_0020fc34;
  }
  iVar2 = iVar9;
  if (((!bVar13 && iVar10 != iVar9) && iVar10 != iVar11) && iVar10 != iVar12) {
    iVar2 = DAT_0020fa70;
  }
  if ((((bVar13 || iVar10 == iVar9) || iVar10 == iVar11) || iVar10 == iVar12) || iVar10 == iVar2) {
LAB_0020fb20:
    FUN_00376340(uVar5,DAT_0020fc40,DAT_0020fc3c,param_2,param_1,7);
  }
  else {
    bVar13 = iVar10 == DAT_0020fc38;
    if (bVar13) {
      iVar10 = (int)*(short *)(param_1 + 0x7e0);
    }
    if (bVar13 && iVar10 == -1) goto LAB_0020fb20;
  }
  if (*(short *)(param_1 + 0x1c) != 10) {
    iVar11 = *(int *)(param_1 + 0x7dc);
    iVar12 = DAT_0020fc44;
    if (iVar11 != DAT_0020fc44) {
      iVar12 = DAT_0020fc48;
    }
    if (iVar11 == DAT_0020fc44 || iVar11 == iVar12) goto LAB_0020fb68;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
LAB_0020fb68:
  if (*(short *)(param_1 + 0x1c) == 0 || *(short *)(param_1 + 0x1c) == 10) {
    FUN_0037632c(param_1,param_1 + 0x7f0);
    iVar12 = param_2 + 0x5c78;
    if ((*(byte *)(param_1 + 0x800) & 1) != 0) {
      FUN_003761f0(param_2,iVar12,param_1 + 0x7f0);
    }
    if ((*(byte *)(param_1 + 0x801) & 1) != 0) {
      FUN_00376168(param_2,iVar12,param_1 + 0x7f0);
    }
    if (*(int *)(param_1 + 0x7dc) != iVar3) {
      FUN_003762a4(param_2,iVar12,param_1 + 0x7f0);
    }
  }
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar7 = DAT_0020fc4c;
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28) + fVar14 * DAT_0020fc4c;
    fVar14 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x30) + fVar14 * fVar7;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + fVar4;
  }
  return;
}
