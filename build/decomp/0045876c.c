// OoT3D decomp @ 0045876c  name=FUN_0045876c  size=764

void FUN_0045876c(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  uint local_bc;
  uint local_b8 [32];
  undefined4 local_38;
  int local_34;
  char *local_30;
  int local_2c;
  char *local_28;

  if ((param_2[6] == '\0') || (local_30 = param_2 + 8, *(int *)(param_2 + 0xc) == 0)) {
    return;
  }
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  local_2c = param_1;
  local_28 = param_2;
  if (*(int *)(param_1 + 0x114) != 0) {
    local_34 = param_1 + 0x118;
    iVar3 = FUN_002da0cc();
    if (iVar3 != 0) {
      iVar3 = 0;
      local_38 = *(undefined4 *)(*(int *)(local_30 + 4) + 0x10);
      do {
        uVar13 = 0;
        uVar14 = 0;
        cVar1 = *local_28;
        iVar4 = FUN_002da0cc(local_34);
        if (iVar4 != 0) {
          do {
            iVar4 = FUN_004814ec(local_34,5,uVar14);
            uVar5 = FUN_0030de24();
            if (5 < uVar5) {
              local_bc = (uint)*(byte *)(iVar4 + 4);
              if (*(char *)(iVar4 + 5) != '\\') {
                local_bc = (uint)*(ushort *)(iVar4 + 4);
              }
              iVar6 = FUN_00470680(&local_bc);
              if (iVar6 == cVar1) {
                iVar6 = FUN_0030de24(iVar4);
                iVar15 = -1;
                if (iVar6 + 1 < 1) {
LAB_00458920:
                  iVar4 = 0;
                }
                else {
                  iVar7 = 0;
                  iVar12 = iVar6 + 1;
                  pcVar11 = (char *)(iVar4 + iVar6);
                  do {
                    if (*pcVar11 == '.') {
                      iVar15 = iVar6 - iVar7;
                    }
                    iVar12 = iVar12 + -1;
                    iVar7 = iVar7 + 1;
                    pcVar11 = pcVar11 + -1;
                  } while (iVar12 != 0);
                  bVar16 = iVar15 == 2;
                  if (1 < iVar15) {
                    iVar7 = iVar4 + iVar15;
                    bVar16 = *(char *)(iVar7 + -2) == '_';
                  }
                  if (!bVar16) goto LAB_00458920;
                  cVar2 = *(char *)(iVar7 + -1);
                  if (cVar2 == 'd') {
                    iVar4 = 1;
                  }
                  else if (cVar2 == 'n') {
                    iVar4 = 2;
                  }
                  else if (cVar2 == 'c') {
                    iVar4 = 3;
                  }
                  else if (cVar2 == 'a') {
                    iVar4 = 4;
                  }
                  else {
                    if (cVar2 != 't') goto LAB_00458920;
                    iVar4 = 5;
                  }
                }
                if (iVar4 == iVar3) {
                  local_b8[uVar13] = uVar14;
                  uVar13 = uVar13 + 1;
                  if (uVar13 == 0x20) break;
                }
              }
            }
            uVar14 = uVar14 + 1;
            uVar5 = FUN_002da0cc(local_34);
          } while (uVar14 < uVar5);
        }
        pcVar11 = local_30;
        uVar14 = uVar13 & 0xffff;
        pcVar8 = local_30;
        if ((int)uVar13 < 1) {
          pcVar8 = (char *)0x0;
        }
        *(short *)(local_30 + iVar3 * 8 + 0xc) = (short)uVar13;
        if ((int)uVar13 < 1) {
          *(char **)(local_30 + iVar3 * 8 + 0x10) = pcVar8;
        }
        else {
          puVar9 = (undefined4 *)
                   (**(code **)(*(int *)*DAT_00458a68 + 8))((int *)*DAT_00458a68,uVar14 * 0x98 + 8);
          uVar10 = 0;
          if (puVar9 != (undefined4 *)0x0) {
            puVar9[1] = uVar14;
            *puVar9 = 0x98;
            uVar10 = FUN_00350820(puVar9 + 2,DAT_00458a6c,0x98,uVar14);
          }
          *(undefined4 *)(pcVar11 + iVar3 * 8 + 0x10) = uVar10;
          uVar13 = 0;
          if (*(short *)(pcVar11 + iVar3 * 8 + 0xc) != 0) {
            do {
              uVar10 = FUN_00372f0c(local_34,local_b8[uVar13]);
              *(undefined4 *)(*(int *)(pcVar11 + iVar3 * 8 + 0x10) + uVar13 * 0x98) = local_38;
              FUN_00372d94(*(int *)(pcVar11 + iVar3 * 8 + 0x10) + uVar13 * 0x98,uVar10);
              uVar14 = uVar13 + 1;
              *(undefined1 *)(*(int *)(pcVar11 + iVar3 * 8 + 0x10) + uVar13 * 0x98 + 0x10) = 1;
              uVar13 = uVar14;
            } while (uVar14 < *(ushort *)(pcVar11 + iVar3 * 8 + 0xc));
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00458a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_00458a70 + (uint)*(byte *)(local_2c + 0x106) * 0xc))(local_2c,local_28);
  return;
}
