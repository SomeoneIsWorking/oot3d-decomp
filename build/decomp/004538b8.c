// OoT3D decomp @ 004538b8  name=FUN_004538b8  size=592

longlong FUN_004538b8(void)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 extraout_r2;
  uint uVar12;
  undefined4 extraout_r3;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  int local_48;
  int iStack_44;
  int local_40 [2];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];

  puVar3 = (uint *)FUN_002dce5c(auStack_30,2000,1,1,0,0,0,0);
  uVar8 = DAT_00453b0c;
  lVar2 = (ulonglong)(*puVar3 - *DAT_00453b08) * (ulonglong)DAT_00453b0c;
  lVar23 = FUN_00332754((int)lVar2,
                        DAT_00453b0c *
                        (puVar3[1] - (DAT_00453b08[1] + (uint)(*puVar3 < *DAT_00453b08))) +
                        (int)((ulonglong)lVar2 >> 0x20),DAT_00453b0c,0);
  puVar3 = (uint *)FUN_002dce5c(auStack_30,DAT_00453b10,1,1,0,0,0,0);
  puVar4 = (uint *)FUN_002dce5c(auStack_38,2000,1,1,0,0,0,0);
  lVar2 = (ulonglong)(*puVar3 - *puVar4) * (ulonglong)uVar8;
  uVar24 = FUN_00332754((int)lVar2,
                        uVar8 * (puVar3[1] - (puVar4[1] + (uint)(*puVar3 < *puVar4))) +
                        (int)((ulonglong)lVar2 >> 0x20),uVar8,0);
  uVar8 = DAT_00453b1c;
  iVar10 = (int)((ulonglong)uVar24 >> 0x20);
  uVar5 = (uint)uVar24;
  software_interrupt(0x28);
  puVar3 = (uint *)(DAT_00453b18 + (*DAT_00453b14 & 1) * 0x20);
  uVar12 = *puVar3;
  uVar22 = puVar3[1];
  uVar17 = puVar3[6];
  uVar18 = puVar3[7];
  coproc_moveto_Data_Memory_Barrier(0);
  uVar15 = uVar5 - puVar3[2];
  uVar13 = iVar10 - (puVar3[3] + (uint)(uVar5 < puVar3[2]));
  uVar25 = FUN_00332754(0,1000,puVar3[4],(int)puVar3[4] >> 0x1f);
  uVar9 = (uint)(uVar25 >> 0x20);
  uVar19 = (uint)((uVar25 & 0xffffffff) * (ulonglong)uVar15 >> 0x20);
  uVar11 = (uint)((ulonglong)uVar15 * (ulonglong)uVar9);
  local_40[0] = 0;
  lVar2 = (uVar25 & 0xffffffff) * (ulonglong)uVar13;
  uVar16 = (uint)lVar2;
  uVar6 = uVar16 + uVar11;
  uVar7 = uVar6 + uVar19;
  uVar20 = uVar7 + uVar12;
  iVar21 = ((int)uVar13 >> 0x1f) * (int)uVar25 + (int)((ulonglong)lVar2 >> 0x20) +
           ((int)uVar9 >> 0x1f) * uVar15 + (int)((ulonglong)uVar15 * (ulonglong)uVar9 >> 0x20) +
           (uint)CARRY4(uVar16,uVar11) + uVar13 * uVar9 + (uint)CARRY4(uVar6,uVar19) + uVar22 +
           (uint)CARRY4(uVar7,uVar12);
  local_48 = uVar8 - (uVar20 - uVar12);
  iVar1 = (iVar21 - (uVar22 + (uVar20 < uVar12))) + (uint)(uVar8 < uVar20 - uVar12);
  iStack_44 = -iVar1;
  piVar14 = local_40;
  if ((int)-(iStack_44 + (uint)(local_48 != 0)) < 0 !=
      (SBORROW4(0,iStack_44) != SBORROW4(iVar1,(uint)(local_48 != 0)))) {
    piVar14 = &local_48;
  }
  local_40[1] = 0;
  uVar25 = FUN_00332754(0,*piVar14,uVar8,0);
  uVar11 = (uint)(uVar25 >> 0x20);
  uVar13 = (uint)((uVar25 & 0xffffffff) * (ulonglong)uVar17 >> 0x20);
  uVar12 = (uint)((ulonglong)uVar17 * (ulonglong)uVar11);
  lVar2 = (uVar25 & 0xffffffff) * (ulonglong)uVar18;
  uVar8 = (uint)lVar2;
  uVar6 = uVar8 + uVar12;
  uVar7 = uVar6 + uVar13;
  uVar9 = uVar7 + uVar20;
  FUN_00332754(uVar9 - (uint)lVar23,
               (((int)uVar18 >> 0x1f) * (int)uVar25 + (int)((ulonglong)lVar2 >> 0x20) +
                ((int)uVar11 >> 0x1f) * uVar17 +
                (int)((ulonglong)uVar17 * (ulonglong)uVar11 >> 0x20) + (uint)CARRY4(uVar8,uVar12) +
                uVar18 * uVar11 + (uint)CARRY4(uVar6,uVar13) + iVar21 + (uint)CARRY4(uVar7,uVar20))
               - ((int)((ulonglong)lVar23 >> 0x20) + (uint)(uVar9 < (uint)lVar23)),uVar5,iVar10);
  return lVar23 + CONCAT44(extraout_r3,extraout_r2);
}
