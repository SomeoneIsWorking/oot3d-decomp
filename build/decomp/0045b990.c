// OoT3D decomp @ 0045b990  name=FUN_0045b990  size=2660

void FUN_0045b990(int param_1,int param_2)

{
  short sVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 unaff_s16;
  undefined8 uVar16;
  int local_84 [6];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  undefined1 auStack_42 [2];
  int iStack_40;
  int local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;

  puVar2 = DAT_0045bee4;
  if (DAT_0045bee4[1] == 0) {
    iVar9 = (int)(short)DAT_0045bee4[0x4d9];
    local_48 = *DAT_0045bee8;
    local_44 = DAT_0045bee8[1];
    iStack_40 = DAT_0045bee8[2];
    local_3c = DAT_0045bee8[3];
    local_38 = DAT_0045bee8[4];
    local_34 = (float)DAT_0045bee8[5];
    iVar5 = 0;
    do {
      iVar7 = (&local_48)[iVar5];
      bVar12 = iVar7 == iVar9;
      if (!bVar12) {
        iVar7 = *(int *)((int)&stack0xffffffbc + iVar5 * 4);
      }
      if (bVar12 || iVar7 == iVar9) goto LAB_0045ba20;
      iVar5 = iVar5 + 2;
    } while (iVar5 < 6);
    *(undefined2 *)(DAT_0045bee4 + 0x4d9) = 0x51;
    *(short *)((int)puVar2 + 0x1366) = (short)DAT_0045beec;
    *(undefined2 *)(puVar2 + 0x4da) = 0x48;
    *(short *)((int)puVar2 + 0x136a) = (short)DAT_0045bef0;
    *(short *)(puVar2 + 0x4db) = (short)DAT_0045bef4;
LAB_0045ba20:
    piVar3 = DAT_0045bf00;
    iVar5 = DAT_0045befc;
    iVar7 = (int)*(short *)(param_1 + 0x104);
    iVar9 = 0;
    local_48 = *DAT_0045bee8;
    local_44 = DAT_0045bee8[1];
    iStack_40 = DAT_0045bee8[2];
    local_3c = DAT_0045bee8[3];
    local_38 = DAT_0045bee8[4];
    local_34 = (float)DAT_0045bee8[5];
    do {
      if (((&local_48)[iVar9] == iVar7) || (*(int *)((int)&stack0xffffffbc + iVar9 * 4) == iVar7)) {
        if (*(int *)(DAT_0045bef8 + 0x4e8) < 4) {
          uVar6 = *puVar2;
          bVar12 = uVar6 == 0x28a || uVar6 == 0x28e;
          if (uVar6 != 0x28a && uVar6 != 0x28e) {
            bVar12 = uVar6 == 0x292;
          }
          if (!bVar12) {
            bVar12 = uVar6 == 0x476;
          }
          if ((!bVar12) || (uVar6 = *(uint *)(DAT_0045bef8 + 0x4ec), uVar6 != 0)) {
            if (iVar7 == 99) {
              uVar6 = *(ushort *)(DAT_0045befc + 0x8a) & 0xf;
            }
            if (((iVar7 != 99 || uVar6 != 6) || (iVar9 = FUN_00350cf4(0x18), iVar9 != 0)) ||
               (*(short *)(*piVar3 + 0x556) != 0)) {
              local_6c = *DAT_0045bf04;
              local_68 = DAT_0045bf04[1];
              local_64 = DAT_0045bf04[2];
              uStack_60 = DAT_0045bf04[3];
              uStack_5c = DAT_0045bf04[4];
              local_58 = DAT_0045bf04[5];
              uStack_54 = DAT_0045bf04[6];
              iStack_50 = DAT_0045bf04[7];
              uStack_4c = DAT_0045bf04[8];
              local_48 = DAT_0045bf04[9];
              local_44 = DAT_0045bf04[10];
              iStack_40 = DAT_0045bf04[0xb];
              local_3c = DAT_0045bf04[0xc];
              local_38 = DAT_0045bf04[0xd];
              local_34 = (float)DAT_0045bf04[0xe];
              uVar6 = param_1 + 0x208c;
              local_30 = (float)uVar6;
              if (*(short *)(*piVar3 + 0xe60) != 0) {
                uVar16 = FUN_00350cf4(0x18);
                uVar6 = (uint)((ulonglong)uVar16 >> 0x20);
                if (((int)uVar16 != 0) || (*(short *)(*piVar3 + 0x556) != 0)) {
                  local_84[0] = (int)*(short *)(param_2 + 0xc0);
                  local_84[1] = 9;
                  local_84[2] = 1;
                  uVar13 = z_actor_003738d0(*(undefined4 *)(param_2 + 0x28),
                                            *(undefined4 *)(param_2 + 0x2c),
                                            *(undefined4 *)(param_2 + 0x30),local_30,param_1,0x14,
                                            (int)*(short *)(param_2 + 0xbc),
                                            (int)*(short *)(param_2 + 0xbe));
                  *(undefined4 *)(param_2 + 0x12b8) = uVar13;
                  FUN_003513e0(param_1,param_2,uVar13);
                  FUN_002d7930(param_1,param_2);
                  *(undefined2 *)(puVar2 + 0x4d9) = *(undefined2 *)(param_1 + 0x104);
                  if (*(short *)(param_1 + 0x104) != 0x5d) {
                    return;
                  }
                  iVar5 = *(int *)(param_2 + 0x12b8);
                  goto LAB_0045bc40;
                }
              }
              uVar13 = DAT_0045bf14;
              sVar1 = *(short *)(param_1 + 0x104);
              if (sVar1 == 0x5d) {
                uVar6 = (uint)*(ushort *)(iVar5 + 0x94);
              }
              if (sVar1 == 0x5d && uVar6 == 3) {
                *(undefined2 *)(iVar5 + 0x94) = 0;
                local_84[0] = 0;
                local_84[1] = 1;
                local_84[2] = 1;
                iVar5 = z_actor_003738d0(DAT_0045bf10,DAT_0045bf0c,DAT_0045bf08,local_30,param_1,
                                         0x14,0,0x4000);
              }
              else {
                if ((*puVar2 == 0x4ce) && ((*(ushort *)(DAT_0045bf18 + 0xee) & 0x100) != 0)) {
                  local_84[0] = 0;
                  local_84[1] = 1;
                  local_84[2] = 1;
                  z_actor_003738d0(DAT_0045bf20,DAT_0045bf14,DAT_0045bf1c,local_30,param_1,0x14,0,
                                   0xffffc000);
                  return;
                }
                if ((sVar1 == (short)puVar2[0x4d9]) &&
                   ((iVar5 = FUN_00350cf4(0x18), iVar5 != 0 || (*(short *)(*piVar3 + 0x556) != 0))))
                {
                  iVar9 = (int)(short)puVar2[0x4d9];
                  iVar5 = 0;
                  local_84[0] = *DAT_0045bee8;
                  local_84[1] = DAT_0045bee8[1];
                  local_84[2] = DAT_0045bee8[2];
                  local_84[3] = DAT_0045bee8[3];
                  local_84[4] = DAT_0045bee8[4];
                  local_84[5] = DAT_0045bee8[5];
                  while( true ) {
                    iVar7 = local_84[iVar5];
                    bVar12 = iVar7 == iVar9;
                    if (!bVar12) {
                      iVar7 = local_84[iVar5 + 1];
                    }
                    if (bVar12 || iVar7 == iVar9) break;
                    iVar5 = iVar5 + 2;
                    if (5 < iVar5) {
                      *(undefined2 *)(puVar2 + 0x4d9) = 0x51;
                      *(short *)((int)puVar2 + 0x1366) = (short)DAT_0045beec;
                      *(undefined2 *)(puVar2 + 0x4da) = 0x48;
                      *(short *)((int)puVar2 + 0x136a) = (short)DAT_0045bef0;
                      *(short *)(puVar2 + 0x4db) = (short)DAT_0045bef4;
                      return;
                    }
                  }
                  local_84[0] = 0;
                  local_84[1] = 1;
                  local_84[2] = 1;
                  uVar15 = VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x136a),
                                               (byte)(in_fpscr >> 0x15) & 3);
                  uVar14 = VectorSignedToFloat((int)(short)puVar2[0x4da],
                                               (byte)(in_fpscr >> 0x15) & 3);
                  uVar13 = VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x1366),
                                               (byte)(in_fpscr >> 0x15) & 3);
                  iVar5 = z_actor_003738d0(uVar13,uVar14,uVar15,local_30,param_1,0x14,0,
                                           (int)(short)puVar2[0x4db]);
                  if (*(short *)(param_1 + 0x104) != 0x5d) {
                    return;
                  }
                }
                else {
                  if ((*(short *)(param_1 + 0x104) == 99) &&
                     ((iVar5 = FUN_00350cf4(0x18), iVar5 == 0 && (*(short *)(*piVar3 + 0x556) == 0))
                     )) {
                    local_84[0] = 0;
                    local_84[1] = 1;
                    local_84[2] = 1;
                    z_actor_003738d0(uVar13,uVar13,DAT_0045bf24,local_30,param_1,0x14,0,0);
                    return;
                  }
                  iVar5 = FUN_00350cf4(0x18);
                  if ((iVar5 == 0) && (*(short *)(*piVar3 + 0x556) == 0)) {
                    iVar5 = FUN_00350cf4(0x18);
                    if (iVar5 != 0) {
                      return;
                    }
                    sVar1 = *(short *)(*piVar3 + 0x556);
                    bVar12 = sVar1 == 0;
                    if (bVar12) {
                      sVar1 = *(short *)(param_1 + 0x104);
                    }
                    if (!bVar12 || sVar1 != 0x4c) {
                      return;
                    }
                    if (puVar2[4] == 0) {
                      return;
                    }
                    local_84[0] = 0;
                    local_84[1] = 1;
                    local_84[2] = 1;
                    z_actor_003738d0(uVar13,uVar13,DAT_0045bfc0,local_30,param_1,0x14,0,DAT_0045bfbc
                                    );
                    return;
                  }
                  iVar5 = 0;
                  while (*(short *)(param_1 + 0x104) != *(short *)(&local_6c + iVar5 * 3)) {
                    iVar5 = iVar5 + 1;
                    if (4 < iVar5) {
                      return;
                    }
                  }
                  iVar9 = iVar5 * 0xc;
                  local_84[0] = 0;
                  local_84[1] = (int)*(short *)((int)&local_64 + iVar9 + 2);
                  local_84[2] = 1;
                  uVar15 = VectorSignedToFloat((int)*(short *)((int)&local_68 + iVar9 + 2),
                                               (byte)(in_fpscr >> 0x15) & 3);
                  uVar14 = VectorSignedToFloat((int)*(short *)(&local_68 + iVar5 * 3),
                                               (byte)(in_fpscr >> 0x15) & 3);
                  uVar13 = VectorSignedToFloat((int)*(short *)((int)&local_6c + iVar9 + 2),
                                               (byte)(in_fpscr >> 0x15) & 3);
                  iVar5 = z_actor_003738d0(uVar13,uVar14,uVar15,local_30,param_1,0x14,0,
                                           (int)*(short *)(&local_64 + iVar5 * 3));
                  if (*(short *)(param_1 + 0x104) != 0x5d) {
                    return;
                  }
                }
              }
LAB_0045bc40:
              *(undefined1 *)(iVar5 + 3) = 0xff;
              return;
            }
          }
        }
        iVar5 = DAT_00471564;
        piVar3 = DAT_00471554;
        iVar9 = param_1 + 0x208c;
        iVar7 = *DAT_00471554;
        iVar11 = DAT_00471558 + 4;
        uVar16 = CONCAT44(iVar9,unaff_s16);
        bVar12 = iVar7 == DAT_00471558 || iVar7 == iVar11;
        if (iVar7 != DAT_00471558 && iVar7 != iVar11) {
          bVar12 = iVar7 == 0x292;
        }
        if (!bVar12) {
          bVar12 = iVar7 == 0x476;
        }
        if ((!bVar12) || (*(int *)(DAT_0047155c + 0x4ec) != 0)) {
          uVar4 = *(ushort *)(param_1 + 0x104);
          bVar12 = uVar4 == 99;
          if (bVar12) {
            uVar4 = *(ushort *)(DAT_00471564 + 0x8a) & 0xf;
          }
          if (((bVar12 && uVar4 == 6) && (iVar7 = FUN_00350cf4(0x18), iVar7 == 0)) &&
             (*(short *)(*DAT_00471568 + 0x556) == 0)) {
            local_58 = 0xffff8001;
            uStack_54 = 0;
            iStack_50 = 5;
            uStack_4c = 1;
            uVar13 = z_actor_003738d0(DAT_00471574,DAT_00471570,DAT_0047156c,iVar9,param_1,0x14,0);
            *(undefined4 *)(param_2 + 0x12b8) = uVar13;
            FUN_003513e0(param_1,param_2,uVar13);
            FUN_002d7930(param_1,param_2);
            *(undefined2 *)(piVar3 + 0x4d9) = *(undefined2 *)(param_1 + 0x104);
            if (*(short *)(param_1 + 0x104) == 0x5d) {
              *(undefined1 *)(*(int *)(param_2 + 0x12b8) + 3) = 0xff;
            }
            return;
          }
          iVar7 = (int)*(short *)(param_1 + 0x104);
          uVar6 = 0;
          while( true ) {
            psVar10 = (short *)(DAT_00471578 + uVar6 * 0x14);
            iVar11 = (int)*psVar10;
            bVar12 = iVar7 == iVar11;
            if (bVar12) {
              iVar11 = *(int *)(psVar10 + 2);
            }
            if (bVar12 && piVar3[2] == iVar11) break;
            uVar6 = uVar6 + 1;
            if (8 < uVar6) {
              return;
            }
          }
          iVar11 = DAT_00471578 + uVar6 * 0x14;
          iStack_50 = (int)(short)*(ushort *)(iVar11 + 0x10);
          if (iStack_50 == 7) {
            if (iVar7 == 99) {
              iVar11 = piVar3[2] + -0xff00;
            }
            if (iVar7 == 99 && iVar11 == 0xf1) {
              psVar10[4] = (short)(int)*(float *)(param_2 + 0x28);
              psVar10[5] = (short)(int)*(float *)(param_2 + 0x2c);
              psVar10[6] = (short)(int)*(float *)(param_2 + 0x30);
            }
            local_58 = (int)*(short *)(param_2 + 0x36);
            uStack_54 = 0;
            uStack_4c = 1;
            uVar15 = VectorSignedToFloat((int)psVar10[6],(byte)(in_fpscr >> 0x15) & 3);
            uVar14 = VectorSignedToFloat((int)psVar10[5],(byte)(in_fpscr >> 0x15) & 3);
            uVar13 = VectorSignedToFloat((int)psVar10[4],(byte)(in_fpscr >> 0x15) & 3);
            uVar13 = z_actor_003738d0(uVar13,uVar14,uVar15,iVar9,param_1,0x14,0);
            *(undefined4 *)(DAT_0047157c + param_2) = uVar13;
            FUN_003513e0(param_1,param_2,uVar13);
            FUN_002d7930(param_1,param_2);
            return;
          }
          if ((iStack_50 == 5 || iStack_50 == 6) || iStack_50 == 8) {
            uVar4 = 0;
            if (((*(ushort *)(iVar5 + 0x8a) & 0x10) != 0) && (iStack_50 == 6)) {
              uVar4 = 0x8000;
            }
            iStack_50 = (int)(short)(uVar4 | *(ushort *)(iVar11 + 0x10));
            local_58 = (int)psVar10[7];
            uStack_54 = 0;
            uStack_4c = 1;
            uVar15 = VectorSignedToFloat((int)psVar10[6],(byte)(in_fpscr >> 0x15) & 3);
            uVar14 = VectorSignedToFloat((int)psVar10[5],(byte)(in_fpscr >> 0x15) & 3);
            uVar13 = VectorSignedToFloat((int)psVar10[4],(byte)(in_fpscr >> 0x15) & 3);
            uVar13 = z_actor_003738d0(uVar13,uVar14,uVar15,iVar9,param_1,0x14,0);
            *(undefined4 *)(param_2 + 0x12b8) = uVar13;
            uVar13 = VectorSignedToFloat((int)psVar10[4],(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_2 + 0x28) = uVar13;
            uVar13 = VectorSignedToFloat((int)psVar10[5],(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_2 + 0x2c) = uVar13;
            uVar13 = VectorSignedToFloat((int)psVar10[6],(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_2 + 0x30) = uVar13;
            *(undefined2 *)(param_2 + 0xc0) = 0;
            *(undefined2 *)(param_2 + 0xbc) = 0;
            *(short *)(param_2 + 0xbe) = psVar10[7];
            FUN_003513e0(param_1,param_2,*(undefined4 *)(param_2 + 0x12b8));
            FUN_002d7930(param_1,param_2);
            local_34 = *(float *)(param_2 + 0x28) - DAT_00471580;
            local_30 = *(float *)(param_2 + 0x2c) + DAT_00471584;
            FUN_00367b14(param_1,(int)*(short *)(DAT_00471588 + param_1),param_2 + 0x28,&local_34);
            return;
          }
          local_58 = (int)psVar10[7];
          uStack_54 = 0;
          uStack_4c = 1;
          uVar15 = VectorSignedToFloat((int)psVar10[6],(byte)(in_fpscr >> 0x15) & 3);
          uVar14 = VectorSignedToFloat((int)psVar10[5],(byte)(in_fpscr >> 0x15) & 3);
          uVar13 = VectorSignedToFloat((int)psVar10[4],(byte)(in_fpscr >> 0x15) & 3);
          z_actor_003738d0(uVar13,uVar14,uVar15,iVar9,param_1,0x14,0);
          return;
        }
        local_48 = *DAT_00471560;
        local_44 = DAT_00471560[1];
        iStack_40 = DAT_00471560[2];
        local_3c = DAT_00471560[3];
        local_38 = DAT_00471560[4];
        local_34 = (float)DAT_00471560[5];
        if (iVar7 == DAT_00471558) {
          uVar16 = CONCAT44(iVar9,local_44);
          local_30 = (float)local_48;
        }
        else {
          if (iVar7 == iVar11) {
            puVar8 = auStack_42;
          }
          else {
            if (iVar7 == 0x292) {
              uVar16 = CONCAT44(iVar9,local_38);
              local_30 = (float)local_3c;
              goto LAB_004711ac;
            }
            puVar8 = (undefined1 *)((int)&local_38 + 2);
          }
          FUN_0035fb94(&local_30,puVar8);
        }
LAB_004711ac:
        local_58 = (int)*(short *)(param_2 + 0x36);
        uStack_54 = 0;
        iStack_50 = 7;
        uStack_4c = 1;
        uVar15 = VectorSignedToFloat((int)(short)uVar16,(byte)(in_fpscr >> 0x15) & 3);
        uVar14 = VectorSignedToFloat((int)local_30._2_2_,(byte)(in_fpscr >> 0x15) & 3);
        uVar13 = VectorSignedToFloat((int)(short)local_30,(byte)(in_fpscr >> 0x15) & 3);
        uVar13 = z_actor_003738d0(uVar13,uVar14,uVar15,(int)((ulonglong)uVar16 >> 0x20),param_1,0x14
                                  ,0);
        *(undefined4 *)(param_2 + 0x12b8) = uVar13;
        FUN_003513e0(param_1,param_2,uVar13);
        FUN_002d7930(param_1,param_2);
        *(undefined2 *)(piVar3 + 0x4d9) = *(undefined2 *)(param_1 + 0x104);
        return;
      }
      iVar9 = iVar9 + 2;
    } while (iVar9 < 6);
  }
  return;
}
