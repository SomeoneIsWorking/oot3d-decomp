// OoT3D decomp @ 001ae310  name=FUN_001ae310  size=1948

void FUN_001ae310(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;

  fVar8 = DAT_001ae6e0;
  uVar7 = DAT_001ae6dc;
  uVar6 = DAT_001ae6d8;
  fVar5 = DAT_001ae6d4;
  fVar4 = DAT_001ae6cc;
  local_48 = DAT_001ae6cc;
  local_44 = DAT_001ae6cc;
  local_40 = DAT_001ae6cc;
  local_54 = DAT_001ae6cc;
  local_50 = DAT_001ae6cc;
  local_4c = DAT_001ae6cc;
  local_58 = *DAT_001ae6d0;
  local_5c = DAT_001ae6d0[1];
  local_60 = DAT_001ae6d0[2];
  local_64 = DAT_001ae6d0[3];
  if ((*(ushort *)(param_1 + 0x90) & 0x10) != 0 && (*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x454) = 0;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - fVar5;
    FUN_0036f00c(fVar8,uVar7,param_2,param_1,param_1 + 0x28,0xb,0,0,0);
    *(undefined1 *)(param_1 + 0x444) = 0;
    *(float *)(param_1 + 0x6c) = fVar4;
    *(undefined2 *)(param_1 + 0x446) = 0x3c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375bcc(param_1,uVar6);
    *(undefined4 *)(param_1 + 0x44c) = DAT_001ae6e4;
    goto LAB_001ae800;
  }
  if ((*(byte *)(param_1 + 0x521) & 2) != 0) {
    *(byte *)(param_1 + 0x521) = *(byte *)(param_1 + 0x521) & 0xfd;
    cVar2 = *(char *)(param_1 + 0xb9);
    uVar14 = local_60;
    if (cVar2 != '\0') {
      uVar14 = (uint)*(byte *)(param_1 + 0x444);
    }
    if (cVar2 == '\0' || uVar14 == 6) {
      *(undefined1 *)(param_1 + 0x445) = 1;
      *(undefined2 *)(param_1 + 0x448) = 0x96;
      goto LAB_001ae800;
    }
    *(char *)(param_1 + 0x455) = cVar2;
    FUN_00375fd0(param_1,param_1 + 0x528,0);
    if (*(char *)(param_1 + 0x455) == '\x01' || *(char *)(param_1 + 0x455) == '\x0e') {
      if (*(char *)(param_1 + 0x460) == '\0') {
        FUN_00375eb8(param_1);
        FUN_00375ed8(param_1,0,0x78,0,0x50);
        *(float *)(param_1 + 0x6c) = fVar4;
        if (*(char *)(param_1 + 0x455) == '\x0e') {
          *(undefined1 *)(param_1 + 0x45f) = 0x30;
        }
        uVar6 = DAT_001ae6f0;
        *(char *)(param_1 + 0x460) = (char)*(undefined2 *)(param_1 + 0x11a);
        FUN_00375bcc(param_1,uVar6);
        *(undefined4 *)(param_1 + 0x44c) = DAT_001ae6f4;
        *(float *)(param_1 + 0x46c) = fVar4;
      }
      goto LAB_001ae800;
    }
    if (*(float *)(param_1 + 0x46c) == fVar4) {
      FUN_00375eb8(param_1);
      *(undefined1 *)(param_1 + 0x460) = 0;
    }
    if ((*(char *)(param_1 + 0x445) == '\x01' || *(char *)(param_1 + 0x445) == '\x04') &&
       (*(char *)(param_1 + 0xb7) == '\0')) {
      if (*(char *)(param_1 + 0x444) != '\0') {
        FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
        iVar12 = FUN_00342abc(param_2,param_1 + 0x510);
        if (iVar12 == 0) {
          *(undefined1 *)(param_1 + 0x454) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x454) = 0;
          *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - fVar5;
          FUN_0036f00c(fVar8,uVar7,param_2,param_1,param_1 + 0x28,0xb,0,0,0);
        }
        FUN_00374444(param_2,param_1,param_1 + 0x28,0x90);
        *(undefined1 *)(param_1 + 0x444) = 0;
        *(float *)(param_1 + 0x6c) = fVar4;
        *(undefined2 *)(param_1 + 0x446) = 0x3c;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        FUN_00375bcc(param_1,uVar6);
        *(undefined4 *)(param_1 + 0x44c) = DAT_001ae6e4;
      }
    }
    else if (*(char *)(param_1 + 0x444) != '\x01' && *(char *)(param_1 + 0x444) != '\x06') {
      FUN_00375bcc(param_1,DAT_001ae6f8);
      FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
      if (*(char *)(param_1 + 0x444) != '\x05') {
        *(undefined1 *)(param_1 + 0x444) = 1;
        *(float *)(param_1 + 0x6c) = fVar4;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(float *)(param_1 + 0x46c) = fVar4;
    }
  }
  uVar10 = DAT_001ae714;
  uVar9 = DAT_001ae710;
  uVar6 = DAT_001ae708;
  if ((((*(char *)(DAT_001ae700 + param_2) != '\0') && (*(int *)(param_1 + 0x98) <= DAT_001ae704))
      && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) && ((*(ushort *)(param_1 + 0x90) & 2) == 0)) {
    uVar3 = (undefined2)DAT_001ae70c;
    if (*(char *)(param_1 + 0x444) == '\x05') {
      if ((1 < *(int *)(param_1 + 0x440)) && (*(int *)(param_1 + 0x44c) != DAT_001ae718)) {
        *(undefined1 *)(param_1 + 0x460) = 0;
        *(undefined2 *)(param_1 + 0x448) = 300;
        FUN_00370350(uVar6,param_1 + 0x1a4,2);
        *(undefined1 *)(param_1 + 0x444) = 6;
        *(float *)(param_1 + 0x6c) = fVar4;
        *(undefined2 *)(param_1 + 0x446) = uVar3;
        *(undefined1 *)(param_1 + 0x445) = 3;
        *(undefined4 *)(param_1 + 100) = uVar9;
        FUN_00375bcc(param_1,uVar10);
        uVar6 = DAT_001aeb60;
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
        *(undefined4 *)(param_1 + 0x44c) = uVar6;
        goto LAB_001ae800;
      }
    }
    else if (*(char *)(param_1 + 0x444) == '\0') goto LAB_001ae800;
    bVar15 = *(int *)(param_1 + 0x440) != 1;
    iVar12 = 1;
    if (bVar15) {
      iVar12 = *(int *)(param_1 + 0x44c);
    }
    if (bVar15 && iVar12 != DAT_001ae718) {
      *(undefined1 *)(param_1 + 0x460) = 0;
      FUN_00370350(uVar6,param_1 + 0x1a4,2);
      *(undefined1 *)(param_1 + 0x444) = 5;
      *(float *)(param_1 + 0x484) = fVar4;
      *(float *)(param_1 + 0x6c) = fVar4;
      *(undefined2 *)(param_1 + 0x446) = uVar3;
      *(undefined4 *)(param_1 + 100) = uVar9;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
LAB_001ae800:
  iVar12 = DAT_001aeb6c;
  if (*(char *)(param_1 + 0xb9) != '\x06') {
    (**(code **)(param_1 + 0x44c))(param_1,param_2);
    if (*(int *)(param_1 + 0x568) != 0) {
      *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + -1;
    }
    if (((*(byte *)(param_1 + 0x4c8) & 2) != 0) && (*(int *)(param_1 + 0x568) == 0)) {
      *(undefined4 *)(param_1 + 0x568) = 0xf;
      *(byte *)(param_1 + 0x4c8) = *(byte *)(param_1 + 0x4c8) & 0xfd;
    }
    if (*(char *)(param_1 + 0x460) == '\0') {
      *(byte *)(param_1 + 0x45e) = *(char *)(param_1 + 0x45e) + 4U & 0x7f;
    }
    fVar5 = DAT_001aeb74;
    if ((*(uint *)(param_2 + 0x5bf4) & (uint)*(byte *)(param_1 + 0x445)) == 0) {
      local_50 = DAT_001aeb70;
      local_48 = (float)FUN_003738a8(*(float *)(param_1 + 0x46c) * DAT_001aeb74);
      local_44 = *(float *)(param_1 + 0x46c) * fVar8;
      local_40 = (float)FUN_003738a8(*(float *)(param_1 + 0x46c) * fVar5);
      local_54 = local_48 * DAT_001aeb78;
      local_4c = local_40 * DAT_001aeb78;
      FUN_00365d20(param_2,param_1 + 0x28,&local_48,&local_54,&local_58,&local_5c,0x3c,0,0x14);
    }
    fVar5 = DAT_001aeb7c;
    if (iVar12 < *(int *)(param_1 + 0x46c)) {
      *(undefined1 *)(param_1 + 0x4d4) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x4d4) = 0;
      fVar11 = DAT_001aeb80;
      if ((((*(uint *)(param_2 + 0x5bf4) & 1) == 0) && (*(byte *)(param_1 + 0x444) < 5)) &&
         (*(char *)(param_1 + 0x460) == '\0')) {
        local_50 = DAT_001aeb80;
        local_48 = (float)FUN_003738a8(uVar7);
        local_44 = (float)FUN_003738a8(DAT_001aeb84);
        local_44 = local_44 + DAT_001aeb88;
        local_40 = (float)FUN_003738a8(uVar7);
        local_4c = local_40 * fVar11;
        local_54 = local_48 * fVar11;
        FUN_003738a8(uVar7);
        FUN_003738a8(uVar7);
        bVar1 = *(byte *)(param_1 + 0x453);
        local_60 = CONCAT13(bVar1,(undefined3)local_60);
        if (bVar1 < 0x1e) {
          local_64 = local_64 & 0xffffff;
        }
        else {
          local_64 = CONCAT13(bVar1 - 0x1e,(undefined3)local_64);
        }
        FUN_00365d20(param_2,param_1 + 0x28,&local_48,&local_54,&local_60,&local_64,0xb4,0x28,
                     (int)(short)(int)(fVar5 - *(float *)(param_1 + 0x46c) * DAT_001aeb8c));
      }
    }
    iVar13 = FUN_0035e600(DAT_001aeb90,param_1,param_2,(int)*(short *)(param_1 + 0x36));
    *(short *)(param_1 + 0x458) = (short)iVar13;
    cVar2 = *(char *)(param_1 + 0x444);
    if (((((cVar2 == '\x04' || cVar2 == '\x06') || cVar2 == '\x05') || cVar2 == '\x01') ||
        (iVar13 != 0)) ||
       (iVar13 = FUN_0035e600(fVar4,param_1,param_2,(int)*(short *)(param_1 + 0x36)), iVar13 == 0))
    {
      FUN_00376864(param_1);
    }
    FUN_00376340(fVar5,fVar8,DAT_001aeb94,param_2,param_1,0x1f);
  }
  FUN_0037632c(param_1,param_1 + 0x510);
  iVar13 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar13,param_1 + 0x510);
  if ((*(char *)(param_1 + 0x444) != '\0') &&
     ((*(short *)(param_1 + 0x11a) == 0 || ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)))) {
    FUN_00376168(param_2,iVar13,param_1 + 0x510);
  }
  bVar15 = *(char *)(param_1 + 0x445) != '\0';
  if (*(char *)(param_1 + 0x445) != '\x01') {
    bVar15 = 4 < *(byte *)(param_1 + 0x444);
  }
  if ((!bVar15) && (iVar12 < *(int *)(param_1 + 0x46c))) {
    FUN_0037632c(param_1);
    if (*(int *)(param_1 + 0x568) == 0) {
      FUN_003761f0(param_2,iVar13,param_1 + 0x4b8);
    }
  }
  fVar4 = DAT_001aeb98;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar4;
  return;
}
