// OoT3D decomp @ 0014efd8  name=FUN_0014efd8  size=1760

void FUN_0014efd8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char cVar11;

  uVar3 = DAT_0014f388;
  uVar2 = DAT_0014f384;
  iVar12 = *(int *)(DAT_0014f380 + param_2);
  if ((*(byte *)(param_1 + 0x211) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1b9) & 2) != 0) {
      *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
      cVar11 = '\0';
      cVar10 = '\0';
      local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3);
      local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1d0),(byte)(in_fpscr >> 0x15) & 3);
      local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1d2),(byte)(in_fpscr >> 0x15) & 3);
      if (*(char *)(param_1 + 0xb9) != '\0') {
        FUN_0037c7b4(param_2,0,&local_38);
      }
      puVar9 = *(undefined4 **)(param_1 + 0x1e4);
      switch(*(undefined1 *)(param_1 + 0xb9)) {
      default:
        FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        break;
      case 1:
        FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        FUN_00375bcc(param_1,DAT_0014f718);
        FUN_00375ed8(param_1,0,0xff,0x200000,0x50);
        FUN_00355a7c(param_1);
        return;
      case 2:
        FUN_00375eb8(param_1);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        }
        else {
          FUN_003741e4(param_2,*puVar9,0,&local_38,0);
        }
        if (*(char *)(param_1 + 0xb7) == '\0') {
          *(undefined1 *)(param_1 + 0x3e4) = 0;
        }
        FUN_00375ed8(param_1,0x400000,0xff,0x200000,0x50);
        *(undefined2 *)(param_1 + 0x262) = 0x1e;
        FUN_00355a7c(param_1);
        return;
      case 3:
        FUN_00375eb8(param_1);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        }
        else {
          FUN_003741e4(param_2,*puVar9,0,&local_38,0);
        }
        if (*(char *)(param_1 + 0xb7) == '\0') {
          *(undefined1 *)(param_1 + 0x3e4) = 0;
        }
        if (*(short *)(param_1 + 0x11a) == 0) {
          *(undefined2 *)(param_1 + 0x262) = 0x1e;
          FUN_00375ed8(param_1,0,0xff,0x200000,0x50);
        }
        FUN_00355a7c(param_1);
        return;
      case 4:
        FUN_00375eb8(param_1);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        }
        else {
          FUN_003741e4(param_2,*puVar9,0,&local_38,0);
        }
        if (*(char *)(param_1 + 0xb7) == '\0') {
          *(undefined1 *)(param_1 + 0x3e4) = 5;
        }
        FUN_00375ed8(param_1,0x800000,0xff,0x200000,0x50);
        FUN_00355a7c(param_1);
        return;
      case 0xb:
        cVar11 = '\x01';
      case 0xc:
        cVar11 = cVar11 + '\x01';
      case 0xd:
        cVar11 = cVar11 + '\x01';
      case 0xe:
        cVar10 = cVar11 + '\x01';
      case 0xf:
        *(undefined1 *)(param_1 + 0x3e6) = 0;
        FUN_00375eb8(param_1);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          FUN_003741e4(param_2,*puVar9,1,&local_38,0);
        }
        else {
          FUN_003741e4(param_2,*puVar9,0,&local_38,0);
        }
        *(undefined2 *)(param_1 + 0x260) = 0x28;
        FUN_00375ed8(param_1,0x400000,0xff,0x200000,0x28);
        if (*(short *)(param_1 + 1000) == 0) {
          if (*(char *)(param_1 + 0xb7) == '\0') {
            *(char *)(param_1 + 0x3e4) = cVar10;
            *(undefined1 *)(param_1 + 0x3e1) = 1;
            *(undefined2 *)(param_1 + 600) = 0;
            *(undefined4 *)(param_1 + 0x3d8) = uVar2;
            *(undefined4 *)(param_1 + 0x3d4) = uVar2;
            *(undefined4 *)(param_1 + 0x298) = uVar2;
            *(undefined4 *)(param_1 + 0x2c8) = uVar2;
            *(undefined4 *)(param_1 + 0x2c0) = uVar2;
            *(undefined4 *)(param_1 + 0x2d8) = uVar2;
            *(undefined4 *)(param_1 + 0x308) = uVar2;
            *(undefined4 *)(param_1 + 0x300) = uVar2;
            *(undefined4 *)(param_1 + 0x318) = uVar2;
            *(undefined4 *)(param_1 + 0x348) = uVar2;
            *(undefined4 *)(param_1 + 0x340) = uVar2;
            *(undefined4 *)(param_1 + 0x358) = uVar2;
            *(undefined4 *)(param_1 + 0x388) = uVar2;
            *(undefined4 *)(param_1 + 0x380) = uVar2;
            uVar3 = DAT_0014f398;
            *(undefined4 *)(param_1 + 0x398) = uVar2;
            *(undefined4 *)(param_1 + 0x3c8) = uVar2;
            *(undefined4 *)(param_1 + 0x3c0) = uVar2;
            *(undefined4 *)(param_1 + 0x1a4) = uVar3;
            FUN_00375bcc(param_1,DAT_0014f39c);
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            return;
          }
          *(undefined1 *)(param_1 + 0x3e0) = 0;
          *(undefined4 *)(param_1 + 0x3d4) = uVar2;
          uVar4 = DAT_0014f38c;
          *(undefined2 *)(param_1 + 0x25a) = 0x1e;
          *(undefined4 *)(param_1 + 0x26c) = uVar4;
          *(undefined4 *)(param_1 + 0x288) = uVar2;
          *(undefined4 *)(param_1 + 0x290) = uVar2;
          *(undefined4 *)(param_1 + 0x298) = uVar2;
          *(undefined4 *)(param_1 + 0x2c8) = uVar2;
          *(undefined4 *)(param_1 + 0x2c0) = uVar2;
          *(undefined4 *)(param_1 + 0x2b0) = uVar3;
          uVar5 = DAT_0014f394;
          uVar4 = DAT_0014f390;
          *(undefined4 *)(param_1 + 0x2a8) = uVar3;
          *(undefined4 *)(param_1 + 0x2d8) = uVar2;
          *(undefined4 *)(param_1 + 0x308) = uVar2;
          *(undefined4 *)(param_1 + 0x300) = uVar2;
          *(undefined4 *)(param_1 + 0x2f0) = uVar3;
          *(undefined4 *)(param_1 + 0x2e8) = uVar3;
          *(undefined4 *)(param_1 + 0x318) = uVar2;
          *(undefined4 *)(param_1 + 0x348) = uVar2;
          *(undefined4 *)(param_1 + 0x340) = uVar2;
          *(undefined4 *)(param_1 + 0x330) = uVar3;
          *(undefined4 *)(param_1 + 0x328) = uVar3;
          *(undefined4 *)(param_1 + 0x358) = uVar2;
          *(undefined4 *)(param_1 + 0x388) = uVar2;
          *(undefined4 *)(param_1 + 0x380) = uVar2;
          *(undefined4 *)(param_1 + 0x370) = uVar3;
          *(undefined4 *)(param_1 + 0x368) = uVar3;
          *(undefined4 *)(param_1 + 0x398) = uVar2;
          *(undefined4 *)(param_1 + 0x3c8) = uVar2;
          *(undefined4 *)(param_1 + 0x3c0) = uVar2;
          *(undefined4 *)(param_1 + 0x3b0) = uVar3;
          *(undefined4 *)(param_1 + 0x3a8) = uVar3;
          *(undefined4 *)(param_1 + 0x1a4) = uVar4;
          FUN_00375bcc(param_1,uVar5);
          return;
        }
        FUN_00355b40(param_1,param_2);
        return;
      }
    }
    sVar1 = *(short *)(param_1 + 0x264);
    bVar13 = sVar1 == 0;
    if (bVar13) {
      sVar1 = *(short *)(param_1 + 0x11a);
    }
    bVar14 = bVar13 && sVar1 == 0;
    if (bVar13 && sVar1 == 0) {
      bVar14 = *(char *)(DAT_0014f71c + iVar12) == '\0';
    }
    if (bVar14) {
      uVar6 = iVar12 + 0x1000;
      uVar8 = *(uint *)(iVar12 + 0x1710);
      bVar13 = (uVar8 & 0x20000000) == 0;
      if (bVar13) {
        uVar6 = *(uint *)(iVar12 + 0x1714);
      }
      if (bVar13 && (uVar6 & 0x80) == 0) {
        bVar13 = (*(byte *)(param_1 + 0x1ba) & 2) == 0;
        if (bVar13) {
          uVar8 = (uint)*(byte *)(param_1 + 0x212);
        }
        if (!bVar13 || (uVar8 & 2) != 0) {
          *(byte *)(param_1 + 0x1ba) = *(byte *)(param_1 + 0x1ba) & 0xfd;
          *(byte *)(param_1 + 0x212) = *(byte *)(param_1 + 0x212) & 0xfd;
          iVar7 = (**(code **)(DAT_0014f720 + param_2))(param_2,iVar12);
          if (iVar7 != 0) {
            *(int *)(iVar12 + 0x124) = param_1;
            *(undefined1 *)(param_1 + 0x3e6) = 0;
            *(undefined2 *)(param_1 + 0x25e) = 0x96;
            uVar4 = DAT_0014f728;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            *(undefined2 *)(param_1 + 0x264) = 8;
            *(undefined2 *)(param_1 + 1000) = 1;
            *(undefined1 *)(param_1 + 0x284c) = 0;
            *(undefined1 *)(param_1 + 0x284d) = 0;
            *(undefined1 *)(DAT_0014f724 + param_2) = 0;
            *(undefined1 *)(param_1 + 0x3e0) = 0;
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            *(undefined4 *)(param_1 + 0x3dc) = uVar2;
            *(undefined4 *)(param_1 + 0x3d4) = uVar2;
            *(undefined4 *)(param_1 + 0x288) = uVar4;
            uVar4 = DAT_0014f734;
            *(undefined4 *)(param_1 + 0x26c) = DAT_0014f72c;
            uVar5 = DAT_0014f738;
            *(undefined4 *)(param_1 + 0x290) = DAT_0014f730;
            *(undefined4 *)(param_1 + 0x298) = uVar2;
            *(undefined4 *)(param_1 + 0x2c8) = uVar2;
            *(undefined4 *)(param_1 + 0x2c0) = uVar2;
            *(undefined4 *)(param_1 + 0x2b0) = uVar3;
            *(undefined4 *)(param_1 + 0x2a8) = uVar3;
            *(undefined4 *)(param_1 + 0x2d8) = uVar2;
            *(undefined4 *)(param_1 + 0x308) = uVar2;
            *(undefined4 *)(param_1 + 0x300) = uVar2;
            *(undefined4 *)(param_1 + 0x2f0) = uVar3;
            *(undefined4 *)(param_1 + 0x2e8) = uVar3;
            *(undefined4 *)(param_1 + 0x318) = uVar2;
            *(undefined4 *)(param_1 + 0x348) = uVar2;
            *(undefined4 *)(param_1 + 0x340) = uVar2;
            *(undefined4 *)(param_1 + 0x330) = uVar3;
            *(undefined4 *)(param_1 + 0x328) = uVar3;
            *(undefined4 *)(param_1 + 0x358) = uVar2;
            *(undefined4 *)(param_1 + 0x388) = uVar2;
            *(undefined4 *)(param_1 + 0x380) = uVar2;
            *(undefined4 *)(param_1 + 0x370) = uVar3;
            *(undefined4 *)(param_1 + 0x368) = uVar3;
            *(undefined4 *)(param_1 + 0x398) = uVar2;
            *(undefined4 *)(param_1 + 0x3c8) = uVar2;
            *(undefined4 *)(param_1 + 0x3c0) = uVar2;
            *(undefined4 *)(param_1 + 0x3b0) = uVar3;
            *(undefined4 *)(param_1 + 0x3a8) = uVar3;
            *(undefined4 *)(param_1 + 0x1a4) = uVar4;
            FUN_00375bcc(param_1,uVar5);
            return;
          }
        }
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x211) = *(byte *)(param_1 + 0x211) & 0xfd;
    local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x226),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x228),(byte)(in_fpscr >> 0x15) & 3);
    local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x22a),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003741e4(param_2,**(undefined4 **)(param_1 + 0x23c),1,&local_38,0);
    FUN_00375f90(param_2,&local_38,8);
  }
  return;
}
