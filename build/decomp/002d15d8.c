// OoT3D decomp @ 002d15d8  name=FUN_002d15d8  size=1048

void FUN_002d15d8(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  code *pcVar11;
  int local_28;

  piVar2 = DAT_002d19f4;
  puVar10 = (uint *)0x0;
  puVar9 = (uint *)*DAT_002d19f0;
  local_28 = param_4;
  if (param_2 != 0) {
    uVar8 = param_2 & 0x1ff;
    pcVar11 = (code *)*DAT_002d19f8;
    for (puVar10 = *(uint **)(*DAT_002d19f4 + uVar8 * 4); puVar10 != (uint *)0x0;
        puVar10 = (uint *)puVar10[3]) {
      if (*puVar10 == param_2) {
        if (puVar10 != (uint *)0x0) {
          if (puVar10[2] == 0) {
            if (param_1 == 0x6800) {
              uVar8 = FUN_00303680();
              puVar10[2] = uVar8;
              puVar10[1] = 1;
            }
            else {
              if (pcVar11 == (code *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                puVar4 = (undefined4 *)(*pcVar11)(0x10000,0x100,0,0x1c);
              }
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
                puVar4[4] = DAT_002d19fc;
              }
              puVar10[2] = (uint)puVar4;
              puVar10[1] = 0;
            }
          }
          goto LAB_002d17d0;
        }
        break;
      }
    }
    if (pcVar11 == (code *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)(*pcVar11)(0x10000,0x100,0,0x10);
    }
    *puVar10 = param_2;
    puVar10[3] = 0;
    if (param_1 == 0x6800) {
      uVar3 = FUN_00303680();
      puVar10[2] = uVar3;
      puVar10[1] = 1;
    }
    else {
      if ((code *)*DAT_002d19f8 == (code *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(*(code *)*DAT_002d19f8)(0x10000,0x100,0,0x1c);
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = DAT_002d19fc;
      }
      puVar10[2] = (uint)puVar4;
      puVar10[1] = 0;
    }
    iVar5 = *piVar2;
    puVar7 = *(uint **)(iVar5 + uVar8 * 4);
    if (puVar7 == (uint *)0x0) {
      *(uint **)(iVar5 + uVar8 * 4) = puVar10;
    }
    else if (param_2 < *puVar7) {
      puVar10[3] = (uint)puVar7;
      *(uint **)(iVar5 + uVar8 * 4) = puVar10;
    }
    else {
      for (puVar1 = (uint *)puVar7[3]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[3]) {
        if (param_2 < *puVar1) {
          puVar7[3] = (uint)puVar10;
          puVar10[3] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_002d17d0;
          break;
        }
        puVar7 = puVar1;
      }
      puVar7[3] = (uint)puVar10;
    }
  }
LAB_002d17d0:
  if (param_1 == 0x6800) {
    if (puVar9[0x144] != param_2) {
      if (puVar9[0x144] == 0) {
        FUN_00371738(*(undefined4 *)(*piVar2 + 0x800),puVar9 + 0xfa,0x120);
        iVar5 = *piVar2;
        uVar8 = puVar9[0x143];
        iVar6 = *(int *)(iVar5 + 0x800);
        *(uint *)(iVar6 + 0x120) = puVar9[0x142];
        *(uint *)(iVar6 + 0x124) = uVar8;
        iVar5 = *(int *)(iVar5 + 0x800);
      }
      else {
        iVar5 = *(int *)(*(int *)(*piVar2 + 0x840) + 8);
        FUN_00371738(iVar5,puVar9 + 0xfa,0x120);
        uVar8 = puVar9[0x143];
        *(uint *)(iVar5 + 0x120) = puVar9[0x142];
        *(uint *)(iVar5 + 0x124) = uVar8;
      }
      FUN_00371738(iVar5 + 0x128,puVar9 + 0xa6,0x150);
      if (param_2 == 0) {
        uVar8 = *(uint *)(*piVar2 + 0x800);
      }
      else {
        uVar8 = puVar10[2];
      }
      FUN_00371738(puVar9 + 0xfa,uVar8,0x120);
      uVar3 = *(uint *)(uVar8 + 0x124);
      puVar9[0x142] = *(uint *)(uVar8 + 0x120);
      puVar9[0x143] = uVar3;
      FUN_00371738(puVar9 + 0xa6,uVar8 + 0x128,0x150);
      puVar9[0x144] = param_2;
      iVar5 = *piVar2;
      iVar6 = 0;
      *(uint **)(iVar5 + 0x840) = puVar10;
      do {
        uVar8 = puVar9[iVar6 * 6 + 0xfe];
        if (uVar8 == 0) {
          *(undefined4 *)(iVar5 + iVar6 * 4 + 0x810) = 0;
        }
        else {
          puVar10 = *(uint **)(iVar5 + (uVar8 & 0x1ff) * 4);
          if (puVar10 != (uint *)0x0) {
            do {
              uVar3 = *puVar10;
              if (uVar3 != uVar8) {
                puVar10 = (uint *)puVar10[3];
              }
            } while (uVar3 != uVar8 && puVar10 != (uint *)0x0);
          }
          *(uint **)(iVar5 + iVar6 * 4 + 0x810) = puVar10;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xc);
      uVar8 = puVar9[0x143];
      if (uVar8 == 0) {
        *(undefined4 *)(iVar5 + 0x808) = 0;
      }
      else {
        puVar10 = *(uint **)(iVar5 + (uVar8 & 0x1ff) * 4);
        if (puVar10 != (uint *)0x0) {
          do {
            uVar3 = *puVar10;
            if (uVar3 != uVar8) {
              puVar10 = (uint *)puVar10[3];
            }
          } while (uVar3 != uVar8 && puVar10 != (uint *)0x0);
        }
        *(uint **)(iVar5 + 0x808) = puVar10;
      }
      uVar8 = puVar9[0x142];
      if (uVar8 == 0) {
        *(undefined4 *)(iVar5 + 0x80c) = 0;
      }
      else {
        puVar10 = *(uint **)(iVar5 + (uVar8 & 0x1ff) * 4);
        if (puVar10 != (uint *)0x0) {
          do {
            uVar3 = *puVar10;
            if (uVar3 != uVar8) {
              puVar10 = (uint *)puVar10[3];
            }
          } while (uVar3 != uVar8 && puVar10 != (uint *)0x0);
        }
        *(uint **)(iVar5 + 0x80c) = puVar10;
      }
      *puVar9 = *puVar9 | 0xc0;
      local_28 = *(int *)(iVar5 + 0x804);
      if (local_28 != 0) {
        FUN_002bf27c(1,&local_28);
        *(undefined4 *)(*piVar2 + 0x804) = 0;
      }
    }
  }
  else if (param_1 == 0x8892) {
    puVar9[0x143] = param_2;
    *(uint **)(*piVar2 + 0x808) = puVar10;
  }
  else if (param_1 == 0x8893) {
    puVar9[0x142] = param_2;
    *(uint **)(*piVar2 + 0x80c) = puVar10;
  }
  *puVar9 = *puVar9 | 2;
  return;
}
