// OoT3D decomp @ 002123a4  name=FUN_002123a4  size=1600

void FUN_002123a4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  int local_38;

  if ((*(uint *)(*(int *)(DAT_00212774 + param_2) + 0x1710) & DAT_00212778) != 0) {
    return;
  }
  local_38 = param_2 + 0xa98;
  if (*(short *)(param_1 + 0x1c) == 0) {
    if ((*(byte *)(param_1 + 0x8d5) & 2) != 0) {
      *(byte *)(param_1 + 0x8d5) = *(byte *)(param_1 + 0x8d5) & 0xfd;
      FUN_00375fd0(param_1,param_1 + 0x8dc,1);
      cVar1 = *(char *)(param_1 + 0xb9);
      bVar10 = cVar1 == '\0';
      if (bVar10) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (!bVar10 || cVar1 != '\0') {
        FUN_00375b70(param_2,param_1);
        *(undefined1 *)(param_1 + 0xb7) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        if (*(char *)(param_1 + 0xb9) == '\x03') {
          *(undefined2 *)(param_1 + 0x8b0) = 0x78;
          FUN_00375ed8(param_1,0,0xff,0,0x50);
          *(int *)(param_1 + 0x8ac) = DAT_0021277c;
        }
        else {
          FUN_00374a58(DAT_00212780,param_1 + 0x1a4,3);
          FUN_00375ed8(param_1,0x400000,0xff,0,0xb);
          uVar4 = DAT_00212784;
          *(byte *)(param_1 + 0x8d5) = *(byte *)(param_1 + 0x8d5) & 0xfd;
          FUN_0037572c(uVar4,param_1);
          FUN_00375bcc(param_1,DAT_00212788);
          *(int *)(param_1 + 0x8ac) = DAT_0021278c;
        }
      }
    }
    iVar7 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                         local_38,&local_40,&local_3c);
    if ((iVar7 == 0) || (local_40 < *(float *)(param_1 + 0x84))) {
      if (*(char *)(param_1 + 0xb7) != '\0') {
        FUN_00374428(param_1);
        return;
      }
    }
    else {
      *(float *)(param_1 + 0xc) = local_40;
    }
  }
  (**(code **)(param_1 + 0x8ac))(param_1,param_2);
  fVar13 = DAT_002127b8;
  fVar12 = DAT_002127b4;
  uVar4 = DAT_002127a4;
  fVar6 = DAT_002127a0;
  iVar2 = DAT_0021279c;
  iVar5 = DAT_00212798;
  iVar9 = DAT_00212794;
  iVar7 = DAT_00212790;
  if (*(short *)(param_1 + 0x1c) != 0) {
    bVar10 = false;
    FUN_00376864(param_1);
    FUN_0036df4c(&local_44,param_1 + 0x28);
    FUN_00376340(DAT_00212a9c,uVar4,DAT_00212a98,param_2,param_1,5);
    if (((*(ushort *)(param_1 + 0x90) & 8) != 0) &&
       (iVar8 = FUN_0035fe90(local_38,*(undefined4 *)(param_1 + 0x78),
                             *(undefined1 *)(param_1 + 0x80)), iVar8 != 0)) {
      bVar10 = true;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
    }
    if (((*(ushort *)(param_1 + 0x90) & 1) == 0) ||
       (iVar8 = FUN_0035fe90(local_38,*(undefined4 *)(param_1 + 0x7c),
                             *(undefined1 *)(param_1 + 0x81)), iVar8 == 0)) {
      if (!bVar10) goto LAB_0021291c;
    }
    else {
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    }
    if ((*(ushort *)(param_1 + 0x90) & 9) == 0) {
      FUN_0036df4c(param_1 + 0x28,&local_44);
    }
    goto LAB_0021291c;
  }
  fVar11 = *(float *)(param_1 + 0x1e0);
  iVar8 = *(int *)(param_1 + 0x8ac);
  if (iVar8 == DAT_00212790) {
    if ((int)fVar11 < DAT_002127a8) {
      *(float *)(param_1 + 0x8c0) = DAT_002127b8;
      *(float *)(param_1 + 0x8bc) = fVar13;
      *(float *)(param_1 + 0x8b8) = fVar13;
    }
    else if ((int)fVar11 < DAT_002127bc) {
      *(float *)(param_1 + 0x8c0) = DAT_002127b8;
      *(float *)(param_1 + 0x8b8) = fVar13;
      *(float *)(param_1 + 0x8bc) = fVar13 + (fVar11 - DAT_002127c0) * DAT_002127c4;
    }
    else {
      if ((int)fVar11 < DAT_002127c8) {
        fVar13 = DAT_002127b8 + (fVar11 - DAT_002127cc) * DAT_002127d0;
        fVar12 = DAT_002127d8 - (fVar11 - DAT_002127cc) * DAT_002127d4;
        *(float *)(param_1 + 0x8c0) = fVar13;
        *(float *)(param_1 + 0x8b8) = fVar13;
      }
      else {
        fVar13 = DAT_002127b0 - (fVar11 - DAT_002127dc) * DAT_002127ac;
        fVar12 = DAT_002127b4 + (fVar11 - DAT_002127dc) * DAT_002127e0;
        *(float *)(param_1 + 0x8c0) = fVar13;
        *(float *)(param_1 + 0x8b8) = fVar13;
      }
LAB_00212644:
      *(float *)(param_1 + 0x8bc) = fVar12;
    }
    goto LAB_00212834;
  }
  if (iVar8 == DAT_00212794) {
    if ((int)fVar11 < DAT_002127e4) {
      *(float *)(param_1 + 0x8bc) = DAT_002127b8;
    }
    else if ((int)fVar11 < DAT_002127a8) {
      *(float *)(param_1 + 0x8bc) = (fVar11 - DAT_002127e8) + DAT_002127b8;
    }
    else {
      *(float *)(param_1 + 0x8bc) = DAT_002127ec - (fVar11 - DAT_002127ec) * DAT_002127f0;
    }
    *(float *)(param_1 + 0x8c0) = fVar13;
LAB_00212830:
    *(float *)(param_1 + 0x8b8) = fVar13;
  }
  else if (iVar8 == DAT_00212798) {
    if ((int)fVar11 < DAT_002127f4) {
      fVar13 = DAT_002127b8 + fVar11 * DAT_002127f8;
LAB_00212828:
      *(float *)(param_1 + 0x8c0) = fVar13;
      *(float *)(param_1 + 0x8bc) = fVar13;
      goto LAB_00212830;
    }
    if (DAT_002127fc <= (int)fVar11) {
      if ((int)fVar11 < DAT_0021280c) {
        fVar13 = DAT_002127b8 + (fVar11 - DAT_00212810) * DAT_002127ac;
        *(float *)(param_1 + 0x8c0) = fVar13;
        *(float *)(param_1 + 0x8b8) = fVar13;
      }
      else {
        fVar13 = DAT_002127b0 - (fVar11 - DAT_00212814) * DAT_00212800;
        fVar12 = DAT_002127b4 + (fVar11 - DAT_00212814) * DAT_00212818;
        *(float *)(param_1 + 0x8c0) = fVar13;
        *(float *)(param_1 + 0x8b8) = fVar13;
      }
      goto LAB_00212644;
    }
    fVar12 = DAT_00212808 - (fVar11 - DAT_00212804) * DAT_00212800;
    *(float *)(param_1 + 0x8c0) = fVar12;
    *(float *)(param_1 + 0x8bc) = fVar12;
    *(float *)(param_1 + 0x8b8) = fVar12;
  }
  else {
    if (iVar8 != DAT_0021281c) goto LAB_00212828;
    *(float *)(param_1 + 0x8c0) = DAT_002127b8;
    *(float *)(param_1 + 0x8b8) = fVar13;
    fVar12 = (float)FUN_003727f0(fVar11 * DAT_00212820);
    *(float *)(param_1 + 0x8bc) = fVar13 + fVar12 * DAT_00212824;
  }
LAB_00212834:
  *(float *)(param_1 + 0x908) =
       (*(float *)(iVar2 + 0x24) * *(float *)(param_1 + 0x8bc) - *(float *)(param_1 + 0x90c)) *
       fVar6 * *(float *)(param_1 + 0x58);
LAB_0021291c:
  iVar8 = param_1 + 0x8c4;
  FUN_0037632c(param_1);
  if (*(int *)(param_1 + 0x8ac) == iVar7 || *(int *)(param_1 + 0x8ac) == iVar9) {
    *(float *)(param_1 + 0x914) =
         *(float *)(param_1 + 0x2c) +
         *(float *)(*(int *)(param_1 + 0x21c) + 0x1c) * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x904) = *(float *)(iVar2 + 0x20) * *(float *)(param_1 + 0x54) * fVar6;
  }
  iVar7 = param_2 + 0x5c78;
  if (*(short *)(param_1 + 0x1c) == 0x10) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    FUN_003761f0(param_2,iVar7,iVar8);
  }
  iVar9 = *(int *)(param_1 + 0x8ac);
  if (iVar9 != DAT_00212aa0) {
    bVar10 = iVar9 != DAT_00212aa4;
    iVar2 = DAT_00212aa4;
    if (bVar10) {
      iVar2 = DAT_0021278c;
    }
    iVar3 = iVar2;
    if (bVar10 && iVar9 != iVar2) {
      iVar3 = DAT_0021277c;
    }
    if ((bVar10 && iVar9 != iVar2) && iVar9 != iVar3) {
      FUN_00376168(param_2,iVar7,iVar8);
    }
    FUN_003762a4(param_2,iVar7,iVar8);
  }
  FUN_0037322c(uVar4,param_1);
  if ((*(short *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x140) != 0)) {
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(float *)(param_1 + 0xc);
    local_3c = *(undefined4 *)(param_1 + 0x30);
    if ((*(uint *)(DAT_00212aa8 + param_2) +
         (uint)((ulonglong)DAT_00212aac * (ulonglong)*(uint *)(DAT_00212aa8 + param_2) +
                (ulonglong)DAT_00212aac >> 0x21) * -7 == 0) &&
       ((*(int *)(param_1 + 0x8ac) != iVar5 ||
        ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc)) < DAT_00212ab0)))) {
      FUN_00362068(param_2,&local_44,0xfa,DAT_00212ab4,0);
      return;
    }
  }
  return;
}
