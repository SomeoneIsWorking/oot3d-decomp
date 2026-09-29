// OoT3D decomp @ 0020c1fc  name=FUN_0020c1fc  size=716

void FUN_0020c1fc(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  iVar3 = FUN_0037571c(param_2);
  fVar9 = DAT_0020c4d8;
  piVar1 = DAT_0020c4d4;
  if (((iVar3 == 0) ||
      (*(short **)(&DAT_000022dc + param_2 + *(short *)(DAT_0020c4c8 + param_1) * 4) == (short *)0x0
      )) || (**(short **)(&DAT_000022dc + param_2 + *(short *)(DAT_0020c4c8 + param_1) * 4) != 2)) {
    if (((*DAT_0020c4cc != 0xa0) || (*(int *)(DAT_0020c4dc + 0x4e8) != 4)) ||
       (fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0020c4d4 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3),
       (int)(uint)*(ushort *)(DAT_0020c4e4 + param_2) <= (int)(DAT_0020c4e0 / fVar7 + DAT_0020c4d8))
       ) {
      local_60 = DAT_0020c4ec;
      local_5c = DAT_0020c4e8;
      FUN_0037547c(DAT_0020c4d0,param_1 + 0x28,4,DAT_0020c4ec);
    }
    iVar3 = 0;
    do {
      FUN_00373bec(*(undefined4 *)(param_1 + iVar3 * 4 + 0x2c0));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *(undefined1 *)(*(int *)(param_1 + 0x2ac) + 0xac) = 1;
    if (*(byte *)(param_1 + 0x28c) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x2ac);
      puVar5 = (undefined4 *)(param_1 + 0x148);
    }
    else {
      local_54 = *(undefined4 *)(param_1 + 0x148);
      uStack_50 = *(undefined4 *)(param_1 + 0x14c);
      uStack_4c = *(undefined4 *)(param_1 + 0x150);
      uStack_48 = *(undefined4 *)(param_1 + 0x154);
      uStack_44 = *(undefined4 *)(param_1 + 0x158);
      uStack_40 = *(undefined4 *)(param_1 + 0x15c);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x28c),(byte)(in_fpscr >> 0x15) & 3);
      local_3c = *(undefined4 *)(param_1 + 0x160);
      local_38 = *(undefined4 *)(param_1 + 0x164);
      uStack_34 = *(undefined4 *)(param_1 + 0x168);
      uStack_30 = *(undefined4 *)(param_1 + 0x16c);
      uStack_2c = *(undefined4 *)(param_1 + 0x170);
      uStack_28 = *(undefined4 *)(param_1 + 0x174);
      fVar6 = DAT_0020c4f0 * fVar7 * DAT_0020c4f4 + DAT_0020c4f8;
      FUN_00371348(fVar6,fVar6,fVar9 * fVar7 * DAT_0020c4f4 + DAT_0020c4f8,&local_54,1);
      uVar4 = *(undefined4 *)(param_1 + 0x2ac);
      puVar5 = &local_54;
    }
    FUN_003721e0(uVar4,puVar5);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2ac),0);
    local_58 = DAT_0020c504;
    local_54 = *(undefined4 *)(param_1 + 0x148);
    uStack_50 = *(undefined4 *)(param_1 + 0x14c);
    uStack_4c = *(undefined4 *)(param_1 + 0x150);
    uStack_48 = *(undefined4 *)(param_1 + 0x154);
    uStack_44 = *(undefined4 *)(param_1 + 0x158);
    uStack_40 = *(undefined4 *)(param_1 + 0x15c);
    local_3c = *(undefined4 *)(param_1 + 0x160);
    local_38 = *(undefined4 *)(param_1 + 0x164);
    uStack_34 = *(undefined4 *)(param_1 + 0x168);
    uStack_30 = *(undefined4 *)(param_1 + 0x16c);
    uStack_2c = *(undefined4 *)(param_1 + 0x170);
    uStack_28 = *(undefined4 *)(param_1 + 0x174);
    bVar2 = *(char *)(param_1 + 0x28b) + 1;
    *(byte *)(param_1 + 0x28b) = bVar2;
    fVar7 = DAT_0020c500;
    iVar3 = *piVar1;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_0020c4fc / fVar6 + fVar9) < (int)(uint)bVar2) {
      *(undefined1 *)(param_1 + 0x28b) = 0;
    }
    if (*(byte *)(param_1 + 0x28b) == 0) {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      fVar9 = local_58 * fVar6 * fVar7 - fVar9;
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x28b),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      fVar9 = fVar9 + fVar6 * fVar8 * fVar7;
    }
    fVar9 = (float)VectorSignedToFloat((int)fVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar9 * DAT_0020c508 * DAT_0020c50c,&local_54,1);
    FUN_00369014(DAT_0020c510,&local_54,1);
    local_60 = local_58;
    local_5c = DAT_0020c514;
    FUN_00372070(&local_54,&local_54,&local_60);
    FUN_00371348(DAT_0020c518,DAT_0020c518,DAT_0020c518,&local_54,1);
    *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),&local_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2a8),0);
  }
  return;
}
