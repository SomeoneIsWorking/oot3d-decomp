// OoT3D decomp @ 003255f0  name=FUN_003255f0  size=1700

undefined4 FUN_003255f0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 auStack_c8 [36];
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 auStack_98 [36];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [36];
  float local_44;
  float local_40;
  float local_3c;

  iVar4 = FUN_003695f8();
  if (iVar4 != 0) {
    uVar5 = FUN_003478bc(*(undefined4 *)(param_4 + 0x27c),param_2);
    FUN_00372224(DAT_00325a0c,uVar5);
  }
  fVar8 = DAT_00325a3c;
  pfVar3 = DAT_00325a38;
  iVar4 = DAT_00325a24;
  fVar7 = DAT_00325a20;
  fVar2 = DAT_00325a18;
  fVar1 = DAT_00325a14;
  fVar6 = DAT_00325a10;
  if (param_2 == 1) {
    if (*(int *)(DAT_00325a1c + 4) != 0) {
      if (((*(byte *)(param_4 + 0x2a6) & 4) == 0) || ((*(byte *)(param_4 + 0x2a6) & 1) != 0)) {
        *(float *)(param_3 + 0xc) = *(float *)(param_3 + 0xc) * DAT_00325a20;
        *(float *)(param_3 + 0x2c) = *(float *)(param_3 + 0x2c) * fVar7;
      }
      if (((*(byte *)(param_4 + 0x2a6) & 4) == 0) || ((*(byte *)(param_4 + 0x2a6) & 2) != 0)) {
        *(float *)(param_3 + 0x1c) = *(float *)(param_3 + 0x1c) * fVar7;
      }
    }
    *(float *)(param_3 + 0x1c) = *(float *)(param_3 + 0x1c) - *(float *)(param_4 + 0x1760);
    if (*(short *)(param_4 + 0x175c) != 0) {
      local_44 = fVar6;
      local_40 = fVar1;
      local_3c = fVar1;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x175c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003625f8(fVar6 * fVar2,auStack_74,&local_44);
      FUN_0036c174(param_3,param_3,auStack_74);
    }
  }
  else if (param_2 == 0xb) {
    if ((*(ushort *)(param_4 + 0x174a) & 0x200) == 0) {
      *(float *)(DAT_00325a24 + 0x10) = DAT_00325a14;
    }
    else {
      local_d4 = DAT_00325a14;
      local_d0 = DAT_00325a14;
      local_cc = DAT_00325a10;
      FUN_003625f8(DAT_00325a28,&uStack_104,&local_d4);
      fVar7 = *(float *)(iVar4 + 0x10) + DAT_00325a2c;
      *(float *)(iVar4 + 0x10) = fVar7;
      if (0x3f800000 < (int)fVar7) {
        *(float *)(iVar4 + 0x10) = fVar6;
      }
      local_f8 = *(undefined4 *)(param_3 + 0xc);
      local_e8 = *(undefined4 *)(param_3 + 0x1c);
      local_d8 = *(undefined4 *)(param_3 + 0x2c);
      FUN_004c6a10(*(undefined4 *)(iVar4 + 0x10),param_3,param_3,&uStack_104);
      *(ushort *)(param_4 + 0x174a) = *(ushort *)(param_4 + 0x174a) & 0xfdff;
    }
    if (*(short *)(param_4 + 0x1754) != 0) {
      local_d4 = fVar6;
      local_d0 = fVar1;
      local_cc = fVar1;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1754),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003625f8(fVar7 * fVar2,auStack_68,&local_d4);
      FUN_0036c174(param_3,param_3,auStack_68);
    }
    if (*(short *)(param_4 + 0x1752) != 0) {
      local_d4 = fVar1;
      local_d0 = fVar6;
      local_cc = fVar1;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1752),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003625f8(fVar7 * DAT_00325a30,auStack_98,&local_d4);
      FUN_0036c174(param_3,param_3,auStack_98);
    }
    if (*(short *)(param_4 + 0x1750) != 0) {
      local_d4 = fVar1;
      local_d0 = fVar1;
      local_cc = fVar6;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1750),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003625f8(fVar6 * fVar2,auStack_c8,&local_d4);
      FUN_0036c174(param_3,param_3,auStack_c8);
    }
  }
  else {
    if (param_2 == 9) {
      if (((*DAT_00325a34 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00325a34), iVar4 != 0)) {
        *pfVar3 = fVar6;
        pfVar3[1] = fVar1;
        pfVar3[2] = fVar1;
        pfVar3[3] = fVar1;
        pfVar3[4] = fVar1;
        pfVar3[5] = fVar6;
        pfVar3[6] = fVar1;
        pfVar3[7] = fVar1;
        pfVar3[8] = fVar1;
        pfVar3[9] = fVar1;
        pfVar3[10] = fVar6;
        pfVar3[0xb] = fVar1;
      }
      FUN_00372224(auStack_98,DAT_00325a38);
      fVar7 = fVar6;
      if ((*(uint *)(param_4 + 0x29b8) & 0x10000000) != 0) {
        fVar7 = fVar8;
      }
      if (*(short *)(param_4 + 0x1758) != 0) {
        local_a4 = fVar1;
        local_a0 = fVar6;
        local_9c = fVar1;
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1758),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003625f8(fVar8 * fVar2 * fVar7,auStack_68,&local_a4);
        FUN_0036c174(auStack_98,auStack_98,auStack_68);
      }
      if (*(short *)(param_4 + 0x1756) != 0) {
        local_a4 = fVar6;
        local_a0 = fVar1;
        local_9c = fVar1;
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1756),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003625f8(fVar8 * fVar2 * fVar7,auStack_68,&local_a4);
        FUN_0036c174(auStack_98,auStack_98,auStack_68);
      }
      if (*(short *)(param_4 + 0x175a) != 0) {
        local_a4 = fVar1;
        local_a0 = fVar1;
        local_9c = fVar6;
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x175a),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003625f8(fVar6 * fVar2,auStack_68,&local_a4);
        FUN_0036c174(auStack_98,auStack_98,auStack_68);
      }
    }
    else {
      if (param_2 != 10) {
        if (param_2 == 3) {
          FUN_003255d0(&local_3c,*(undefined4 *)(param_4 + 0x27c),3);
          uVar5 = FUN_003478bc(*(undefined4 *)(param_4 + 0x27c),*(undefined2 *)((int)local_3c + 2));
          uStack_104 = 3;
          uStack_100 = 4;
          uStack_fc = 5;
          FUN_002b7770(param_1,param_4,param_4 + 0x254,uVar5,param_3);
          return 0;
        }
        if (param_2 != 6) {
          return 0;
        }
        FUN_003255d0(&local_3c,*(undefined4 *)(param_4 + 0x27c),6);
        uVar5 = FUN_003478bc(*(undefined4 *)(param_4 + 0x27c),*(undefined2 *)((int)local_3c + 2));
        uStack_104 = 6;
        uStack_100 = 7;
        uStack_fc = 8;
        FUN_002b7770(param_1,param_4,param_4 + 0x254,uVar5,param_3);
        return 0;
      }
      if ((*(uint *)(param_4 + 0x29b8) & 0x10000000) == 0) {
        return 0;
      }
      if (((*DAT_00325a34 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00325a34), iVar4 != 0)) {
        *pfVar3 = fVar6;
        pfVar3[1] = fVar1;
        pfVar3[2] = fVar1;
        pfVar3[3] = fVar1;
        pfVar3[4] = fVar1;
        pfVar3[5] = fVar6;
        pfVar3[6] = fVar1;
        pfVar3[7] = fVar1;
        pfVar3[8] = fVar1;
        pfVar3[9] = fVar1;
        pfVar3[10] = fVar6;
        pfVar3[0xb] = fVar1;
      }
      FUN_00372224(auStack_98,DAT_00325a38);
      if (*(short *)(param_4 + 0x1758) != 0) {
        local_a4 = fVar6;
        local_a0 = fVar1;
        local_9c = fVar1;
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1758),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003625f8(fVar7 * fVar2 * fVar8,auStack_68,&local_a4);
        FUN_0036c174(param_3,auStack_68,param_3);
      }
      if (*(short *)(param_4 + 0x1756) != 0) {
        local_a4 = fVar6;
        local_a0 = fVar1;
        local_9c = fVar1;
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1756),
                                           (byte)(in_fpscr >> 0x15) & 3);
        FUN_003625f8(fVar6 * fVar2 * fVar8,auStack_68,&local_a4);
        FUN_0036c174(auStack_98,auStack_98,auStack_68);
      }
    }
    FUN_0036c174(param_3,auStack_98,param_3);
  }
  return 0;
}
