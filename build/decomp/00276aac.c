// OoT3D decomp @ 00276aac  name=FUN_00276aac  size=880

void FUN_00276aac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;

  FUN_00372224(&local_58,param_1 + 0x148);
  uVar2 = DAT_00276e24;
  fVar6 = DAT_00276e20;
  fVar5 = DAT_00276e1c;
  if ((*(uint *)(param_1 + 4) & 0x80) == 0) {
    if (*(short *)(param_1 + 0x1c) == 1) {
      FUN_003713fc(DAT_00276e20,DAT_00276e20,DAT_00276e24,&local_58,1);
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar4 * fVar5,&local_58,1);
      uVar1 = DAT_00276e28;
      FUN_003713fc(fVar6,fVar6,DAT_00276e28,&local_58,1);
      if (*(int *)(param_1 + 0x1d4) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),&local_58);
        FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
      }
      local_58 = *(undefined4 *)(param_1 + 0x148);
      uStack_54 = *(undefined4 *)(param_1 + 0x14c);
      uStack_50 = *(undefined4 *)(param_1 + 0x150);
      uStack_4c = *(undefined4 *)(param_1 + 0x154);
      uStack_48 = *(undefined4 *)(param_1 + 0x158);
      local_44 = *(undefined4 *)(param_1 + 0x15c);
      uStack_40 = *(undefined4 *)(param_1 + 0x160);
      uStack_3c = *(undefined4 *)(param_1 + 0x164);
      uStack_38 = *(undefined4 *)(param_1 + 0x168);
      uStack_34 = *(undefined4 *)(param_1 + 0x16c);
      local_30 = *(undefined4 *)(param_1 + 0x170);
      uStack_2c = *(undefined4 *)(param_1 + 0x174);
      FUN_003713fc(fVar6,fVar6,uVar1,&local_58,1);
      fVar4 = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 0x1c4),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00369014(fVar4 * fVar5,&local_58,1);
      FUN_003713fc(fVar6,fVar6,uVar2,&local_58,1);
      if (*(int *)(param_1 + 0x1e0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x1e0),&local_58);
        FUN_00372170(*(undefined4 *)(param_1 + 0x1e0),0);
      }
    }
    else if (*(int *)(param_1 + 0x1cc) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),&local_58);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
    }
  }
  else if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),&local_58);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1dc),0);
  }
  if ((*(short *)(param_1 + 0x1c) == 3) && (0 < *(short *)(param_1 + 0x1c6))) {
    FUN_00372224(&local_88,param_1 + 0x148);
    FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_00276e2c,
                 *(undefined4 *)(param_1 + 0x30),&local_88,0);
    uVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00276e30 + param_2) * 4 + 0xa54));
    fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * fVar5;
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar4 == fVar6) << 0x1e;
    if (!SUB41(uVar3 >> 0x1e,0)) {
      fVar5 = (float)FUN_003727f0(fVar4);
      fVar6 = (float)FUN_00372674(fVar4);
      fVar4 = local_88 * fVar5;
      local_88 = local_88 * fVar6 - local_80 * fVar5;
      local_80 = fVar4 + local_80 * fVar6;
      fVar4 = local_78 * fVar5;
      local_78 = local_78 * fVar6 - local_70 * fVar5;
      local_70 = fVar4 + local_70 * fVar6;
      fVar4 = local_68 * fVar5;
      local_68 = local_68 * fVar6 - local_60 * fVar5;
      local_60 = fVar4 + local_60 * fVar6;
    }
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c6),(byte)(uVar3 >> 0x15) & 3);
    fVar5 = fVar5 * DAT_00276e34;
    local_88 = local_88 * fVar5;
    local_78 = local_78 * fVar5;
    local_68 = local_68 * fVar5;
    local_84 = local_84 * fVar5;
    local_74 = local_74 * fVar5;
    local_64 = local_64 * fVar5;
    local_80 = local_80 * fVar5;
    local_70 = local_70 * fVar5;
    local_60 = local_60 * fVar5;
    FUN_00373bec(*(undefined4 *)(param_1 + 0x1ec));
    *(undefined1 *)(*(int *)(param_1 + 0x1e4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1e4),&local_88);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1e4),0);
  }
  return;
}
