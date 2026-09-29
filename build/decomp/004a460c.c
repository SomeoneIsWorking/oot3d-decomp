// OoT3D decomp @ 004a460c  name=FUN_004a460c  size=2668

undefined4 FUN_004a460c(int *param_1,int param_2,uint *param_3,uint param_4)

{
  char **ppcVar1;
  char **ppcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char **ppcVar14;
  int iVar15;
  uint uVar16;
  char **ppcVar17;
  undefined4 *puVar18;
  char **ppcVar19;
  undefined4 *puVar20;
  bool bVar21;
  char *local_7c;
  undefined4 *local_78;
  int *local_74;
  int *local_70;
  uint local_6c;
  undefined4 *local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  undefined4 *local_58;
  int *local_54;
  int *local_50;
  char *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *piStack_34;
  int iStack_30;
  uint *puStack_2c;
  uint local_28;

  piStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  iVar5 = FUN_002bd7d4(*param_3 + param_2,&local_3c,param_3,param_4);
  if ((iVar5 == 0) ||
     (iVar5 = FUN_002bd7d4(*param_3 + param_2,&local_40,param_3,local_28), iVar5 == 0))
  goto LAB_004a50fc;
  (**(code **)*param_1)(param_1,s_Find_stream_type__d___d_bytes__004a4a00,local_3c,local_40);
  iVar5 = DAT_004a4a20;
  if (local_3c == 0) {
    *param_3 = *param_3 + local_40;
    return 0x100;
  }
  puVar6 = (undefined4 *)param_1[6];
  if (local_3c == 3) {
    piVar7 = (int *)(**(code **)*puVar6)(puVar6,0x34);
    if (piVar7 != (int *)0x0) {
      *piVar7 = DAT_004a4a2c;
      piVar7[1] = 3;
      piVar7[2] = 0xd;
      piVar7[3] = -1;
      piVar7[0xc] = 0;
    }
  }
  else if (local_3c < 4) {
    if (local_3c == 1) {
      piVar7 = (int *)(**(code **)*puVar6)(puVar6,0x2c);
      if (piVar7 != (int *)0x0) {
        piVar7[2] = 0xc;
        piVar7[3] = -1;
        *piVar7 = iVar5;
        piVar7[1] = 1;
      }
    }
    else if (local_3c == 2) {
      piVar7 = (int *)(**(code **)*puVar6)(puVar6,0x1c);
      if (piVar7 != (int *)0x0) {
        *piVar7 = DAT_004a4a24;
        piVar7[1] = 2;
        iVar5 = 6;
        piVar7[3] = -1;
LAB_004a4740:
        piVar7[2] = iVar5;
      }
    }
    else {
LAB_004a47dc:
      piVar7 = (int *)0x0;
    }
  }
  else if (local_3c == 4) {
    piVar7 = (int *)(**(code **)*puVar6)(puVar6,0x14);
    if (piVar7 != (int *)0x0) {
      *piVar7 = DAT_004a4a30;
      piVar7[1] = 4;
      piVar7[2] = 2;
      piVar7[3] = -1;
    }
  }
  else {
    if (local_3c != 0x100000) goto LAB_004a47dc;
    piVar7 = (int *)(**(code **)*puVar6)(puVar6,0x20);
    if (piVar7 != (int *)0x0) {
      *piVar7 = DAT_004a4a28;
      piVar7[1] = 0x100000;
      iVar5 = 0x14;
      goto LAB_004a4740;
    }
  }
  if (piVar7 == (int *)0x0) {
    return 0x44;
  }
  if ((piVar7[2] != local_40) ||
     (iVar5 = (**(code **)(*piVar7 + 0xc))(piVar7,*param_3 + param_2), iVar5 == 0)) {
    (**(code **)*piVar7)(piVar7);
    (**(code **)(*(int *)param_1[6] + 4))((int *)param_1[6],piVar7);
    FUN_002bf00c(param_1);
    return 0x45;
  }
  iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7);
  if (iVar5 == 0) {
    local_4c = (char *)param_1[6];
    piVar8 = param_1 + 0x14;
    local_48 = piVar7;
    local_44 = (int *)(*(code *)**(undefined4 **)local_4c)(local_4c,4);
    if (local_44 != (int *)0x0) {
      *local_44 = 0;
    }
    *local_44 = *local_44 + 1;
    iVar5 = DAT_004a4e70;
    ppcVar17 = (char **)param_1[0x16];
    if (ppcVar17 == (char **)param_1[0x17]) {
      iVar11 = (int)((ulonglong)((longlong)DAT_004a4e70 * (longlong)(param_1[0x17] - param_1[0x15]))
                    >> 0x20);
      iVar12 = (int)ppcVar17 - param_1[0x15];
      iVar15 = (int)((ulonglong)((longlong)DAT_004a4e70 * (longlong)iVar12) >> 0x20);
      if ((uint)((iVar15 >> 1) - (iVar15 >> 0x1f)) < (uint)((iVar11 >> 1) - (iVar11 >> 0x1f))) {
        param_1[0x16] = (int)(ppcVar17 + 3);
        if (ppcVar17 != (char **)0x0) {
          *ppcVar17 = ppcVar17[-3];
          ppcVar17[1] = ppcVar17[-2];
          piVar7 = (int *)ppcVar17[-1];
          ppcVar17[2] = (char *)piVar7;
          *piVar7 = *piVar7 + 1;
        }
        ppcVar14 = ppcVar17;
        ppcVar19 = ppcVar17 + -3;
        while (ppcVar2 = ppcVar19, ppcVar1 = ppcVar14, ppcVar17 != ppcVar2) {
          ppcVar14 = ppcVar1 + -3;
          ppcVar19 = ppcVar2 + -3;
          if (ppcVar19 != ppcVar14) {
            iVar5 = *(int *)ppcVar1[-1] + -1;
            *(int *)ppcVar1[-1] = iVar5;
            if (iVar5 == 0) {
              if (ppcVar1[-2] != (char *)0x0) {
                (*(code *)**(undefined4 **)ppcVar1[-2])();
                (**(code **)(*(int *)*ppcVar14 + 4))(*ppcVar14,ppcVar1[-2]);
              }
              (**(code **)(*(int *)*ppcVar14 + 4))(*ppcVar14,ppcVar1[-1]);
            }
            ppcVar1[-2] = ppcVar2[-2];
            piVar7 = (int *)ppcVar2[-1];
            ppcVar1[-1] = (char *)piVar7;
            *piVar7 = *piVar7 + 1;
          }
        }
        if (&local_4c != ppcVar17) {
          FUN_002bd6ac(ppcVar17);
          ppcVar17[1] = (char *)local_48;
          ppcVar17[2] = (char *)local_44;
          *local_44 = *local_44 + 1;
        }
      }
      else {
        iVar11 = (int)((ulonglong)((longlong)DAT_004a4e70 * (longlong)iVar12) >> 0x20);
        uVar13 = (iVar11 >> 1) - (iVar11 >> 0x1f);
        uVar16 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (uVar16 < uVar13 + 0x20) {
          uVar16 = uVar13 + 0x20;
        }
        local_38 = uVar16 * 0xc;
        puVar6 = (undefined4 *)(*(code *)**(undefined4 **)*piVar8)();
        if (puVar6 == (undefined4 *)0x0) {
          (**(code **)(*(int *)*piVar8 + 8))
                    ((int *)*piVar8,s_MoLiveAllocator__not_enough_memo_004a5110,local_38);
        }
        puVar18 = puVar6;
        for (ppcVar14 = (char **)param_1[0x15]; ppcVar14 != ppcVar17; ppcVar14 = ppcVar14 + 3) {
          if (puVar18 != (undefined4 *)0x0) {
            *puVar18 = *ppcVar14;
            puVar18[1] = ppcVar14[1];
            piVar7 = (int *)ppcVar14[2];
            puVar18[2] = piVar7;
            *piVar7 = *piVar7 + 1;
          }
          puVar18 = puVar18 + 3;
        }
        iVar11 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)ppcVar17 - param_1[0x15])) >>
                      0x20);
        puVar18 = puVar6 + ((iVar11 >> 1) - (iVar11 >> 0x1f)) * 3;
        if (puVar18 != (undefined4 *)0x0) {
          *puVar18 = local_4c;
          puVar18[1] = local_48;
          puVar18[2] = local_44;
          *local_44 = *local_44 + 1;
        }
        ppcVar14 = (char **)param_1[0x16];
        iVar11 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)ppcVar17 - param_1[0x15])) >>
                      0x20);
        puVar18 = puVar6 + ((iVar11 >> 1) - (iVar11 >> 0x1f)) * 3;
        for (; ppcVar17 != ppcVar14; ppcVar17 = ppcVar17 + 3) {
          puVar20 = puVar18 + 3;
          if (puVar20 != (undefined4 *)0x0) {
            *puVar20 = *ppcVar17;
            puVar18[4] = ppcVar17[1];
            piVar7 = (int *)ppcVar17[2];
            puVar18[5] = piVar7;
            *piVar7 = *piVar7 + 1;
          }
          puVar18 = puVar20;
        }
        puVar18 = (undefined4 *)param_1[0x15];
        puVar20 = (undefined4 *)param_1[0x16];
        iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar20 - (int)puVar18)) >> 0x20
                     );
        for (; puVar18 != puVar20; puVar18 = puVar18 + 3) {
          iVar11 = *(int *)puVar18[2] + -1;
          *(int *)puVar18[2] = iVar11;
          if (iVar11 == 0) {
            if ((undefined4 *)puVar18[1] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)puVar18[1])();
              (**(code **)(*(int *)*puVar18 + 4))((int *)*puVar18,puVar18[1]);
            }
            (**(code **)(*(int *)*puVar18 + 4))((int *)*puVar18,puVar18[2]);
          }
        }
        (**(code **)(*(int *)*piVar8 + 4))((int *)*piVar8,param_1[0x15]);
        param_1[0x15] = (int)puVar6;
        param_1[0x16] = (int)(puVar6 + ((iVar5 >> 1) - (iVar5 >> 0x1f)) * 3 + 3);
        param_1[0x17] = (int)(puVar6 + uVar16 * 3);
      }
    }
    else {
      param_1[0x16] = (int)(ppcVar17 + 3);
      if (ppcVar17 != (char **)0x0) {
        *ppcVar17 = local_4c;
        ppcVar17[1] = (char *)local_48;
        ppcVar17[2] = (char *)local_44;
        *local_44 = *local_44 + 1;
      }
    }
    FUN_002bd6ac(&local_4c);
  }
  else {
    local_44 = (int *)param_1[0x11];
    piVar8 = local_44;
    piVar9 = (int *)local_44[1];
    while (piVar9 != (int *)0x0) {
      if ((uint)piVar9[4] < (uint)piVar7[3]) {
        piVar9 = (int *)piVar9[3];
      }
      else {
        piVar8 = piVar9;
        piVar9 = (int *)piVar9[2];
      }
    }
    if ((piVar8 != local_44) && ((uint)piVar8[4] <= (uint)piVar7[3])) {
      local_44 = piVar8;
    }
    if (local_44 == (int *)param_1[0x11]) {
      (**(code **)*param_1)(param_1,s_Creating_stream__d_004a4a34);
      piVar8 = (int *)(*(code *)**(undefined4 **)param_1[6])((undefined4 *)param_1[6],0x80);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        puVar6 = (undefined4 *)param_1[6];
        *piVar8 = (int)puVar6;
        piVar8[1] = (int)puVar6;
        piVar8[0xc] = 0;
        piVar8[7] = 0;
        piVar8[6] = 0;
        piVar8[8] = 0;
        piVar8[9] = 0;
        piVar8[2] = piVar8[6];
        piVar8[3] = piVar8[7];
        piVar8[4] = piVar8[8];
        piVar8[5] = piVar8[9];
        piVar8[10] = 0;
        piVar8[0xd] = (int)puVar6;
        piVar8[0xb] = 0;
        piVar8[0x18] = 0;
        piVar8[0x13] = 0;
        piVar8[0x12] = 0;
        piVar8[0x14] = 0;
        piVar8[0x15] = 0;
        piVar8[0xe] = piVar8[0x12];
        piVar8[0xf] = piVar8[0x13];
        piVar8[0x10] = piVar8[0x14];
        piVar8[0x11] = piVar8[0x15];
        piVar8[0x16] = 0;
        piVar8[0x17] = 0;
        piVar8[0x19] = (int)puVar6;
        piVar8[0x1a] = 0;
        piVar8[0x1b] = 0;
        piVar9 = (int *)(**(code **)*puVar6)(puVar6,4);
        if (piVar9 != (int *)0x0) {
          *piVar9 = 0;
        }
        piVar8[0x1b] = (int)piVar9;
        *piVar9 = *piVar9 + 1;
        piVar8[0x1c] = (int)puVar6;
        piVar8[0x1d] = (int)piVar7;
        piVar9 = (int *)(**(code **)*puVar6)(puVar6,4);
        if (piVar9 != (int *)0x0) {
          *piVar9 = 0;
        }
        piVar8[0x1e] = (int)piVar9;
        *piVar9 = *piVar9 + 1;
        *(undefined1 *)(piVar8 + 0x1f) = 1;
      }
      if (piVar8 == (int *)0x0) {
        (**(code **)*piVar7)(piVar7);
        (**(code **)(*(int *)param_1[6] + 4))((int *)param_1[6],piVar7);
        return 0x44;
      }
      local_78 = (undefined4 *)param_1[6];
      uVar16 = piVar7[3];
      local_74 = piVar8;
      local_70 = (int *)(**(code **)*local_78)(local_78,4);
      if (local_70 != (int *)0x0) {
        *local_70 = 0;
      }
      *local_70 = *local_70 + 1;
      local_68 = local_78;
      local_64 = local_74;
      *local_70 = *local_70 + 1;
      local_58 = local_78;
      local_54 = local_74;
      *local_70 = *local_70 + 1;
      pcVar10 = (char *)param_1[0x11];
      bVar21 = true;
      pcVar3 = pcVar10;
      pcVar4 = *(char **)(pcVar10 + 4);
      while (pcVar4 != (char *)0x0) {
        bVar21 = uVar16 < *(uint *)(pcVar4 + 0x10);
        pcVar3 = pcVar4;
        if (bVar21) {
          pcVar4 = *(char **)(pcVar4 + 8);
        }
        else {
          pcVar4 = *(char **)(pcVar4 + 0xc);
        }
      }
      local_6c = uVar16;
      local_60 = local_70;
      local_5c = uVar16;
      local_50 = local_70;
      if ((char)param_1[0x13] == '\0') {
        local_4c = pcVar3;
        if (bVar21) {
          if (pcVar3 == *(char **)(pcVar10 + 8)) goto LAB_004a4c84;
          if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
            local_4c = *(char **)(pcVar3 + 0xc);
          }
          else {
            pcVar4 = *(char **)(pcVar3 + 8);
            if (*(char **)(pcVar3 + 8) == (char *)0x0) {
              pcVar4 = *(char **)(pcVar3 + 4);
              pcVar10 = pcVar3;
              while (local_4c = pcVar4, pcVar10 == *(char **)(local_4c + 8)) {
                pcVar10 = local_4c;
                pcVar4 = *(char **)(local_4c + 4);
              }
            }
            else {
              do {
                local_4c = pcVar4;
                pcVar4 = *(char **)(local_4c + 0xc);
              } while (*(char **)(local_4c + 0xc) != (char *)0x0);
            }
          }
        }
        if (*(uint *)(local_4c + 0x10) < uVar16) goto LAB_004a4c84;
        local_48 = (int *)((uint)local_48 & 0xffffff00);
      }
      else {
LAB_004a4c84:
        FUN_004bb5f4(&local_7c,param_1 + 0xc,0,pcVar3,&local_5c);
        local_4c = local_7c;
        local_48 = (int *)CONCAT31(local_48._1_3_,1);
      }
      FUN_002bd70c(&local_58);
      FUN_002bd70c(&local_68);
      FUN_002bd70c(&local_78);
    }
    else {
      (**(code **)*param_1)(param_1,s_Stream__d_already_exists_004a4e24,piVar7[3]);
      iVar5 = (**(code **)(**(int **)(local_44[6] + 0x74) + 0x18))
                        (*(int **)(local_44[6] + 0x74),piVar7);
      (**(code **)*piVar7)(piVar7);
      (**(code **)(*(int *)param_1[6] + 4))((int *)param_1[6],piVar7);
      if (iVar5 == 0) {
        (**(code **)(*param_1 + 4))(param_1,s_Found_stream_index__d_with_diffe_004a4e40,piVar7[3]);
        return 0x200;
      }
      *(undefined1 *)(local_44[6] + 0x7c) = 1;
    }
  }
  uVar16 = *param_3;
  *param_3 = uVar16 + local_40;
  if (uVar16 + local_40 <= local_28) {
    return 0;
  }
LAB_004a50fc:
  FUN_002bf00c(param_1);
  return 0x43;
}
