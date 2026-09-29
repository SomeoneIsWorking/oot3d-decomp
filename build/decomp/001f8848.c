// OoT3D decomp @ 001f8848  name=FUN_001f8848  size=1088

void FUN_001f8848(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  uVar2 = DAT_001f8c88;
  if (((*(byte *)(param_1 + 0x7c0) & 2) != 0 || (*(byte *)(param_1 + 0x6c0) & 2) != 0) ||
     ((*(byte *)(param_1 + 0x740) & 2) != 0)) {
    *(byte *)(param_1 + 0x6c0) = *(byte *)(param_1 + 0x6c0) & 0xfd;
    *(byte *)(param_1 + 0x740) = *(byte *)(param_1 + 0x740) & 0xfd;
    *(byte *)(param_1 + 0x7c0) = *(byte *)(param_1 + 0x7c0) & 0xfd;
    *(undefined1 *)(param_1 + 0x6a4) = 0x1e;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
    *(undefined4 *)(param_1 + 0x6a0) = uVar2;
  }
  uVar4 = DAT_001f8c90;
  uVar3 = DAT_001f8c8c;
  if ((*(byte *)(param_1 + 0x7c1) & 2) == 0) goto LAB_001f8b68;
  *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfd;
  FUN_00375fd0(param_1,param_1 + 0x7c8,1);
  cVar1 = *(char *)(param_1 + 0xb9);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar9 && cVar1 == '\0') goto LAB_001f8b68;
  iVar6 = FUN_00375eb8(param_1);
  iVar7 = DAT_001f8c94;
  if (iVar6 == 0) {
    FUN_00375bcc(param_1,DAT_001f8c98);
    FUN_00375b70(param_2,param_1);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
LAB_001f896c:
    uVar5 = DAT_001f8ca8;
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x0f') {
        if (*(int *)(param_1 + 0x6a0) == iVar7) {
          FUN_00373d40(param_1 + 0x1a4,2);
          FUN_00375ed8(param_1,0x400000,0x96,0x200000,0x1e);
          *(undefined2 *)(param_1 + 0x1c) = 0;
          *(undefined1 *)(param_1 + 0x8b8) = 10;
          *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
          *(undefined4 *)(param_1 + 0x6a0) = uVar5;
        }
        else {
          FUN_00375ed8(param_1,0x400000,0x96,0x200000,0x1e);
          *(undefined2 *)(param_1 + 0x1c) = 1;
          *(undefined1 *)(param_1 + 0x6a4) = 0x1e;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
          *(undefined4 *)(param_1 + 0x6a0) = uVar2;
        }
        goto LAB_001f8b68;
      }
      if (cVar1 == '\x02') {
        *(undefined2 *)(param_1 + 0x6a6) = 3;
        *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
        FUN_00375ed8(param_1,0x400000,0x96,0x200000,0x1e);
        *(undefined4 *)(param_1 + 0x6a0) = DAT_001f8cac;
        goto LAB_001f8b68;
      }
      if (cVar1 == '\x03') {
        *(undefined4 *)(param_1 + 100) = uVar4;
        FUN_00375ed8(param_1,0,0xff,0x200000,0x24);
        *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
        uVar2 = DAT_001f8cb0;
        *(undefined2 *)(param_1 + 0x6a6) = 0x36;
        *(undefined4 *)(param_1 + 0x6a0) = uVar2;
        goto LAB_001f8b68;
      }
      if (cVar1 != '\x0e') {
        FUN_00373d40(param_1 + 0x1a4,2);
        FUN_00375ed8(param_1,0x400000,0x96,0x200000,0x1e);
        *(undefined2 *)(param_1 + 0x1c) = 0;
        *(undefined1 *)(param_1 + 0x8b8) = 10;
        *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
        *(undefined4 *)(param_1 + 0x6a0) = uVar5;
        goto LAB_001f8b68;
      }
LAB_001f8b14:
      if (*(char *)(param_1 + 0x6a5) == '\0') {
        *(undefined1 *)(param_1 + 0x6a5) = 0x1e;
      }
      goto LAB_001f8b68;
    }
  }
  else if (*(char *)(param_1 + 0xb9) != '\x01') {
    if (*(char *)(param_1 + 0xb9) != '\x0e') {
      FUN_00375bcc(param_1,DAT_001f8c9c);
      goto LAB_001f896c;
    }
    goto LAB_001f8b14;
  }
  if (*(int *)(param_1 + 0x6a0) != iVar7) {
    FUN_00374a58(DAT_001f8ca0,param_1 + 0x1a4,1);
    *(undefined2 *)(param_1 + 0x6a6) = 0x78;
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_00375ed8(param_1,0,0xff,0x200000,0x50);
    uVar2 = DAT_001f8ca4;
    *(undefined1 *)(param_1 + 0x7d4) = 0;
    FUN_00375bcc(param_1,uVar2);
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(int *)(param_1 + 0x6a0) = iVar7;
  }
LAB_001f8b68:
  (**(code **)(param_1 + 0x6a0))(param_1,param_2);
  iVar6 = *(int *)(param_1 + 0x6a0);
  iVar7 = DAT_001f8cb4;
  if (iVar6 != DAT_001f8cb4) {
    iVar7 = DAT_001f8cb8;
  }
  if (iVar6 != DAT_001f8cb4 && iVar6 != iVar7) {
    FUN_0037632c(param_1,param_1 + 0x7b0);
    iVar7 = param_2 + 0x5c78;
    if (*(int *)(param_1 + 0x6a0) == DAT_001f8cbc) {
      FUN_003761f0(param_2,iVar7,param_1 + 0x6b0);
      FUN_003761f0(param_2,iVar7,param_1 + 0x730);
      FUN_003761f0(param_2,iVar7,param_1 + 0x7b0);
    }
    if ((*(byte *)(param_1 + 0x7c1) & 1) != 0) {
      FUN_00376168(param_2,iVar7,param_1 + 0x7b0);
    }
    FUN_003762a4(param_2,iVar7,param_1 + 0x7b0);
    FUN_0037322c(uVar4,param_1);
    *(undefined4 *)(param_1 + 0x8c4) = uVar3;
    *(undefined4 *)(param_1 + 0x8c0) = uVar3;
    *(undefined4 *)(param_1 + 0x8bc) = uVar3;
    iVar7 = DAT_001f8cc0;
    if (*(char *)(param_1 + 0x8b8) != 0) {
      iVar6 = 10 - *(char *)(param_1 + 0x8b8);
      iVar8 = DAT_001f8cc0 + iVar6 * 0xc;
      *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(DAT_001f8cc0 + iVar6 * 0xc);
      *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(iVar8 + 4);
      *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(iVar7 + iVar6 * 0xc + 8);
      *(char *)(param_1 + 0x8b8) = *(char *)(param_1 + 0x8b8) + -1;
    }
  }
  return;
}
