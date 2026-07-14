// OoT3D decomp @ 0014690c  name=FUN_0014690c  size=2972

void FUN_0014690c(undefined4 param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  int local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4 [6];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  
  fVar3 = DAT_00146d1c;
  fVar2 = DAT_00146d18;
  fVar1 = DAT_00146d14;
  param_3 = param_3 + 0x2fc;
  iVar9 = 0;
  piVar8 = param_2;
  do {
    if (((char)piVar8[0xd] == '\x04') && (*piVar8 != 0)) {
      *(undefined4 *)(*(int *)(*piVar8 + 0xc) + 0xc) = param_1;
      iVar6 = (int)*(short *)((int)piVar8 + 0x36);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_110 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(piVar8 + 0xf),(byte)(in_fpscr >> 0x15) & 3);
      local_110 = local_110 * fVar1;
      local_10c = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3d),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_10c = local_10c * fVar1;
      local_108 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3e),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_108 = local_108 * fVar1;
      local_104 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_104 = local_104 * fVar1;
      uVar7 = FUN_003687a8(*piVar8);
      FUN_003589cc(uVar7,4);
      FUN_00358964(uVar7,4,&local_110);
      local_100 = piVar8[4];
      local_fc = piVar8[5];
      local_f8 = piVar8[6];
      local_74 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      uStack_60 = 0x3f800000;
      local_5c = 0;
      local_50 = 0;
      uStack_4c = 0x3f800000;
      local_54 = 0;
      local_68 = local_100;
      local_58 = local_fc;
      local_48 = local_f8;
      FUN_0036c174(&local_74,&local_74,param_3);
      local_100 = piVar8[1];
      local_d4[1] = 0;
      local_bc = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_fc = local_100;
      local_f8 = local_100;
      local_d4[0] = local_100;
      local_d4[5] = local_100;
      local_ac = local_100;
      FUN_0036c174(&local_74,&local_74,local_d4);
      FUN_003721e0(*piVar8,&local_74);
      *(undefined1 *)(*piVar8 + 0xac) = 1;
      FUN_00372170(*piVar8,1);
    }
    fVar5 = DAT_00146d24;
    fVar4 = DAT_00146d20;
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 0x13;
  } while (iVar9 < 0x6e);
  iVar9 = 0;
  piVar8 = param_2;
  do {
    if (((char)piVar8[0xd] == '\x02') && (*piVar8 != 0)) {
      *(undefined4 *)(*(int *)(*piVar8 + 0xc) + 0xc) = param_1;
      iVar6 = (int)*(short *)((int)piVar8 + 0x36);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_110 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(piVar8 + 0xf),(byte)(in_fpscr >> 0x15) & 3);
      local_110 = local_110 * fVar1;
      local_10c = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3d),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_10c = local_10c * fVar1;
      local_108 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3e),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_108 = local_108 * fVar1;
      local_104 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_104 = local_104 * fVar1;
      uVar7 = FUN_003687a8(*piVar8);
      FUN_003589cc(uVar7,4);
      FUN_00358964(uVar7,4,&local_110);
      local_100 = piVar8[4];
      local_fc = piVar8[5];
      local_f8 = piVar8[6];
      local_74 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      uStack_60 = 0x3f800000;
      local_5c = 0;
      local_50 = 0;
      uStack_4c = 0x3f800000;
      local_54 = 0;
      local_68 = local_100;
      local_58 = local_fc;
      local_48 = local_f8;
      FUN_0036c258((float)piVar8[3] * fVar4 * fVar5 * fVar4,&local_d8,&local_dc);
      fVar10 = fVar2 - local_dc;
      local_a4 = local_dc + fVar10 * fVar3;
      local_90 = local_dc + fVar10 * fVar2;
      local_94 = fVar10 * fVar3 * fVar2;
      local_84 = fVar10 * fVar3 * fVar3;
      local_8c = fVar10 * fVar2 * fVar3;
      local_a0 = local_94 - local_d8 * fVar3;
      local_9c = local_84 + local_d8 * fVar2;
      local_84 = local_84 - local_d8 * fVar2;
      local_94 = local_94 + local_d8 * fVar3;
      local_80 = local_8c + local_d8 * fVar3;
      local_98 = fVar3;
      local_8c = local_8c - local_d8 * fVar3;
      local_88 = fVar3;
      local_78 = fVar3;
      local_7c = local_a4;
      FUN_0036c174(&local_74,&local_74,&local_a4);
      FUN_0036c258((float)piVar8[2] * fVar4 * fVar5 * fVar4,&local_e0,&local_e4);
      fVar10 = fVar2 - local_e4;
      local_a4 = local_e4 + fVar10 * fVar2;
      local_84 = fVar10 * fVar2 * fVar3;
      local_90 = local_e4 + fVar10 * fVar3;
      local_a0 = local_84 - local_e0 * fVar3;
      local_94 = local_84 + local_e0 * fVar3;
      local_9c = local_84 + local_e0 * fVar3;
      local_8c = fVar10 * fVar3 * fVar3;
      local_98 = fVar3;
      local_84 = local_84 - local_e0 * fVar3;
      local_80 = local_8c + local_e0 * fVar2;
      local_8c = local_8c - local_e0 * fVar2;
      local_88 = fVar3;
      local_78 = fVar3;
      local_7c = local_90;
      FUN_0036c174(&local_74,&local_74,&local_a4);
      local_100 = piVar8[1];
      local_d4[1] = 0;
      local_bc = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_fc = local_100;
      local_f8 = local_100;
      local_d4[0] = local_100;
      local_d4[5] = local_100;
      local_ac = local_100;
      FUN_0036c174(&local_74,&local_74,local_d4);
      FUN_003721e0(*piVar8,&local_74);
      *(undefined1 *)(*piVar8 + 0xac) = 1;
      FUN_00372170(*piVar8,1);
    }
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 0x13;
  } while (iVar9 < 0x6e);
  iVar9 = 0;
  piVar8 = param_2;
  do {
    if (((char)piVar8[0xd] == '\x01') && (*piVar8 != 0)) {
      *(undefined4 *)(*(int *)(*piVar8 + 0xc) + 0xc) = param_1;
      iVar6 = (int)*(short *)((int)piVar8 + 0x36);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_110 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(piVar8 + 0xf),(byte)(in_fpscr >> 0x15) & 3);
      local_110 = local_110 * fVar1;
      local_10c = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3d),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_10c = local_10c * fVar1;
      local_108 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3e),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_108 = local_108 * fVar1;
      local_104 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_104 = local_104 * fVar1;
      uVar7 = FUN_003687a8(*piVar8);
      FUN_003589cc(uVar7,4);
      FUN_00358964(uVar7,4,&local_110);
      local_100 = piVar8[4];
      local_fc = piVar8[5];
      local_f8 = piVar8[6];
      local_74 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      uStack_60 = 0x3f800000;
      local_5c = 0;
      local_50 = 0;
      uStack_4c = 0x3f800000;
      local_54 = 0;
      local_68 = local_100;
      local_58 = local_fc;
      local_48 = local_f8;
      FUN_0036c258((float)piVar8[3] * fVar4 * fVar5 * fVar4,&local_e8,&local_ec);
      fVar10 = fVar2 - local_ec;
      local_a4 = local_ec + fVar10 * fVar3;
      local_90 = local_ec + fVar10 * fVar2;
      local_94 = fVar10 * fVar3 * fVar2;
      local_84 = fVar10 * fVar3 * fVar3;
      local_8c = fVar10 * fVar2 * fVar3;
      local_a0 = local_94 - local_e8 * fVar3;
      local_9c = local_84 + local_e8 * fVar2;
      local_84 = local_84 - local_e8 * fVar2;
      local_94 = local_94 + local_e8 * fVar3;
      local_80 = local_8c + local_e8 * fVar3;
      local_98 = fVar3;
      local_8c = local_8c - local_e8 * fVar3;
      local_88 = fVar3;
      local_78 = fVar3;
      local_7c = local_a4;
      FUN_0036c174(&local_74,&local_74,&local_a4);
      FUN_0036c258((float)piVar8[2] * fVar4 * fVar5 * fVar4,&local_f0,&local_f4);
      fVar10 = fVar2 - local_f4;
      local_a4 = local_f4 + fVar10 * fVar2;
      local_90 = local_f4 + fVar10 * fVar3;
      local_9c = fVar10 * fVar2 * fVar3;
      local_8c = fVar10 * fVar3 * fVar3;
      local_84 = local_9c - local_f0 * fVar3;
      local_a0 = local_9c - local_f0 * fVar3;
      local_94 = local_9c + local_f0 * fVar3;
      local_9c = local_9c + local_f0 * fVar3;
      local_80 = local_8c + local_f0 * fVar2;
      local_8c = local_8c - local_f0 * fVar2;
      local_98 = fVar3;
      local_88 = fVar3;
      local_78 = fVar3;
      local_7c = local_90;
      FUN_0036c174(&local_74,&local_74,&local_a4);
      local_100 = piVar8[1];
      local_d4[1] = 0;
      local_bc = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_fc = local_100;
      local_f8 = local_100;
      local_d4[0] = local_100;
      local_d4[5] = local_100;
      local_ac = local_100;
      FUN_0036c174(&local_74,&local_74,local_d4);
      FUN_003721e0(*piVar8,&local_74);
      *(undefined1 *)(*piVar8 + 0xac) = 1;
      FUN_00372170(*piVar8,1);
    }
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 0x13;
  } while (iVar9 < 0x6e);
  iVar9 = 0;
  piVar8 = param_2;
  do {
    if (((char)piVar8[0xd] == '\x03') && (*piVar8 != 0)) {
      *(undefined4 *)(*(int *)(*piVar8 + 0xc) + 0xc) = param_1;
      iVar6 = (int)*(short *)((int)piVar8 + 0x36);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_110 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(piVar8 + 0xf),(byte)(in_fpscr >> 0x15) & 3);
      local_110 = local_110 * fVar1;
      local_10c = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3d),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_10c = local_10c * fVar1;
      local_108 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)piVar8 + 0x3e),(byte)(in_fpscr >> 0x15) & 3
                                   );
      local_108 = local_108 * fVar1;
      local_104 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_104 = local_104 * fVar1;
      uVar7 = FUN_003687a8(*piVar8);
      FUN_003589cc(uVar7,4);
      FUN_00358964(uVar7,4,&local_110);
      local_100 = piVar8[4];
      local_fc = piVar8[5];
      local_f8 = piVar8[6];
      local_74 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      uStack_60 = 0x3f800000;
      local_5c = 0;
      local_50 = 0;
      uStack_4c = 0x3f800000;
      local_54 = 0;
      local_68 = local_100;
      local_58 = local_fc;
      local_48 = local_f8;
      FUN_0036c174(&local_74,&local_74,param_3);
      local_100 = piVar8[1];
      local_d4[1] = 0;
      local_bc = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_fc = local_100;
      local_f8 = local_100;
      local_d4[0] = local_100;
      local_d4[5] = local_100;
      local_ac = local_100;
      FUN_0036c174(&local_74,&local_74,local_d4);
      FUN_003721e0(*piVar8,&local_74);
      *(undefined1 *)(*piVar8 + 0xac) = 1;
      FUN_00372170(*piVar8,1);
    }
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 0x13;
  } while (iVar9 < 0x6e);
  iVar9 = 0;
  do {
    if (((char)param_2[0xd] == '\x05') && (*param_2 != 0)) {
      *(undefined4 *)(*(int *)(*param_2 + 0xc) + 0xc) = param_1;
      iVar6 = (int)*(short *)((int)param_2 + 0x36);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_110 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(param_2 + 0xf),(byte)(in_fpscr >> 0x15) & 3);
      local_110 = local_110 * fVar1;
      local_10c = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)param_2 + 0x3d),
                                    (byte)(in_fpscr >> 0x15) & 3);
      local_10c = local_10c * fVar1;
      local_108 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)param_2 + 0x3e),
                                    (byte)(in_fpscr >> 0x15) & 3);
      local_108 = local_108 * fVar1;
      local_104 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      local_104 = local_104 * fVar1;
      uVar7 = FUN_003687a8(*param_2);
      FUN_003589cc(uVar7,4);
      FUN_00358964(uVar7,4,&local_110);
      local_100 = param_2[4];
      local_fc = param_2[5];
      local_f8 = param_2[6];
      local_74 = 0x3f800000;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      uStack_60 = 0x3f800000;
      local_5c = 0;
      local_50 = 0;
      uStack_4c = 0x3f800000;
      local_54 = 0;
      local_68 = local_100;
      local_58 = local_fc;
      local_48 = local_f8;
      FUN_0036c174(&local_74,&local_74,param_3);
      local_100 = param_2[1];
      local_d4[1] = 0;
      local_bc = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_fc = local_100;
      local_f8 = local_100;
      local_d4[0] = local_100;
      local_d4[5] = local_100;
      local_ac = local_100;
      FUN_0036c174(&local_74,&local_74,local_d4);
      FUN_003721e0(*param_2,&local_74);
      *(undefined1 *)(*param_2 + 0xac) = 1;
      FUN_00372170(*param_2,1);
    }
    iVar9 = iVar9 + 1;
    param_2 = param_2 + 0x13;
  } while (iVar9 < 0x6e);
  return;
}

