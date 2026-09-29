// OoT3D decomp @ 0044281c  name=FUN_0044281c  size=564

void FUN_0044281c(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint in_fpscr;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [40];
  undefined1 auStack_9c [40];
  undefined1 auStack_74 [40];

  FUN_00371738(auStack_c4,DAT_00442a50,0x78);
  iVar14 = DAT_00442a84;
  uVar13 = DAT_00442a80;
  uVar12 = DAT_00442a7c;
  uVar11 = DAT_00442a78;
  uVar10 = DAT_00442a74;
  uVar9 = DAT_00442a70;
  uVar8 = DAT_00442a6c;
  uVar7 = DAT_00442a68;
  uVar6 = DAT_00442a64;
  uVar5 = DAT_00442a60;
  uVar4 = DAT_00442a5c;
  iVar3 = DAT_00442a54;
  local_cc = 0;
  uStack_c8 = 0;
  iVar15 = 0;
  iVar17 = DAT_00442a58 + (uint)*(ushort *)(DAT_00442a54 + 0x92) * 8;
  iVar16 = 3;
  iVar18 = DAT_00442a54 + (uint)*(ushort *)(DAT_00442a54 + 0x92);
  do {
    bVar2 = *(byte *)(iVar17 + iVar16);
    if (((*(uint *)(DAT_00442a88 + (uint)*(ushort *)(iVar3 + 0x92) * 0x1c + 0x104) &
         *(uint *)(DAT_00442a8c + iVar16 * 4)) == 0) &&
       ((*(uint *)(DAT_00442a8c + 8) & (uint)*(byte *)(iVar18 + -0x1440)) == 0 || bVar2 == 0)) {
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),&local_cc,&local_cc,1,iVar15 + 0x15);
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),&local_cc,&local_cc,1,iVar15 + 0x1a);
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),&local_cc,&local_cc,1,iVar15 + 0x1f);
      *(undefined4 *)(DAT_00442a90 + iVar15 * 4) = 0;
    }
    else {
      local_d4 = uVar4;
      local_d0 = uVar5;
      local_dc = uVar6;
      local_d8 = uVar7;
      iVar1 = iVar15 * 8;
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),auStack_c4 + iVar1,&local_d4,1,iVar15 + 0x15);
      FUN_002fc40c(*(undefined4 *)(iVar14 + 0x14),&local_dc,&local_d4,1,iVar15 + 0x15);
      local_d4 = uVar8;
      local_d0 = uVar7;
      local_dc = uVar9;
      local_d8 = uVar10;
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),auStack_9c + iVar1,&local_d4,1,iVar15 + 0x1a);
      FUN_002fc40c(*(undefined4 *)(iVar14 + 0x14),&local_dc,&local_d4,1,iVar15 + 0x1a);
      local_d4 = uVar11;
      local_d0 = uVar12;
      local_dc = uVar13;
      local_d8 = VectorSignedToFloat((short)(bVar2 - 4) * 0x16,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002fc534(*(undefined4 *)(iVar14 + 0x14),auStack_74 + iVar1,&local_d4,1,iVar15 + 0x1f);
      FUN_002fc40c(*(undefined4 *)(iVar14 + 0x14),&local_dc,&local_d4,1,iVar15 + 0x1f);
      *(undefined4 *)(DAT_00442a90 + iVar15 * 4) = 1;
    }
    iVar16 = iVar16 + 1;
    iVar15 = iVar15 + 1;
  } while (iVar16 < 8);
  return;
}
