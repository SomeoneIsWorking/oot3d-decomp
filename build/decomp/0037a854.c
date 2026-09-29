// OoT3D decomp @ 0037a854  name=FUN_0037a854  size=692

void FUN_0037a854(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_38 [4];
  int local_28;

  *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) & 199;
  cVar1 = *(char *)(param_2 + 0x4c30);
  if (cVar1 == '\x05') {
    *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 8;
  }
  else if (cVar1 == '\x19') {
    *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 0x10;
  }
  else if (cVar1 == '\x1a') {
    *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 0x20;
  }
  iVar10 = DAT_0037ab08;
  if ((*(byte *)(param_1 + 0x1b4) & 0x30) == 0) {
    iVar10 = 0;
    do {
      iVar8 = param_1 + iVar10 * 8;
      piVar9 = (int *)(iVar8 + 0x1a4);
      iVar8 = *(int *)(iVar8 + 0x1a4);
      if (iVar8 != 0) {
        if (*(int *)(iVar8 + 0x128) != 0) {
          FUN_00374428();
          *(undefined4 *)(*piVar9 + 0x128) = 0;
        }
        FUN_00374428(*piVar9);
        *piVar9 = 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 2);
  }
  else {
    iVar8 = 0;
    iVar11 = DAT_0037ab08 + -0xf;
    do {
      iVar3 = param_1 + iVar8 * 8;
      puVar12 = (undefined4 *)(iVar10 + iVar8 * 0x14);
      iVar4 = *(int *)(iVar3 + 0x1a4);
      if (iVar4 == 0) {
        iVar4 = FUN_0036aa20(*puVar12,puVar12[1],puVar12[2],param_2 + 0x208c,param_1,param_2,0xfc,0,
                             (int)*(short *)(iVar3 + 0x1a8),0,(int)*(short *)(puVar12 + 3));
        *(int *)(iVar3 + 0x1a4) = iVar4;
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      else {
        sVar2 = *(short *)(iVar4 + 0xbe);
        *(short *)(iVar3 + 0x1a8) = sVar2;
        bVar7 = *(byte *)(iVar11 + iVar8);
        if (sVar2 == *(short *)((int)puVar12 + 0xe)) {
          bVar7 = bVar7 | *(byte *)(param_1 + 0x1b4);
        }
        else {
          bVar7 = *(byte *)(param_1 + 0x1b4) & ~bVar7;
        }
        *(byte *)(param_1 + 0x1b4) = bVar7;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
  }
  iVar10 = FUN_0036e864(param_2,0x29);
  if (iVar10 == 0) {
    bVar7 = *(byte *)(param_1 + 0x1b4) & 0xfb;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x1b4) | 4;
  }
  *(byte *)(param_1 + 0x1b4) = bVar7;
  local_28 = param_2 + 0x3a58;
  uVar16 = FUN_00363c10(local_28,0xab);
  iVar10 = DAT_0037ab0c;
  local_38[0] = (int)((ulonglong)uVar16 >> 0x20);
  iVar8 = (int)uVar16;
  bVar13 = iVar8 == 0;
  if (-1 < iVar8) {
    local_38[0] = *(int *)(param_1 + 0x1c4);
    bVar13 = local_38[0] == iVar8;
  }
  if (bVar13) {
    bVar7 = *(byte *)(param_1 + 0x1b4);
    bVar13 = (bVar7 & 0x18) == 0;
    bVar14 = (bVar7 & 2) == 0;
    bVar15 = (bVar7 & 1) != 0;
    if ((!bVar13 && !bVar14) && bVar15) {
      local_38[0] = 1;
    }
    if ((bVar13 || bVar14) || !bVar15) {
      local_38[0] = 0;
    }
    local_38[2] = bVar7 & 0x30;
    local_38[1] = bVar7 & 0x30;
    local_38[3] = param_2 + 0x208c;
    iVar11 = 0;
    iVar3 = DAT_0037ab0c + 0x34;
    do {
      iVar4 = param_1 + iVar11 * 4;
      if (local_38[iVar11] == 0) {
        if (*(int *)(iVar4 + 0x1b8) != 0) {
          FUN_00374428();
          *(undefined4 *)(iVar4 + 0x1b8) = 0;
        }
      }
      else if ((*(int *)(iVar4 + 0x1b8) == 0) && (iVar5 = FUN_00373074(local_28,iVar8), iVar5 != 0))
      {
        puVar12 = (undefined4 *)(iVar3 + iVar11 * 0xc);
        uVar6 = z_actor_003738d0(*puVar12,puVar12[1],puVar12[2],local_38[3],param_2,0xb7,0,0,0,
                                 (int)*(short *)(iVar10 + iVar11 * 2),1);
        *(undefined4 *)(iVar4 + 0x1b8) = uVar6;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  *(int *)(param_1 + 0x1c4) = iVar8;
  return;
}
