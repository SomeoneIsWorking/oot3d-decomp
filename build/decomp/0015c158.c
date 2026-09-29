// OoT3D decomp @ 0015c158  name=FUN_0015c158  size=900

void FUN_0015c158(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  int local_38 [3];

  iVar5 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1c5));
  if (iVar5 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1c5);
    *(byte *)(param_1 + 0x1e) = bVar1;
    uVar8 = DAT_0015c4d4;
    if ((bVar1 < 0x13) &&
       (local_38[2] = param_2 + (uint)bVar1 * 0x80, *(int *)(DAT_0015c4d0 + local_38[2]) != 0)) {
      local_38[2] = local_38[2] + 0x3a5c;
    }
    else {
      local_38[2] = 0;
    }
    local_38[2] = local_38[2] + 0x10;
    if (*(char *)(param_1 + 0x1c2) == '\x04' || *(char *)(param_1 + 0x1c2) == '\x06') {
      local_38[1] = 0;
      *(undefined1 *)(param_1 + 0x1c4) =
           *(undefined1 *)(DAT_0015c4d8 + (uint)*(byte *)(param_1 + 0x1c3) * 4 + 2);
      local_38[1] = FUN_003532c0(local_38[2],0);
      uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_38[1]);
      *(undefined4 *)(param_1 + 0x1a4) = uVar6;
      if (*(char *)(param_1 + 0x1c2) == '\x06') {
        *(undefined4 *)(param_1 + 100) = uVar8;
        uVar6 = DAT_0015c4e0;
        *(undefined4 *)(param_1 + 0x70) = DAT_0015c4dc;
        FUN_00375bcc(param_1,uVar6);
        *(undefined4 *)(param_1 + 0x1d0) = DAT_0015c4e4;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
      }
      else {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_0015c4e8;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        *(undefined2 *)(param_1 + 0x1bc) = 7;
      }
    }
    else {
      FUN_0036c2e8(param_1,param_2);
    }
    iVar5 = DAT_0015c4d8;
    if (*(char *)(param_1 + 0x1c4) == '\x03') {
      local_38[0] = 0;
      FUN_00372f38(param_1,param_2,param_1 + 0x1d4,0,param_1 + 0x1d8,1,param_1 + 0x1dc,5,
                   param_1 + 0x1e0,3,param_1 + 0x1e4,4,param_1 + 0x1e8,3,param_1 + 0x1ec,2,
                   param_1 + 0x1f0,1);
    }
    else {
      iVar10 = 0;
      iVar11 = 0;
      do {
        iVar9 = DAT_0015c4d8 + (uint)*(byte *)(param_1 + 0x1c3) * 4 + iVar11;
        iVar11 = iVar11 + 1;
        iVar9 = (int)*(char *)(DAT_0015c4d8 + 0x44 + (uint)*(byte *)(iVar9 + 2) * 6);
        if (-1 < iVar9) {
          local_38[iVar10] = iVar9;
          iVar10 = iVar10 + 1;
        }
      } while (iVar11 < 2);
      FUN_00352ee0(param_1,param_2,iVar10,param_1 + 0x1d4,local_38);
      piVar4 = DAT_0015c4f0;
      puVar3 = DAT_0015c4ec;
      if ((*(short *)(iVar5 + (uint)*(byte *)(param_1 + 0x1c3) * 4) == 0xb0) &&
         (iVar5 = 0, 0 < iVar10)) {
        do {
          iVar11 = param_1 + iVar5 * 4;
          if (*(int *)(iVar11 + 0x1d4) != 0) {
            iVar9 = (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3,0x98);
            puVar7 = (undefined4 *)0x0;
            if (iVar9 != 0) {
              puVar7 = (undefined4 *)FUN_00352e80();
            }
            *(undefined4 **)(iVar11 + 0x1fc) = puVar7;
            *puVar7 = *(undefined4 *)(*(int *)(iVar11 + 0x1d4) + 0x10);
            uVar6 = FUN_00372f0c(local_38[2],0);
            FUN_00372d94(*(undefined4 *)(iVar11 + 0x1fc),uVar6);
            *(undefined4 *)(*(int *)(iVar11 + 0x1fc) + 0xc) = uVar8;
            uVar6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),
                                        (byte)(in_fpscr >> 0x15) & 3);
            if (*piVar4 == 0) {
              *(undefined4 *)(*(int *)(iVar11 + 0x1fc) + 8) = uVar6;
              FUN_003586ec();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar10);
      }
    }
    iVar5 = DAT_0015c4d8;
    iVar11 = 0;
    do {
      cVar2 = *(char *)(iVar5 + (uint)*(byte *)(iVar5 + (uint)*(byte *)(param_1 + 0x1c3) * 4 +
                                                iVar11 + 2) * 6 + 0x45);
      if (-1 < cVar2) {
        if (cVar2 == '\"') {
          iVar10 = 0;
        }
        else {
          iVar10 = (int)*(char *)(param_1 + 0x1e);
        }
        uVar8 = FUN_0036aaa4(param_1,param_2,iVar10);
        *(undefined4 *)(param_1 + iVar11 * 4 + 500) = uVar8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 2);
    if (*(char *)(param_1 + 0x1c6) != '\0') {
      FUN_00353214(param_1 + 0x204,param_1,param_2);
      return;
    }
  }
  return;
}
